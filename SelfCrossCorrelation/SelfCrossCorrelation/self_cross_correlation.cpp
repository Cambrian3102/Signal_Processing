#include "self_cross_correlation.h"
#define PI 3.1415926

CSelfCrossCorrelation::CSelfCrossCorrelation(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.CalPushButton->setFocus();
}

/************************************************************************/
/* 点击界面“保存文件1”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile1PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_1_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存周期信号F0"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile1LineEdit->setText(output_file_1_dir);
}

/************************************************************************/
/* 点击界面“保存文件2”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile2PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_2_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存非周期信号F1"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile2LineEdit->setText(output_file_2_dir);
}

/************************************************************************/
/* 点击界面“保存文件3”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile3PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_3_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存周期信号F0的自相关Rxx"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile3LineEdit->setText(output_file_3_dir);
}

/************************************************************************/
/* 点击界面“保存文件4”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile4PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_4_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存非周期信号F1的自相关Ryy"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile4LineEdit->setText(output_file_4_dir);
}

/************************************************************************/
/* 点击界面“保存文件5”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile5PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_5_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存F0与F1的互相关Rxy"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile5LineEdit->setText(output_file_5_dir);
}

/************************************************************************/
/* 点击界面“保存文件6”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile6PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_6_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存F1与F0的互相关Ryx"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile6LineEdit->setText(output_file_6_dir);
}

/************************************************************************/
/* 点击界面“保存文件7”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile7PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_7_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存F0与F1的互相关Rxy的翻转序列"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile7LineEdit->setText(output_file_7_dir);
}

/************************************************************************/
/* 点击界面“计算”按钮的响应函数,完成具体的计算  */
/************************************************************************/
void CSelfCrossCorrelation::on_CalPushButton_clicked()
{
	//从对话框界面中提取信息赋值给程序内部的对应变量,如下示例
	f0 = ui.Par1DoubleSpinBox->value();
	f1 = ui.Par2DoubleSpinBox->value();
	coeff_A0 = ui.Par3DoubleSpinBox->value();
	coeff_A1 = ui.Par4DoubleSpinBox->value();
	N0 = round(ui.Par5DoubleSpinBox->value());
	N1 = round(ui.Par6DoubleSpinBox->value());
	coeff_beta = ui.Par7DoubleSpinBox->value();
	time_samp_interval = ui.Par8DoubleSpinBox->value() / 1000.0;
	

	//从对话框界面中提取输出文件路径
	output_file_1_dir = ui.OutputFile1LineEdit->text();
	output_file_2_dir = ui.OutputFile2LineEdit->text();
	output_file_3_dir = ui.OutputFile3LineEdit->text();
	output_file_4_dir = ui.OutputFile4LineEdit->text();
	output_file_5_dir = ui.OutputFile5LineEdit->text();
	output_file_6_dir = ui.OutputFile6LineEdit->text();
	output_file_7_dir = ui.OutputFile7LineEdit->text();

	//自行更改代码生成周期信号F0
	signal_F0 = allocate1float(N0);
	for (int i = 0; i < N0; i++)
	{
		float nDelta = i * time_samp_interval;
		signal_F0[i] = coeff_A0 * sin(2 * PI * f0 * nDelta);
	}

	//自行更改代码生成非周期信号F2
	signal_F1 = allocate1float(N1);
	for (int i = 0; i < N1; i++)
	{
		float nDelta = i * time_samp_interval;
		signal_F1[i] = coeff_A1 * exp(-coeff_beta * nDelta * nDelta) * cos(2 * PI * f1 * nDelta);
	}

	//对周期信号F0进行自相关计算
	int corr_samp_num_0 = 2 * N0 - 1;
	self_correlation_F0 = allocate1float(corr_samp_num_0);
	correlation(signal_F0, signal_F0, self_correlation_F0, N0, N0, corr_samp_num_0);

	//对非周期信号F1进行自相关计算
	int corr_samp_num_1 = 2 * N1 - 1;
	self_correlation_F1 = allocate1float(corr_samp_num_1);
	correlation(signal_F1, signal_F1, self_correlation_F1, N1, N1, corr_samp_num_1);

	//对信号F0与F1进行互相关计算
	int cross_corr_samp_num_0_1 = N0 + N1 - 1;
	cross_correlation_F0_F1 = allocate1float(cross_corr_samp_num_0_1);
	correlation(signal_F0, signal_F1, cross_correlation_F0_F1, N0, N1, cross_corr_samp_num_0_1);

	//对信号F0与F1的互相关结果取逆序列
	cross_correlation_F0_F1_reverse_order = allocate1float(cross_corr_samp_num_0_1);
	for (int i = 0; i < cross_corr_samp_num_0_1; i++)
	{
		cross_correlation_F0_F1_reverse_order[i] = cross_correlation_F0_F1[cross_corr_samp_num_0_1 - 1 - i];
	}

	//对信号F1与F0进行互相关计算
	int cross_corr_samp_num_1_0 = N1 + N0 - 1;
	cross_correlation_F1_F0 = allocate1float(cross_corr_samp_num_1_0);
	correlation(signal_F1, signal_F0, cross_correlation_F1_F0, N1, N0, cross_corr_samp_num_1_0);

	//输出周期信号F0
	output_file(N0, time_samp_interval, signal_F0, output_file_1_dir);

	//输出非周期信号F1
	output_file(N1, time_samp_interval, signal_F1, output_file_2_dir);

	//输出周期信号F0的自相关
	output_file(-corr_samp_num_0 / 2, corr_samp_num_0 / 2, time_samp_interval, self_correlation_F0, output_file_3_dir);

	//输出非周期信号F1的自相关
	output_file(-corr_samp_num_1 / 2, corr_samp_num_1 / 2, time_samp_interval, self_correlation_F1, output_file_4_dir);

	//输出信号F0与F1的互相关
	output_file(-(N1 - 1), N0 - 1, time_samp_interval, cross_correlation_F0_F1, output_file_5_dir);

	//输出信号F1与F0的互相关
	output_file(-(N0 - 1), N1 - 1, time_samp_interval, cross_correlation_F1_F0, output_file_6_dir);

	//输出信号F0与F1互相关的逆序
	output_file(-(N0 - 1), N1 - 1, time_samp_interval, cross_correlation_F0_F1_reverse_order, output_file_7_dir);

	//释放数组内存空间
	free1float(signal_F0);
	free1float(signal_F1);
	free1float(self_correlation_F0);
	free1float(self_correlation_F1);
	free1float(cross_correlation_F0_F1);
	free1float(cross_correlation_F1_F0);
	free1float(cross_correlation_F0_F1_reverse_order);

	accept();
}

