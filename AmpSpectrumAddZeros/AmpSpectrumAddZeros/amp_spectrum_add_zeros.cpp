#include "amp_spectrum_add_zeros.h"
#define M_PI 3.1415926

CAmpSpectrumAddZeros::CAmpSpectrumAddZeros(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	M = 1;
	ui.CalPushButton->setFocus();
}

/************************************************************************/
/* 改变频率成份数目的时候， 相关对话框打开关闭响应函数*/
/************************************************************************/
void CAmpSpectrumAddZeros::on_Par0SpinBox_valueChanged(int new_value)
{
	M = new_value;
	if (M == 1)
	{
		ui.Par1Label->setEnabled(true);
		ui.Par1DoubleSpinBox->setEnabled(true);
		ui.Par2Label->setEnabled(true);
		ui.Par2DoubleSpinBox->setEnabled(true);

		ui.Par3Label->setEnabled(false);
		ui.Par3DoubleSpinBox->setEnabled(false);
		ui.Par4Label->setEnabled(false);
		ui.Par4DoubleSpinBox->setEnabled(false);
		ui.Par5Label->setEnabled(false);
		ui.Par5DoubleSpinBox->setEnabled(false);
		ui.Par6Label->setEnabled(false);
		ui.Par6DoubleSpinBox->setEnabled(false);
		ui.Par7Label->setEnabled(false);
		ui.Par7DoubleSpinBox->setEnabled(false);
		ui.Par8Label->setEnabled(false);
		ui.Par8DoubleSpinBox->setEnabled(false);
		ui.Par9Label->setEnabled(false);
		ui.Par9DoubleSpinBox->setEnabled(false);
		ui.Par10Label->setEnabled(false);
		ui.Par10DoubleSpinBox->setEnabled(false);
	}
	else if (M == 2)
	{
		ui.Par1Label->setEnabled(true);
		ui.Par1DoubleSpinBox->setEnabled(true);
		ui.Par2Label->setEnabled(true);
		ui.Par2DoubleSpinBox->setEnabled(true);
		ui.Par3Label->setEnabled(true);
		ui.Par3DoubleSpinBox->setEnabled(true);
		ui.Par4Label->setEnabled(true);
		ui.Par4DoubleSpinBox->setEnabled(true);

		ui.Par5Label->setEnabled(false);
		ui.Par5DoubleSpinBox->setEnabled(false);
		ui.Par6Label->setEnabled(false);
		ui.Par6DoubleSpinBox->setEnabled(false);
		ui.Par7Label->setEnabled(false);
		ui.Par7DoubleSpinBox->setEnabled(false);
		ui.Par8Label->setEnabled(false);
		ui.Par8DoubleSpinBox->setEnabled(false);
		ui.Par9Label->setEnabled(false);
		ui.Par9DoubleSpinBox->setEnabled(false);
		ui.Par10Label->setEnabled(false);
		ui.Par10DoubleSpinBox->setEnabled(false);
	}
	else if (M == 3)
	{
		ui.Par1Label->setEnabled(true);
		ui.Par1DoubleSpinBox->setEnabled(true);
		ui.Par2Label->setEnabled(true);
		ui.Par2DoubleSpinBox->setEnabled(true);
		ui.Par3Label->setEnabled(true);
		ui.Par3DoubleSpinBox->setEnabled(true);
		ui.Par4Label->setEnabled(true);
		ui.Par4DoubleSpinBox->setEnabled(true);
		ui.Par5Label->setEnabled(true);
		ui.Par5DoubleSpinBox->setEnabled(true);
		ui.Par6Label->setEnabled(true);
		ui.Par6DoubleSpinBox->setEnabled(true);

		ui.Par7Label->setEnabled(false);
		ui.Par7DoubleSpinBox->setEnabled(false);
		ui.Par8Label->setEnabled(false);
		ui.Par8DoubleSpinBox->setEnabled(false);
		ui.Par9Label->setEnabled(false);
		ui.Par9DoubleSpinBox->setEnabled(false);
		ui.Par10Label->setEnabled(false);
		ui.Par10DoubleSpinBox->setEnabled(false);
	}
	else if (M == 4)
	{
		ui.Par1Label->setEnabled(true);
		ui.Par1DoubleSpinBox->setEnabled(true);
		ui.Par2Label->setEnabled(true);
		ui.Par2DoubleSpinBox->setEnabled(true);
		ui.Par3Label->setEnabled(true);
		ui.Par3DoubleSpinBox->setEnabled(true);
		ui.Par4Label->setEnabled(true);
		ui.Par4DoubleSpinBox->setEnabled(true);
		ui.Par5Label->setEnabled(true);
		ui.Par5DoubleSpinBox->setEnabled(true);
		ui.Par6Label->setEnabled(true);
		ui.Par6DoubleSpinBox->setEnabled(true);
		ui.Par7Label->setEnabled(true);
		ui.Par7DoubleSpinBox->setEnabled(true);
		ui.Par8Label->setEnabled(true);
		ui.Par8DoubleSpinBox->setEnabled(true);

		ui.Par9Label->setEnabled(false);
		ui.Par9DoubleSpinBox->setEnabled(false);
		ui.Par10Label->setEnabled(false);
		ui.Par10DoubleSpinBox->setEnabled(false);
	}
	else if (M == 5)
	{
		ui.Par1Label->setEnabled(true);
		ui.Par1DoubleSpinBox->setEnabled(true);
		ui.Par2Label->setEnabled(true);
		ui.Par2DoubleSpinBox->setEnabled(true);
		ui.Par3Label->setEnabled(true);
		ui.Par3DoubleSpinBox->setEnabled(true);
		ui.Par4Label->setEnabled(true);
		ui.Par4DoubleSpinBox->setEnabled(true);
		ui.Par5Label->setEnabled(true);
		ui.Par5DoubleSpinBox->setEnabled(true);
		ui.Par6Label->setEnabled(true);
		ui.Par6DoubleSpinBox->setEnabled(true);
		ui.Par7Label->setEnabled(true);
		ui.Par7DoubleSpinBox->setEnabled(true);
		ui.Par8Label->setEnabled(true);
		ui.Par8DoubleSpinBox->setEnabled(true);
		ui.Par9Label->setEnabled(true);
		ui.Par9DoubleSpinBox->setEnabled(true);
		ui.Par10Label->setEnabled(true);
		ui.Par10DoubleSpinBox->setEnabled(true);
	}
}

