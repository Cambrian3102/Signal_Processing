#include "time_filtering.h"
#define M_PI 3.1415926

CTimeFiltering::CTimeFiltering(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.CalPushButton->setFocus();
}

/************************************************************************/
/* 点击界面“保存文件1”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CTimeFiltering::on_OutputFile1PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_1_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存信号s"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile1LineEdit->setText(output_file_1_dir);
}

/************************************************************************/
/* 点击界面“保存文件2”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CTimeFiltering::on_OutputFile2PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_2_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存信号p"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile2LineEdit->setText(output_file_2_dir);
}

/************************************************************************/
/* 点击界面“保存文件3”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CTimeFiltering::on_OutputFile3PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_3_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存信号x"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile3LineEdit->setText(output_file_3_dir);
}

/************************************************************************/
/* 点击界面“保存文件4”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CTimeFiltering::on_OutputFile4PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_4_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存时域滤波因子h"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile4LineEdit->setText(output_file_4_dir);
}

/************************************************************************/
/* 点击界面“保存文件5”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CTimeFiltering::on_OutputFile5PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_5_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存滤波输出结果y"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile5LineEdit->setText(output_file_5_dir);
}

/************************************************************************/
/* 点击界面“计算”按钮的响应函数,完成具体的计算  */
/************************************************************************/
void CTimeFiltering::on_CalPushButton_clicked()
{
	//从对话框界面中提取信息赋值给程序内部的对应变量,如下示例
	f1 = ui.Par1DoubleSpinBox->value();
	f2 = ui.Par2DoubleSpinBox->value();
	f3 = ui.Par3DoubleSpinBox->value();
	f4 = ui.Par4DoubleSpinBox->value();
	N = round(ui.Par5DoubleSpinBox->value());
	time_samp_interval = ui.Par6DoubleSpinBox->value() / 1000.0;
	coeff_beta = ui.Par8DoubleSpinBox->value();
	coeff_A1 = ui.Par9DoubleSpinBox->value();
	coeff_A2 = ui.Par10DoubleSpinBox->value();
	coeff_A3 = ui.Par11DoubleSpinBox->value();

	//从对话框界面中提取时域滤波因子参数赋值给程序内部变量
	M = round(ui.Par7DoubleSpinBox->value());
	low_cut_fre = ui.Par12DoubleSpinBox->value();
	high_cut_fre = ui.Par13DoubleSpinBox->value();
	if (M%2==0)     //为确保时域滤波因子左右对称,采样点数取奇数
	{
		M += 1;
	}

	//从对话框界面中提取输出文件路径
	output_file_1_dir = ui.OutputFile1LineEdit->text();
	output_file_2_dir = ui.OutputFile2LineEdit->text();
	output_file_3_dir = ui.OutputFile3LineEdit->text();
	output_file_4_dir = ui.OutputFile4LineEdit->text();
	output_file_5_dir = ui.OutputFile5LineEdit->text();

	//自行更改代码生成信号s(n△)
	signal_s = allocate1float(N);
	for (int i = 0; i < N; i++)
	{
		float nDelta = i * time_samp_interval;
		signal_s[i] = coeff_A1 * exp(-coeff_beta * nDelta * nDelta) * sin(2 * M_PI * f1 * nDelta) +
			coeff_A2 * exp(-coeff_beta * nDelta * nDelta) * sin(2 * M_PI * f2 * nDelta);
	}

	//自行更改代码生成信号p(n△)
	signal_p = allocate1float(N);
	for (int i = 0; i < N; i++)
	{
		float nDelta = i * time_samp_interval;
		signal_p[i] = coeff_A3 * (sin(2 * M_PI * f3 * nDelta) + cos(2 * M_PI*f4 * nDelta));
	}

	//自行更改代码生成信号x(n△)
	signal_x = allocate1float(N);
	for (int i = 0; i < N; i++)
	{
		signal_x[i] = signal_s[i] + signal_p[i];
	}

	//自行更改代码生成时域滤波因子h
	filter_h = allocate1float(M);
	for (int i = 0; i < M; i++)
	{
		double omega_0 = (low_cut_fre + high_cut_fre) / 2;
		double delta_omega = (high_cut_fre - low_cut_fre) / 2;
		int middle = omega_0;
		double t = i * time_samp_interval;
		if (fabs(t) < 1e-9) {
			filter_h[i] = 2.0 * delta_omega / M_PI;
		}
		else {
			filter_h[i] = (2.0 / (M_PI * t)) * cos(omega_0 * t) * sin(delta_omega * t);
		}
	}

	//信号x与滤波因子h做褶积
	int conv_point_num = M + N - 1;
	signal_y = allocate1float(conv_point_num);
	convolution(signal_x, filter_h, signal_y, N, M, conv_point_num);

	//输出信号s
	output_file(N, time_samp_interval, signal_s, output_file_1_dir);

	//输出信号p
	output_file(N, time_samp_interval, signal_p, output_file_2_dir);

	//输出信号x
	output_file(N, time_samp_interval, signal_x, output_file_3_dir);

	//输出时域滤波因子h
	output_file(M, time_samp_interval, filter_h, output_file_4_dir);

	//输出褶积滤波结果y
	output_file(conv_point_num, time_samp_interval, signal_y, output_file_5_dir);

	//释放数组内存空间
	free1float(signal_s);
	free1float(signal_p);
	free1float(signal_x);
	free1float(filter_h);
	free1float(signal_y);

	accept();
}

/************************************************************************/
//点击界面“取消”按钮的响应函数,作用为关闭用户对话框界面
/************************************************************************/
void CTimeFiltering::on_CancelPushButton_clicked()
{
	reject();
}

/************************************************************************/
/* 褶积计算子函数,参数:(序列1,序列2,褶积计算结果,序列1的样点数目,序列2的样点数目,*/
/* 褶积结果序列的样点数目) */
/************************************************************************/
void CTimeFiltering::convolution(float* Array_A, float* Array_B, float* Array_Result,
	int Num_A, int Num_B, int Num_Result)
{
	for (int i = 0; i < Num_Result; i++){
		Array_Result[i] = 0;
	}
	for (int j = 0; j < Num_A; j++){
		for (int i = 0; i < Num_B; i++){
			if (j - i >= 0 && j - i < Num_B){
				Array_Result[i] += Array_A[j] * Array_B[j - i];
			}
		}
	}
}

/************************************************************************/
/* 输出文件，参数（待输出序列的采样点数，待输出序列的采样间隔(时间间隔或频率间隔)，  */
/* 待输出序列样点值存储数组，待输出文件的存储路径） */
/************************************************************************/
void CTimeFiltering::output_file(int Output_Sample_Num, float Output_Sample_interval,
	float* Output_Sample_Data, QString Output_File_Dir)
{
	if (Output_File_Dir!="")      //文件路径存在才写出
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