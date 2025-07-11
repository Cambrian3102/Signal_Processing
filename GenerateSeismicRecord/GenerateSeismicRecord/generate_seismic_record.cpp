#include "generate_seismic_record.h"
#define M_PI 3.1415926

CGenerateSeismicRecord::CGenerateSeismicRecord(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.CalPushButton->setFocus();
}

/************************************************************************/
/* 点击界面“保存文件1”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile1PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_1_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存雷克子波信号b(t)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile1LineEdit->setText(output_file_1_dir);
}

/************************************************************************/
/* 点击界面“保存文件2”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile2PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_2_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存随机噪音信号n(t)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile2LineEdit->setText(output_file_2_dir);
}

/************************************************************************/
/* 点击界面“保存文件3”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile3PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_3_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存地层反射系数ξ(t)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile3LineEdit->setText(output_file_3_dir);
}

/************************************************************************/
/* 点击界面“保存文件4”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile4PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_4_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存含噪音的合成地震记录x(t)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile4LineEdit->setText(output_file_4_dir);
}

/************************************************************************/
/* 点击界面“保存文件5”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile5PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_5_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存雷克子波的振幅谱B(k)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile5LineEdit->setText(output_file_5_dir);
}

/************************************************************************/
/* 点击界面“保存文件6”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile6PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_6_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存不含噪音合成地震记录的振幅谱S(k)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile6LineEdit->setText(output_file_6_dir);
}

/************************************************************************/
/* 点击界面“保存文件7”按钮的响应函数,从写出文件对话框中接收用户的文件路径信息,并回返在界面上 */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile7PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_7_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("保存含噪音合成地震记录的振幅谱X(k)"),
		"", codec->toUnicode("文件 (*.txt)"));
	ui.OutputFile7LineEdit->setText(output_file_7_dir);
}