/************************************************************************/
/* 点击界面“保存文件1”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CAmpSpectrumAddZeros::on_OutputFile1PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_1_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存时域合成原始信号f1(n△)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile1LineEdit->setText(output_file_1_dir);
}

/************************************************************************/
/* 点击界面“保存文件2”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CAmpSpectrumAddZeros::on_OutputFile2PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_2_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存不补零信号振幅谱F1(k)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile2LineEdit->setText(output_file_2_dir);
}

/************************************************************************/
/* 点击界面“保存文件3”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CAmpSpectrumAddZeros::on_OutputFile3PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_3_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存前补零信号f2(n△)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile3LineEdit->setText(output_file_3_dir);
}

/************************************************************************/
/* 点击界面“保存文件4”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CAmpSpectrumAddZeros::on_OutputFile4PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_4_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存前补零信号振幅谱F2(k)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile4LineEdit->setText(output_file_4_dir);
}

/************************************************************************/
/* 点击界面“保存文件5”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CAmpSpectrumAddZeros::on_OutputFile5PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_5_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存后补零信号f3(n△)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile5LineEdit->setText(output_file_5_dir);
}

/************************************************************************/
/* 点击界面“保存文件6”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CAmpSpectrumAddZeros::on_OutputFile6PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_6_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存后补零信号振幅谱F3(k)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile6LineEdit->setText(output_file_6_dir);
}

/************************************************************************/
/* 点击界面“保存文件7”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CAmpSpectrumAddZeros::on_OutputFile7PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_7_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存隔档插零信号f4(n△)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile7LineEdit->setText(output_file_7_dir);
}

/************************************************************************/
/* 点击界面“保存文件8”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CAmpSpectrumAddZeros::on_OutputFile8PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_8_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存隔档插零信号振幅谱F4(k)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile8LineEdit->setText(output_file_8_dir);
}

/************************************************************************/
/* 点击界面“计算”按钮的响应函数,完成具体的计算  */
/************************************************************************/
void CAmpSpectrumAddZeros::on_CalPushButton_clicked()
{
	//从对话框界面中提取信息赋值给程序内部的对应变量,如下示例
	M = ui.Par0SpinBox->value();
	coeff_A[0] = ui.Par1DoubleSpinBox->value();
	coeff_A[1] = ui.Par3DoubleSpinBox->value();
	coeff_A[2] = ui.Par5DoubleSpinBox->value();
	coeff_A[3] = ui.Par7DoubleSpinBox->value();
	coeff_A[4] = ui.Par9DoubleSpinBox->value();
	f[0] = ui.Par2DoubleSpinBox->value();
	f[1] = ui.Par4DoubleSpinBox->value();
	f[2] = ui.Par6DoubleSpinBox->value();
	f[3] = ui.Par8DoubleSpinBox->value();
	f[4] = ui.Par10DoubleSpinBox->value();
	N = round(ui.Par11DoubleSpinBox->value());
	time_samp_interval = ui.Par12DoubleSpinBox->value() / 1000.0;

	//从对话框界面中提取补零参数赋值给程序内部变量
	add_zeros_num_in_front = round(ui.Par13DoubleSpinBox->value());
	add_zeros_num_at_back = round(ui.Par14DoubleSpinBox->value());
	add_zeros_num_insert = round(ui.Par15DoubleSpinBox->value());

	//从对话框界面中提取输出文件路径
	output_file_1_dir = ui.OutputFile1LineEdit->text();
	output_file_2_dir = ui.OutputFile2LineEdit->text();
	output_file_3_dir = ui.OutputFile3LineEdit->text();
	output_file_4_dir = ui.OutputFile4LineEdit->text();
	output_file_5_dir = ui.OutputFile5LineEdit->text();
	output_file_6_dir = ui.OutputFile6LineEdit->text(); 
	output_file_7_dir = ui.OutputFile7LineEdit->text();
	output_file_8_dir = ui.OutputFile8LineEdit->text();

	//自行更改代码生成信号f1(n△)
	signal_f1 = allocate1float(N);
	for (int i = 0; i < N; i++)
	{
		signal_f1[i] = 0;
		for (int j = 0; j < M;j++)
		{
			float nDelta = i*time_samp_interval;
			signal_f1[i] += coeff_A[j]*sin(2*M_PI*f[j]*nDelta);
		}	
	}

	//自行更改代码生成前补零信号f2(n△)
	N_after_add_zero_in_front = N + add_zeros_num_in_front;//补零后序列的总长度
	signal_f2 = allocate1float(N_after_add_zero_in_front);//定位内存空间位置
	int j = 0;
	for (int i = 0; i < N_after_add_zero_in_front; i++)
	{
		signal_f2[i] = 0;
		if (i >= add_zeros_num_in_front)
		{
			signal_f2[i] = signal_f1[j];
			j++;
			}
		}

	//自行更改代码生成后补零信号f3(n△)
	N_after_add_zero_at_back = N + add_zeros_num_at_back;
	signal_f3 = allocate1float(N_after_add_zero_at_back);
	for (int i = 0; i < N_after_add_zero_at_back; i++)
	{
		signal_f3[i] = 0;
		if (i < N)
		{
			signal_f3[i] = signal_f1[i];
		}else{
			signal_f3[i] = 0;
		}
	}

	//自行更改代码生成隔档补零信号f4(n△)
	N_after_add_zero_insert = N + add_zeros_num_insert*(N-1);//在相邻的两个样点之间插入数据
	signal_f4 = allocate1float(N_after_add_zero_insert);
	for (int i = 0; i < N_after_add_zero_insert; i++)
	{
		//隔档补零的方法,若隔档补零数=0，则原数据不动；若隔档补零数=1，则相邻的两个原数据中间插入一个零；若隔档补零数=2，则相邻的两个原数据中间插入两个零；以此类推......，程序设定最多可以插入五个零
		if (add_zeros_num_insert == 0)
		{
			signal_f4[i] = signal_f1[i];
		}
		else if (add_zeros_num_insert == 1)
		{
			if (i % 2 == 0){
				signal_f4[i] = signal_f1[i / 2];
			}
			else{
				signal_f4[i] = 0.0;
			}
		}
		else if (add_zeros_num_insert == 2)
		{
			if (i % 3 == 0){
				signal_f4[i] = signal_f1[i / 3];
			}
			else{
				signal_f4[i] = 0;
			}
		}
		else if (add_zeros_num_insert == 3)
		{
			if (i % 4 == 0){
				signal_f4[i] = signal_f1[i / 4];
			}
			else{
				signal_f4[i] = 0;
			}
		}
		else if (add_zeros_num_insert == 4)
		{
			if (i % 5 == 0){
				signal_f4[i] = signal_f1[i / 5];;
			}
			else{
				signal_f4[i] = 0;
			}
		}
		else if (add_zeros_num_insert == 5)
		{
			if (i % 6 == 0){
				signal_f4[i] = signal_f1[i / 6];
			}
			else{
				signal_f4[i] = 0;
			}
		}
	}

	//对原始信号f1(n△)进行快速傅里叶变换
	fft_num = 256;    //傅里叶变换点数预设256个
	while (fft_num < N)    //如果傅里叶变换样点数少于信号本身的样点数,以2的整次幂形式递增
	{
		fft_num *= 2;
	}
	fre_samp_interval = 1.0 / (fft_num*time_samp_interval);  //计算频率采样间隔
	//临时使用的数组,傅里叶变换的实部、虚部、振幅谱、相位谱
	float* fft_re = allocate1float(fft_num);
	float* fft_im = allocate1float(fft_num);
	float* fft_amp_spectrum = allocate1float(fft_num);
	float* fft_phase_spectrum = allocate1float(fft_num);
	signal_F1 = allocate1float(fft_num);
	//将原始信号f1(n△)赋值给傅里叶变换的输入数组
	for (int i = 0; i < fft_num; i++)
	{
		fft_re[i] = 0.0; fft_im[i] = 0.0;
		//信号是实信号,只给实部赋值
		if (i < N)
		{
			fft_re[i] = signal_f1[i];
		}
	}
	//傅里叶正变换(若反变换,要将最后一个形参改为-1)
	fft(fft_re, fft_im, fft_num, 1);
	//计算振幅谱和相位谱
	for (int i = 0; i < fft_num; i++)
	{
		//这里根据振幅谱和相位谱的计算公式更改等号右侧表达式，相位谱计算时注意反正切函数的区间拓展映射为±π
		fft_amp_spectrum[i] = sqrt(fft_re[i] * fft_re[i] + fft_im[i] * fft_im[i]);
		fft_phase_spectrum[i] = atan2(fft_im[i], fft_re[i]);
	}
	//将信号振幅谱(或相位谱)赋值给输出数组
	for (int i = 0; i < fft_num; i++)
	{
		signal_F1[i] = fft_amp_spectrum[i];
	}

	//输出时域合成原始信号f1(n△)
	output_file(N, time_samp_interval, signal_f1, output_file_1_dir);

	//输出不补零信号振幅谱F1(k)
	output_file(fft_num, fre_samp_interval, signal_F1, output_file_2_dir);

	//对前补零信号f2(n△)进行快速傅里叶变换
	//释放数组内存空间
	free1float(fft_re);
	free1float(fft_im);
	free1float(fft_amp_spectrum);
	free1float(fft_phase_spectrum);
	fft_num = 256;    //傅里叶变换点数预设256个
	while (fft_num < N_after_add_zero_in_front)    //如果傅里叶变换样点数少于信号本身的样点数,以2的整次幂形式递增
	{
		fft_num *= 2;
	}
	fre_samp_interval = 1.0 / (fft_num*time_samp_interval);  //计算频率采样间隔
	//临时使用的数组,傅里叶变换的实部、虚部、振幅谱、相位谱
	fft_re = allocate1float(fft_num);
	fft_im = allocate1float(fft_num);
	fft_amp_spectrum = allocate1float(fft_num);
	fft_phase_spectrum = allocate1float(fft_num);
	signal_F2 = allocate1float(fft_num);
	//将原始信号f1(n△)赋值给傅里叶变换的输入数组
	for (int i = 0; i < fft_num; i++)
	{
		fft_re[i] = 0.0; fft_im[i] = 0.0;
		//信号是实信号,只给实部赋值
		if (i < N_after_add_zero_in_front)
		{
			fft_re[i] = signal_f2[i];
		}
	}
	//傅里叶正变换(若反变换,要将最后一个形参改为-1)
	fft(fft_re, fft_im, fft_num, 1);
	//计算振幅谱和相位谱
	for (int i = 0; i < fft_num; i++)
	{
		//这里根据振幅谱和相位谱的计算公式更改等号右侧表达式，相位谱计算时注意反正切函数的区间拓展映射为±π
		fft_amp_spectrum[i] = sqrt(fft_re[i] * fft_re[i] + fft_im[i] * fft_im[i]);
		fft_phase_spectrum[i] = atan2(fft_im[i], fft_re[i]);
	}
	//将信号振幅谱(或相位谱)赋值给输出数组
	for (int i = 0; i < fft_num; i++)
	{
		signal_F2[i] = fft_amp_spectrum[i];
	}

	//输出前补零信号f2(n△)
	output_file(N_after_add_zero_in_front, time_samp_interval, signal_f2, output_file_3_dir);

	//输出前补零信号振幅谱F2(k)
	output_file(fft_num, fre_samp_interval, signal_F2, output_file_4_dir);

	//对后补零信号f3(n△)进行快速傅里叶变换
	//释放数组内存空间
	free1float(fft_re);
	free1float(fft_im);
	free1float(fft_amp_spectrum);
	free1float(fft_phase_spectrum);
	fft_num = 256;    //傅里叶变换点数预设256个
	while (fft_num < N_after_add_zero_at_back)    //如果傅里叶变换样点数少于信号本身的样点数,以2的整次幂形式递增
	{
		fft_num *= 2;
	}
	fre_samp_interval = 1.0 / (fft_num*time_samp_interval);  //计算频率采样间隔
	//临时使用的数组,傅里叶变换的实部、虚部、振幅谱、相位谱
	fft_re = allocate1float(fft_num);
	fft_im = allocate1float(fft_num);
	fft_amp_spectrum = allocate1float(fft_num);
	fft_phase_spectrum = allocate1float(fft_num);
	signal_F3 = allocate1float(fft_num);
	//将原始信号f1(n△)赋值给傅里叶变换的输入数组
	for (int i = 0; i < fft_num; i++)
	{
		fft_re[i] = 0.0; fft_im[i] = 0.0;
		//信号是实信号,只给实部赋值
		if (i < N_after_add_zero_at_back)
		{
			fft_re[i] = signal_f3[i];
		}
	}
	//傅里叶正变换(若反变换,要将最后一个形参改为-1)
	fft(fft_re, fft_im, fft_num, 1);
	//计算振幅谱和相位谱
	for (int i = 0; i < fft_num; i++)
	{
		//这里根据振幅谱和相位谱的计算公式更改等号右侧表达式，相位谱计算时注意反正切函数的区间拓展映射为±π
		fft_amp_spectrum[i] = sqrt(fft_re[i] * fft_re[i] + fft_im[i] * fft_im[i]);
		fft_phase_spectrum[i] = atan2(fft_im[i], fft_re[i]);
	}
	//将信号振幅谱(或相位谱)赋值给输出数组
	for (int i = 0; i < fft_num; i++)
	{
		signal_F3[i] = fft_amp_spectrum[i];
	}

	//输出后补零信号f3(n△)
	output_file(N_after_add_zero_at_back, time_samp_interval, signal_f3, output_file_5_dir);

	//输出后补零信号振幅谱F3(k)
	output_file(fft_num, fre_samp_interval, signal_F3, output_file_6_dir);

	//对隔档补零信号f4(n△)进行快速傅里叶变换
	//释放数组内存空间
	free1float(fft_re);
	free1float(fft_im);
	free1float(fft_amp_spectrum);
	free1float(fft_phase_spectrum);
	fft_num = 256;    //傅里叶变换点数预设256个
	while (fft_num < N_after_add_zero_insert)    //如果傅里叶变换样点数少于信号本身的样点数,以2的整次幂形式递增
	{
		fft_num *= 2;
	}
	fre_samp_interval = 1.0 / (fft_num*time_samp_interval);  //计算频率采样间隔
	//临时使用的数组,傅里叶变换的实部、虚部、振幅谱、相位谱
	fft_re = allocate1float(fft_num);
	fft_im = allocate1float(fft_num);
	fft_amp_spectrum = allocate1float(fft_num);
	fft_phase_spectrum = allocate1float(fft_num);
	signal_F4 = allocate1float(fft_num);
	//将原始信号f1(n△)赋值给傅里叶变换的输入数组
	for (int i = 0; i < fft_num; i++)
	{
		fft_re[i] = 0.0; fft_im[i] = 0.0;
		//信号是实信号,只给实部赋值
		if (i < N_after_add_zero_insert)
		{
			fft_re[i] = signal_f4[i];
		}
	}
	//傅里叶正变换(若反变换,要将最后一个形参改为-1)
	fft(fft_re, fft_im, fft_num, 1);
	//计算振幅谱和相位谱
	for (int i = 0; i < fft_num; i++)
	{
		//这里根据振幅谱和相位谱的计算公式更改等号右侧表达式，相位谱计算时注意反正切函数的区间拓展映射为±π
		fft_amp_spectrum[i] = sqrt(fft_re[i] * fft_re[i] + fft_im[i] * fft_im[i]);
		fft_phase_spectrum[i] = atan2(fft_im[i], fft_re[i]);
	}
	//将信号振幅谱(或相位谱)赋值给输出数组
	for (int i = 0; i < fft_num; i++)
	{
		signal_F4[i] = fft_amp_spectrum[i];
	}

	//输出隔档补零信号f4(n△)
	output_file(N_after_add_zero_insert, time_samp_interval, signal_f4, output_file_7_dir);

	//输出隔档补零信号振幅谱F4(k)
	output_file(fft_num, fre_samp_interval, signal_F4, output_file_8_dir);

	//释放数组内存空间
	free1float(fft_re);
	free1float(fft_im);
	free1float(fft_amp_spectrum);
	free1float(fft_phase_spectrum);
	free1float(signal_f1);
	free1float(signal_f2);
	free1float(signal_f3);
	free1float(signal_f4);
	free1float(signal_F1);
	free1float(signal_F2);
	free1float(signal_F3);
	free1float(signal_F4);

	accept();
}