/************************************************************************/
//点击界面“取消”按钮的响应函数,作用为关闭用户对话框界面
/************************************************************************/
void CSelfCrossCorrelation::on_CancelPushButton_clicked()
{
	reject();
}

/************************************************************************/
/* 相关计算子函数,参数:(序列1,序列2,相关计算结果,序列1的样点数目,序列2的样点数目,*/
/* 相关结果序列的样点数目) */
/************************************************************************/
void CSelfCrossCorrelation::correlation(float* Array_A, float* Array_B, float* Array_Result,
	int Num_A, int Num_B, int Num_Result)
{
    for (int n = 0; n < Num_Result; ++n)
    {
        Array_Result[n] = 0.0; // 初始化

        for (int i = 0; i < Num_A; i++)
        {
            int j = i + n - (Num_Result / 2); 

            if (j >= 0 && j < Num_B)
            {
                Array_Result[n] += Array_B[i] * Array_A[j];
            }
        }
    }
}

/************************************************************************/
/* 输出文件，参数（待输出序列的采样点数，待输出序列的采样间隔(时间间隔或频率间隔)，  */
/* 待输出序列样点值存储数组，待输出文件的存储路径） */
/************************************************************************/
void CSelfCrossCorrelation::output_file(int Output_Sample_Num, float Output_Sample_interval,
	float* Output_Sample_Data, QString Output_File_Dir)
{
	if (Output_File_Dir != "")     //路径存在才执行写出
	{
		//调用QT写文件代码,执行文本写出
		QFile file_save(Output_File_Dir);
		if (file_save.open(QIODevice::WriteOnly | QIODevice::Text))
		{
			QTextStream out(&file_save);
			//为保证汉字输出无乱码，添加编码规则
			QTextCodec *codec = QTextCodec::codecForName("GB18030");
			//文本第一行输出数据名称标题，以空格隔开
			out << codec->toUnicode("采样点位置") << "  " << codec->toUnicode("采样点上的值") << " " << endl;
			out.setRealNumberNotation(QTextStream::FixedNotation);
			out.setRealNumberPrecision(6);   //设置输出数据的精度
			//循环输出数据，一个数据占一行
			for (int i = 0; i < Output_Sample_Num; i++)
			{
				out << i*Output_Sample_interval << "  " << Output_Sample_Data[i];
				out << endl;
			}
		}
		file_save.close();
	}
}

/************************************************************************/
/* 重载函数,输出自(互)相关文件,针对从负时间起步的数据，参数（待输出序列的起步采样点位置，  */
/* 待输出序列的终止采样点位置,待输出序列的采样间隔(时间间隔或频率间隔)， */
/* 待输出序列样点值存储数组，待输出文件的存储路径） */
/************************************************************************/
void CSelfCrossCorrelation::output_file(int Output_Start_Pos, int Output_End_Pos, float Output_Sample_interval, float* Output_Sample_Data, QString Output_File_Dir)
{
	if (Output_File_Dir != "")     //路径存在才执行写出
	{
		int Output_Sample_Num = Output_End_Pos - Output_Start_Pos + 1;
		//调用QT写文件代码,执行文本写出
		QFile file_save(Output_File_Dir);
		if (file_save.open(QIODevice::WriteOnly | QIODevice::Text))
		{
			QTextStream out(&file_save);
			//为保证汉字输出无乱码，添加编码规则
			QTextCodec *codec = QTextCodec::codecForName("GB18030");
			//文本第一行输出数据名称标题，以空格隔开
			out << codec->toUnicode("采样点位置") << "  " << codec->toUnicode("采样点上的值") << " " << endl;
			out.setRealNumberNotation(QTextStream::FixedNotation);
			out.setRealNumberPrecision(6);   //设置输出数据的精度
			//循环输出数据，一个数据占一行
			for (int i = 0; i < Output_Sample_Num; i++)
			{
				out << (i + Output_Start_Pos)*Output_Sample_interval << "  " << Output_Sample_Data[i];
				out << endl;
			}
		}
		file_save.close();
	}
}