/************************************************************************/
/* 点击界面“计算”按钮的响应函数,完成具体的计算  */
/************************************************************************/
void CGenerateSeismicRecord::on_CalPushButton_clicked()
{
	//从对话框界面中提取地层信息赋值给程序内部的对应变量,如下示例
	layer1_thickness = ui.Par1DoubleSpinBox->value();
	layer2_thickness = ui.Par3DoubleSpinBox->value();
	layer3_thickness = ui.Par5DoubleSpinBox->value();
	layer4_thickness = ui.Par7DoubleSpinBox->value();
	layer5_thickness = ui.Par9DoubleSpinBox->value();
	layer6_thickness = ui.Par11DoubleSpinBox->value();
	layer1_velocity = ui.Par2DoubleSpinBox->value();
	layer2_velocity = ui.Par4DoubleSpinBox->value();
	layer3_velocity = ui.Par6DoubleSpinBox->value();
	layer4_velocity = ui.Par8DoubleSpinBox->value();
	layer5_velocity = ui.Par10DoubleSpinBox->value();
	layer6_velocity = ui.Par12DoubleSpinBox->value();
	layer1_density = ui.Par16DoubleSpinBox->value();
	layer2_density = ui.Par17DoubleSpinBox->value();
	layer3_density = ui.Par18DoubleSpinBox->value();
	layer4_density = ui.Par19DoubleSpinBox->value();
	layer5_density = ui.Par20DoubleSpinBox->value();
	layer6_density = ui.Par21DoubleSpinBox->value();

	//从对话框界面中提取雷克子波参数赋值给程序内部变量
	main_fre = ui.Par13DoubleSpinBox->value();
	time_samp_interval = ui.Par14DoubleSpinBox->value()/1000.0;    //时间化为S

	//从对话框中提取随机噪音强度参数赋值给程序内部变量
	random_noise_percent = ui.Par15DoubleSpinBox->value()/100.0;

	//从对话框界面中提取输出文件路径
	output_file_1_dir = ui.OutputFile1LineEdit->text();
	output_file_2_dir = ui.OutputFile2LineEdit->text();
	output_file_3_dir = ui.OutputFile3LineEdit->text();
	output_file_4_dir = ui.OutputFile4LineEdit->text();
	output_file_5_dir = ui.OutputFile5LineEdit->text();
	output_file_6_dir = ui.OutputFile6LineEdit->text();
	output_file_7_dir = ui.OutputFile7LineEdit->text();

	//根据地层信息计算反射系数序列
	float layer1_reflect_time = 2 * layer1_thickness / layer1_velocity;
	float layer2_reflect_time = layer1_reflect_time + 2 * layer2_thickness / layer2_velocity;
	float layer3_reflect_time = layer2_reflect_time + 2 * layer3_thickness / layer3_velocity;
	float layer4_reflect_time = layer3_reflect_time + 2 * layer4_thickness / layer4_velocity;
	float layer5_reflect_time = layer4_reflect_time + 2 * layer5_thickness / layer5_velocity;
	float layer6_reflect_time = layer5_reflect_time + 2 * layer6_thickness / layer6_velocity;
	reflect_coeff_N = round(layer6_reflect_time/time_samp_interval);     //计算反射系数序列的样点数
	reflect_coeff = allocate1float(reflect_coeff_N);    //反射系数序列申请内存空间
	//通过波阻抗求取各层界面的反射系数值,并赋值给反射系数序列(注意六层地层只有五个层界面)
	int layer1_reflect_pos = round(layer1_reflect_time / time_samp_interval);
	reflect_coeff[layer1_reflect_pos - 1] = (layer2_velocity*layer2_density - layer1_velocity*layer1_density) / (layer2_velocity*layer2_density + layer1_velocity*layer1_density);
	int layer2_reflect_pos = round(layer2_reflect_time / time_samp_interval);
	reflect_coeff[layer2_reflect_pos - 1] = (layer3_velocity*layer3_density - layer2_velocity*layer2_density) / (layer3_velocity*layer3_density + layer2_velocity*layer2_density);
	int layer3_reflect_pos = round(layer3_reflect_time / time_samp_interval);
	reflect_coeff[layer3_reflect_pos - 1] = (layer4_velocity*layer4_density - layer3_velocity*layer3_density) / (layer4_velocity*layer4_density + layer3_velocity*layer3_density);
	int layer4_reflect_pos = round(layer4_reflect_time / time_samp_interval);
	reflect_coeff[layer4_reflect_pos - 1] = (layer5_velocity*layer5_density - layer4_velocity*layer4_density) / (layer5_velocity*layer5_density + layer4_velocity*layer4_density);
	int layer5_reflect_pos = round(layer5_reflect_time / time_samp_interval);
	reflect_coeff[layer5_reflect_pos - 1] = (layer6_velocity*layer6_density - layer5_velocity*layer5_density) / (layer6_velocity*layer6_density + layer5_velocity*layer5_density); 

	//自行更改代码生成雷克子波
	ricker_N = round(2.0 / (main_fre*time_samp_interval));     //子波采样点数根据主频和时间采样间隔自动计算，不必用户输入
	if (ricker_N % 2 == 0)    //确保采样点数为奇数
	{
		ricker_N += 1;
	}
	ricker = allocate1float(ricker_N);
	for (int i = 0.5 *(ricker_N - 1); i < ricker_N; i++)
	{
		//这里根据雷克子波的表达式计算出雷克子波离散序列，注意公式给出的只是半个子波，要做镜像对称处理（从负时间开始取）

		ricker[i] = (1 - 2 * (M_PI* main_fre*(i - 0.5*(ricker_N - 1))*time_samp_interval)*(M_PI*main_fre*(i - 0.5*(ricker_N - 1))*time_samp_interval))*exp(-(M_PI*main_fre*(i - 0.5*(ricker_N - 1))*time_samp_interval)*(M_PI*main_fre*(i - 0.5*(ricker_N - 1))*time_samp_interval));
	}

	int j, k;
	for (j = 0, k = ricker_N - 1; j < (ricker_N + 0) / 2; j++, k--)
	{
		float* temp1 = &ricker[j], *temp2 = &ricker[k];
		*temp1 = *temp2;
	}

	//雷克子波序列与地层反射系数序列做褶积，生成不含噪音的合成地震记录
	int conv_point_num = ricker_N + reflect_coeff_N - 1;
	record_no_noise = allocate1float(conv_point_num);
	convolution(ricker, reflect_coeff, record_no_noise, ricker_N, reflect_coeff_N, conv_point_num);
	//寻找合成地震记录的最大值,用于后面随机噪音的强度参照
	float record_max_value = -100000.0;
	for (int i = 0; i < conv_point_num;i++)
	{
		if (record_no_noise[i]>record_max_value)
		{
			record_max_value = record_no_noise[i];
		}
	}

	//生成随机数序列，注意要保证随机序列的采样点数与不含噪音的合成地震记录序列点数相同
	random_noise = allocate1float(conv_point_num);
	float rand_noise_min = -random_noise_percent * record_max_value; float rand_noise_max = random_noise_percent * record_max_value;
	generate_rand_array(conv_point_num, random_noise, rand_noise_min, rand_noise_max);

	//自行更改代码将随机噪音添加进不含噪音的合成地震记录中，得到含噪音的合成地震记录
	record_has_noise = allocate1float(conv_point_num);
	for (int i = 0; i < conv_point_num;i++)
	{
		//这里根据公式修改等号右侧表达式
		record_has_noise[i] = random_noise[i] + record_no_noise[i];;
	}

	//对雷克子波进行快速傅里叶变换
	fft_num = 256;    //傅里叶变换点数预设256个
	while (fft_num<ricker_N)    //如果傅里叶变换样点数少于雷克子波本身的样点数,以2的整次幂形式递增
	{
		fft_num *= 2;
	}
	fre_samp_interval = 1.0 / (fft_num*time_samp_interval);  //计算频率采样间隔
	while (fre_samp_interval>1.0)   //若我们希望频率采样间隔不大于1Hz
	{
		fft_num *= 2;
		fre_samp_interval = 1.0 / (fft_num*time_samp_interval);
	}
	//临时使用的数组,傅里叶变换的实部、虚部、振幅谱、相位谱
	float* fft_re = allocate1float(fft_num);
	float* fft_im = allocate1float(fft_num);
	float* fft_amp_spectrum = allocate1float(fft_num);
	float* fft_phase_spectrum = allocate1float(fft_num);
	ricker_spectrum = allocate1float(fft_num);
	//将雷克子波信号赋值给傅里叶变换的输入数组
	for (int i = 0; i < fft_num; i++)
	{
		fft_re[i] = 0.0; fft_im[i] = 0.0;
		//信号是实信号,只给实部赋值
		if (i < ricker_N)
		{
			fft_re[i] = ricker[i];
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
		ricker_spectrum[i] = fft_amp_spectrum[i];
	}

	//输出雷克子波信号b(t)
	output_file(ricker_N, time_samp_interval, ricker, output_file_1_dir);

	//输出随机噪音n(t)
	output_file(conv_point_num, time_samp_interval, random_noise, output_file_2_dir);

	//输出地层反射系数ξ(t)
	output_file(reflect_coeff_N, time_samp_interval, reflect_coeff, output_file_3_dir);

	//输出含噪音的合成地震记录x(t)
	output_file(conv_point_num, time_samp_interval, record_has_noise, output_file_4_dir);

	//输出雷克子波的振幅谱B(k)
	output_file(fft_num, fre_samp_interval, ricker_spectrum, output_file_5_dir);

	//由于雷克子波与地震记录的时间采样点数不同，导致频率采样点数可能也不同，要重新计算一遍fft_num
	//释放数组内存空间
	free1float(fft_re);
	free1float(fft_im);
	free1float(fft_amp_spectrum);
	free1float(fft_phase_spectrum);
	fft_num = 256;    //傅里叶变换点数预设256个
	while (fft_num<conv_point_num)    //如果傅里叶变换样点数少于合成记录自身的样点数,以2的整次幂形式递增
	{
		fft_num *= 2;
	}
	fre_samp_interval = 1.0 / (fft_num*time_samp_interval);  //计算频率采样间隔
	while (fre_samp_interval>1.0)   //若我们希望频率采样间隔不大于1Hz
	{
		fft_num *= 2;
		fre_samp_interval = 1.0 / (fft_num*time_samp_interval);
	}

	//傅里叶变换的实部、虚部、振幅谱、相位谱重新申请内存空间
	fft_re = allocate1float(fft_num);
	fft_im = allocate1float(fft_num);
	fft_amp_spectrum = allocate1float(fft_num);
	fft_phase_spectrum = allocate1float(fft_num);
	record_no_noise_spectrum = allocate1float(fft_num);
	//将不含噪音的合成地震记录赋值给傅里叶变换的输入数组
	for (int i = 0; i < fft_num; i++)
	{
		fft_re[i] = 0.0; fft_im[i] = 0.0;
		//信号是实信号,只给实部赋值
		if (i < conv_point_num)
		{
			fft_re[i] = record_no_noise[i];
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
		record_no_noise_spectrum[i] = fft_amp_spectrum[i];
	}

	//输出不含噪音合成地震记录的振幅谱S(k)
	output_file(fft_num, fre_samp_interval, record_no_noise_spectrum, output_file_6_dir);

	//下面计算含噪音地震记录的振幅谱
	record_has_noise_spectrum = allocate1float(fft_num);
	//将含噪音的合成地震记录赋值给傅里叶变换的输入数组
	for (int i = 0; i < fft_num; i++)
	{
		fft_re[i] = 0.0; fft_im[i] = 0.0;
		//信号是实信号,只给实部赋值
		if (i < conv_point_num)
		{
			fft_re[i] = record_has_noise[i];
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
		record_has_noise_spectrum[i] = fft_amp_spectrum[i];
	}

	//输出不含噪音合成地震记录的振幅谱S(k)
	output_file(fft_num, fre_samp_interval, record_has_noise_spectrum, output_file_7_dir);

	//释放数组内存空间
	free1float(fft_re);
	free1float(fft_im);
	free1float(fft_amp_spectrum);
	free1float(fft_phase_spectrum);
	free1float(record_has_noise_spectrum);
	free1float(record_no_noise_spectrum);
	free1float(record_has_noise);
	free1float(record_no_noise);
	free1float(random_noise);
	free1float(ricker);
	free1float(ricker_spectrum);
	free1float(reflect_coeff);

	accept();
}

/************************************************************************/
//点击界面“取消”按钮的响应函数,作用为关闭用户对话框界面
/************************************************************************/
void CGenerateSeismicRecord::on_CancelPushButton_clicked()
{
	reject();
}

/************************************************************************/
/* 褶积计算子函数,参数:(序列1,序列2,褶积计算结果,序列1的样点数目,序列2的样点数目,*/
/* 褶积结果序列的样点数目) */
/************************************************************************/
void CGenerateSeismicRecord::convolution(float* Array_A, float* Array_B, float* Array_Result,
	int Num_A, int Num_B, int Num_Result)
{
	for (int i = 0; i < Num_Result; i++)
	{
		Array_Result[i] = 0.0; // 初始化卷积结果
		for (int j = 0; j < Num_A; j++)
		{
			if ((i - j) >= 0 && (i - j) < Num_B)
			{
				Array_Result[i] += Array_A[j] * Array_B[i - j];
			}
		}
	}
}

/************************************************************************/
/* 傅里叶变换,参数:(输入/输出的实部,输入/输出的虚部,傅里叶变换长度（2的整次幂）,*/
/* 正反变换标记(1为正变换;-1为反变换)) */
/************************************************************************/
void CGenerateSeismicRecord::fft(float* Re, float* Im, int n, int isign)
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
/* 生成随机数组，参数（随机数序列的数据个数，生成的随机数数组，随机数中的最小值，随机数中的最大值） */
/************************************************************************/
void CGenerateSeismicRecord::generate_rand_array(int Array_Num, float* Array_Data, float Min_Value, float Max_Value)
{
	QTime time;
	time = QTime::currentTime();
	//使用Qt时间函数发生器生成随机数种子
	qsrand(time.msec());
	//循环生成随机数
	float rand_data_average_value = 0.0;
	for (int i = 0; i < Array_Num; i++)
	{
		int n = qrand() % 100;    //产生100以内的随机数 
		Array_Data[i] = (Max_Value - Min_Value) / (100 - 0)*(n - 0) + Min_Value;
		rand_data_average_value += Array_Data[i];
	}
	rand_data_average_value /= Array_Num;
	//由于随机序列应该满足平均数为零,在生成的序列中若平均数不为零，做一下调整
	for (int i = 0; i < Array_Num; i++)
	{
		Array_Data[i] -= rand_data_average_value;
	}
}

/************************************************************************/
/* 输出文件，参数（待输出序列的采样点数，待输出序列的采样间隔(时间间隔或频率间隔)，  */
/* 待输出序列样点值存储数组，待输出文件的存储路径） */
/************************************************************************/
void CGenerateSeismicRecord::output_file(int Output_Sample_Num, float Output_Sample_interval,
	float* Output_Sample_Data, QString Output_File_Dir)
{
	if (Output_File_Dir != "")   //路径存在才执行写出
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