/************************************************************************/
//点击界面“取消”按钮的响应函数,作用为关闭用户对话框界面
/************************************************************************/
void CAmpSpectrumAddZeros::on_CancelPushButton_clicked()
{
	reject();
}

/************************************************************************/
/* 傅里叶变换,参数:(输入/输出的实部,输入/输出的虚部,傅里叶变换长度（2的整次幂）,*/
/* 正反变换标记(1为正变换;-1为反变换)) */
/************************************************************************/
void CAmpSpectrumAddZeros::fft(float* Re, float* Im, int n, int isign)
{
	float PI = 3.1415926;
	PI = 4.0*atanf(1.0);
	int i, j, k, m, nextk, N2, length, length1;
	float T1, T2, U1, U2, W1, W2, a, b, c, d;
	N2 = n / 2; j = 0;
	for (i = 0; i < n - 1; i++)
	{
		if (i < j)
		{
			T1 = Re[j]; T2 = Im[j];
			Re[j] = Re[i]; Im[j] = Im[i];
			Re[i] = T1; Im[i] = T2;
		}
		k = N2;
		while (k <= j)
		{
			j = j - k;
			k = k / 2;
		}
		j = j + k;
	}
	m = int(logf(double(n)) / logf(2.0));
	for (i = 1; i <= m; i++)
	{
		length = int(powf(2.0, i));
		length1 = int(powf(2.0, i - 1));
		U1 = 1.0; U2 = 0.0;
		W1 = cosf(PI / length1); W2 = -sinf(PI / length1)*isign;
		if (fabsf(W2) <= 6e-008)
		{
			W2 = 0.0;
		}
		if (fabsf(W1) <= 6e-008)
		{
			W1 = 0.0;
		}
		for (j = 0; j < length1; j++)
		{
			for (k = j; k < n; k += length)
			{
				nextk = k + length1;
				T1 = Re[nextk] * U1 - Im[nextk] * U2;
				T2 = Re[nextk] * U2 + Im[nextk] * U1;
				Re[nextk] = Re[k] - T1;
				Im[nextk] = Im[k] - T2;
				Re[k] = Re[k] + T1;
				Im[k] = Im[k] + T2;
			}
			a = U1*W1; b = U2*W2; c = U2*W1; d = U1*W2;
			U1 = a - b;
			U2 = c + d;
		}
	}
	//傅里叶反变换，输出前除掉积分号号前面的周期（对离散傅里叶变换,周期为傅里叶变换点数）
	if (isign == -1)
	{
		for (i = 0; i < n; i++)
		{
			Re[i] = Re[i] / n;
			Im[i] = Im[i] / n;
		}
	}
}

/************************************************************************/
/* 输出文件，参数（待输出序列的采样点数，待输出序列的采样间隔(时间间隔或频率间隔)，  */
/* 待输出序列样点值存储数组，待输出文件的存储路径） */
/************************************************************************/
void CAmpSpectrumAddZeros::output_file(int Output_Sample_Num, float Output_Sample_interval,
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
			out << codec->toUnicode("Position") << "  " << codec->toUnicode("Value") << " " << endl;
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