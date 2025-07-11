#include "generate_seismic_record.h"
#define M_PI 3.1415926

CGenerateSeismicRecord::CGenerateSeismicRecord(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.CalPushButton->setFocus();
}

/************************************************************************/
/* ������桰�����ļ�1����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile1PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_1_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("�����׿��Ӳ��ź�b(t)"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile1LineEdit->setText(output_file_1_dir);
}

/************************************************************************/
/* ������桰�����ļ�2����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile2PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_2_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("������������ź�n(t)"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile2LineEdit->setText(output_file_2_dir);
}

/************************************************************************/
/* ������桰�����ļ�3����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile3PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_3_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("����ز㷴��ϵ����(t)"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile3LineEdit->setText(output_file_3_dir);
}

/************************************************************************/
/* ������桰�����ļ�4����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile4PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_4_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("���溬�����ĺϳɵ����¼x(t)"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile4LineEdit->setText(output_file_4_dir);
}

/************************************************************************/
/* ������桰�����ļ�5����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile5PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_5_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("�����׿��Ӳ��������B(k)"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile5LineEdit->setText(output_file_5_dir);
}

/************************************************************************/
/* ������桰�����ļ�6����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile6PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_6_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("���治�������ϳɵ����¼�������S(k)"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile6LineEdit->setText(output_file_6_dir);
}

/************************************************************************/
/* ������桰�����ļ�7����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CGenerateSeismicRecord::on_OutputFile7PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_7_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("���溬�����ϳɵ����¼�������X(k)"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile7LineEdit->setText(output_file_7_dir);
}

/************************************************************************/
/* ������桰���㡱��ť����Ӧ����,��ɾ���ļ���  */
/************************************************************************/
void CGenerateSeismicRecord::on_CalPushButton_clicked()
{
	//�ӶԻ����������ȡ�ز���Ϣ��ֵ�������ڲ��Ķ�Ӧ����,����ʾ��
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

	//�ӶԻ����������ȡ�׿��Ӳ�������ֵ�������ڲ�����
	main_fre = ui.Par13DoubleSpinBox->value();
	time_samp_interval = ui.Par14DoubleSpinBox->value()/1000.0;    //ʱ�仯ΪS

	//�ӶԻ�������ȡ�������ǿ�Ȳ�����ֵ�������ڲ�����
	random_noise_percent = ui.Par15DoubleSpinBox->value()/100.0;

	//�ӶԻ����������ȡ����ļ�·��
	output_file_1_dir = ui.OutputFile1LineEdit->text();
	output_file_2_dir = ui.OutputFile2LineEdit->text();
	output_file_3_dir = ui.OutputFile3LineEdit->text();
	output_file_4_dir = ui.OutputFile4LineEdit->text();
	output_file_5_dir = ui.OutputFile5LineEdit->text();
	output_file_6_dir = ui.OutputFile6LineEdit->text();
	output_file_7_dir = ui.OutputFile7LineEdit->text();

	//���ݵز���Ϣ���㷴��ϵ������
	float layer1_reflect_time = 2 * layer1_thickness / layer1_velocity;
	float layer2_reflect_time = layer1_reflect_time + 2 * layer2_thickness / layer2_velocity;
	float layer3_reflect_time = layer2_reflect_time + 2 * layer3_thickness / layer3_velocity;
	float layer4_reflect_time = layer3_reflect_time + 2 * layer4_thickness / layer4_velocity;
	float layer5_reflect_time = layer4_reflect_time + 2 * layer5_thickness / layer5_velocity;
	float layer6_reflect_time = layer5_reflect_time + 2 * layer6_thickness / layer6_velocity;
	reflect_coeff_N = round(layer6_reflect_time/time_samp_interval);     //���㷴��ϵ�����е�������
	reflect_coeff = allocate1float(reflect_coeff_N);    //����ϵ�����������ڴ�ռ�
	//ͨ�����迹��ȡ�������ķ���ϵ��ֵ,����ֵ������ϵ������(ע������ز�ֻ����������)
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

	//���и��Ĵ��������׿��Ӳ�
	ricker_N = round(2.0 / (main_fre*time_samp_interval));     //�Ӳ���������������Ƶ��ʱ���������Զ����㣬�����û�����
	if (ricker_N % 2 == 0)    //ȷ����������Ϊ����
	{
		ricker_N += 1;
	}
	ricker = allocate1float(ricker_N);
	for (int i = 0.5 *(ricker_N - 1); i < ricker_N; i++)
	{
		//��������׿��Ӳ��ı��ʽ������׿��Ӳ���ɢ���У�ע�⹫ʽ������ֻ�ǰ���Ӳ���Ҫ������Գƴ����Ӹ�ʱ�俪ʼȡ��

		ricker[i] = (1 - 2 * (M_PI* main_fre*(i - 0.5*(ricker_N - 1))*time_samp_interval)*(M_PI*main_fre*(i - 0.5*(ricker_N - 1))*time_samp_interval))*exp(-(M_PI*main_fre*(i - 0.5*(ricker_N - 1))*time_samp_interval)*(M_PI*main_fre*(i - 0.5*(ricker_N - 1))*time_samp_interval));
	}

	int j, k;
	for (j = 0, k = ricker_N - 1; j < (ricker_N + 0) / 2; j++, k--)
	{
		float* temp1 = &ricker[j], *temp2 = &ricker[k];
		*temp1 = *temp2;
	}

	//�׿��Ӳ�������ز㷴��ϵ���������޻������ɲ��������ĺϳɵ����¼
	int conv_point_num = ricker_N + reflect_coeff_N - 1;
	record_no_noise = allocate1float(conv_point_num);
	convolution(ricker, reflect_coeff, record_no_noise, ricker_N, reflect_coeff_N, conv_point_num);
	//Ѱ�Һϳɵ����¼�����ֵ,���ں������������ǿ�Ȳ���
	float record_max_value = -100000.0;
	for (int i = 0; i < conv_point_num;i++)
	{
		if (record_no_noise[i]>record_max_value)
		{
			record_max_value = record_no_noise[i];
		}
	}

	//������������У�ע��Ҫ��֤������еĲ��������벻�������ĺϳɵ����¼���е�����ͬ
	random_noise = allocate1float(conv_point_num);
	float rand_noise_min = -random_noise_percent * record_max_value; float rand_noise_max = random_noise_percent * record_max_value;
	generate_rand_array(conv_point_num, random_noise, rand_noise_min, rand_noise_max);

	//���и��Ĵ��뽫���������ӽ����������ĺϳɵ����¼�У��õ��������ĺϳɵ����¼
	record_has_noise = allocate1float(conv_point_num);
	for (int i = 0; i < conv_point_num;i++)
	{
		//������ݹ�ʽ�޸ĵȺ��Ҳ���ʽ
		record_has_noise[i] = random_noise[i] + record_no_noise[i];;
	}

	//���׿��Ӳ����п��ٸ���Ҷ�任
	fft_num = 256;    //����Ҷ�任����Ԥ��256��
	while (fft_num<ricker_N)    //�������Ҷ�任�����������׿��Ӳ������������,��2����������ʽ����
	{
		fft_num *= 2;
	}
	fre_samp_interval = 1.0 / (fft_num*time_samp_interval);  //����Ƶ�ʲ������
	while (fre_samp_interval>1.0)   //������ϣ��Ƶ�ʲ������������1Hz
	{
		fft_num *= 2;
		fre_samp_interval = 1.0 / (fft_num*time_samp_interval);
	}
	//��ʱʹ�õ�����,����Ҷ�任��ʵ�����鲿������ס���λ��
	float* fft_re = allocate1float(fft_num);
	float* fft_im = allocate1float(fft_num);
	float* fft_amp_spectrum = allocate1float(fft_num);
	float* fft_phase_spectrum = allocate1float(fft_num);
	ricker_spectrum = allocate1float(fft_num);
	//���׿��Ӳ��źŸ�ֵ������Ҷ�任����������
	for (int i = 0; i < fft_num; i++)
	{
		fft_re[i] = 0.0; fft_im[i] = 0.0;
		//�ź���ʵ�ź�,ֻ��ʵ����ֵ
		if (i < ricker_N)
		{
			fft_re[i] = ricker[i];
		}
	}
	//����Ҷ���任(�����任,Ҫ�����һ���βθ�Ϊ-1)
	fft(fft_re, fft_im, fft_num, 1);
	//��������׺���λ��
	for (int i = 0; i < fft_num; i++)
	{
		//�����������׺���λ�׵ļ��㹫ʽ���ĵȺ��Ҳ���ʽ����λ�׼���ʱע�ⷴ���к�����������չӳ��Ϊ����
		fft_amp_spectrum[i] = sqrt(fft_re[i] * fft_re[i] + fft_im[i] * fft_im[i]);
		fft_phase_spectrum[i] = atan2(fft_im[i], fft_re[i]);
	}
	//���ź������(����λ��)��ֵ���������
	for (int i = 0; i < fft_num; i++)
	{
		ricker_spectrum[i] = fft_amp_spectrum[i];
	}

	//����׿��Ӳ��ź�b(t)
	output_file(ricker_N, time_samp_interval, ricker, output_file_1_dir);

	//����������n(t)
	output_file(conv_point_num, time_samp_interval, random_noise, output_file_2_dir);

	//����ز㷴��ϵ����(t)
	output_file(reflect_coeff_N, time_samp_interval, reflect_coeff, output_file_3_dir);

	//����������ĺϳɵ����¼x(t)
	output_file(conv_point_num, time_samp_interval, record_has_noise, output_file_4_dir);

	//����׿��Ӳ��������B(k)
	output_file(fft_num, fre_samp_interval, ricker_spectrum, output_file_5_dir);

	//�����׿��Ӳ�������¼��ʱ�����������ͬ������Ƶ�ʲ�����������Ҳ��ͬ��Ҫ���¼���һ��fft_num
	//�ͷ������ڴ�ռ�
	free1float(fft_re);
	free1float(fft_im);
	free1float(fft_amp_spectrum);
	free1float(fft_phase_spectrum);
	fft_num = 256;    //����Ҷ�任����Ԥ��256��
	while (fft_num<conv_point_num)    //�������Ҷ�任���������ںϳɼ�¼�����������,��2����������ʽ����
	{
		fft_num *= 2;
	}
	fre_samp_interval = 1.0 / (fft_num*time_samp_interval);  //����Ƶ�ʲ������
	while (fre_samp_interval>1.0)   //������ϣ��Ƶ�ʲ������������1Hz
	{
		fft_num *= 2;
		fre_samp_interval = 1.0 / (fft_num*time_samp_interval);
	}

	//����Ҷ�任��ʵ�����鲿������ס���λ�����������ڴ�ռ�
	fft_re = allocate1float(fft_num);
	fft_im = allocate1float(fft_num);
	fft_amp_spectrum = allocate1float(fft_num);
	fft_phase_spectrum = allocate1float(fft_num);
	record_no_noise_spectrum = allocate1float(fft_num);
	//�����������ĺϳɵ����¼��ֵ������Ҷ�任����������
	for (int i = 0; i < fft_num; i++)
	{
		fft_re[i] = 0.0; fft_im[i] = 0.0;
		//�ź���ʵ�ź�,ֻ��ʵ����ֵ
		if (i < conv_point_num)
		{
			fft_re[i] = record_no_noise[i];
		}
	}
	//����Ҷ���任(�����任,Ҫ�����һ���βθ�Ϊ-1)
	fft(fft_re, fft_im, fft_num, 1);
	//��������׺���λ��
	for (int i = 0; i < fft_num; i++)
	{
		//�����������׺���λ�׵ļ��㹫ʽ���ĵȺ��Ҳ���ʽ����λ�׼���ʱע�ⷴ���к�����������չӳ��Ϊ����
		fft_amp_spectrum[i] = sqrt(fft_re[i] * fft_re[i] + fft_im[i] * fft_im[i]);
		fft_phase_spectrum[i] = atan2(fft_im[i], fft_re[i]);
	}
	//���ź������(����λ��)��ֵ���������
	for (int i = 0; i < fft_num; i++)
	{
		record_no_noise_spectrum[i] = fft_amp_spectrum[i];
	}

	//������������ϳɵ����¼�������S(k)
	output_file(fft_num, fre_samp_interval, record_no_noise_spectrum, output_file_6_dir);

	//������㺬���������¼�������
	record_has_noise_spectrum = allocate1float(fft_num);
	//���������ĺϳɵ����¼��ֵ������Ҷ�任����������
	for (int i = 0; i < fft_num; i++)
	{
		fft_re[i] = 0.0; fft_im[i] = 0.0;
		//�ź���ʵ�ź�,ֻ��ʵ����ֵ
		if (i < conv_point_num)
		{
			fft_re[i] = record_has_noise[i];
		}
	}
	//����Ҷ���任(�����任,Ҫ�����һ���βθ�Ϊ-1)
	fft(fft_re, fft_im, fft_num, 1);
	//��������׺���λ��
	for (int i = 0; i < fft_num; i++)
	{
		//�����������׺���λ�׵ļ��㹫ʽ���ĵȺ��Ҳ���ʽ����λ�׼���ʱע�ⷴ���к�����������չӳ��Ϊ����
		fft_amp_spectrum[i] = sqrt(fft_re[i] * fft_re[i] + fft_im[i] * fft_im[i]);
		fft_phase_spectrum[i] = atan2(fft_im[i], fft_re[i]);
	}
	//���ź������(����λ��)��ֵ���������
	for (int i = 0; i < fft_num; i++)
	{
		record_has_noise_spectrum[i] = fft_amp_spectrum[i];
	}

	//������������ϳɵ����¼�������S(k)
	output_file(fft_num, fre_samp_interval, record_has_noise_spectrum, output_file_7_dir);

	//�ͷ������ڴ�ռ�
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
//������桰ȡ������ť����Ӧ����,����Ϊ�ر��û��Ի������
/************************************************************************/
void CGenerateSeismicRecord::on_CancelPushButton_clicked()
{
	reject();
}

/************************************************************************/
/* �޻������Ӻ���,����:(����1,����2,�޻�������,����1��������Ŀ,����2��������Ŀ,*/
/* �޻�������е�������Ŀ) */
/************************************************************************/
void CGenerateSeismicRecord::convolution(float* Array_A, float* Array_B, float* Array_Result,
	int Num_A, int Num_B, int Num_Result)
{
	for (int i = 0; i < Num_Result; i++)
	{
		Array_Result[i] = 0.0; // ��ʼ��������
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
/* ����Ҷ�任,����:(����/�����ʵ��,����/������鲿,����Ҷ�任���ȣ�2�������ݣ�,*/
/* �����任���(1Ϊ���任;-1Ϊ���任)) */
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
	//����Ҷ���任�����ǰ�������ֺź�ǰ������ڣ�����ɢ����Ҷ�任,����Ϊ����Ҷ�任������
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
/* ����������飬��������������е����ݸ��������ɵ���������飬������е���Сֵ��������е����ֵ�� */
/************************************************************************/
void CGenerateSeismicRecord::generate_rand_array(int Array_Num, float* Array_Data, float Min_Value, float Max_Value)
{
	QTime time;
	time = QTime::currentTime();
	//ʹ��Qtʱ�亯���������������������
	qsrand(time.msec());
	//ѭ�����������
	float rand_data_average_value = 0.0;
	for (int i = 0; i < Array_Num; i++)
	{
		int n = qrand() % 100;    //����100���ڵ������ 
		Array_Data[i] = (Max_Value - Min_Value) / (100 - 0)*(n - 0) + Min_Value;
		rand_data_average_value += Array_Data[i];
	}
	rand_data_average_value /= Array_Num;
	//�����������Ӧ������ƽ����Ϊ��,�����ɵ���������ƽ������Ϊ�㣬��һ�µ���
	for (int i = 0; i < Array_Num; i++)
	{
		Array_Data[i] -= rand_data_average_value;
	}
}

/************************************************************************/
/* ����ļ�����������������еĲ�����������������еĲ������(ʱ������Ƶ�ʼ��)��  */
/* �������������ֵ�洢���飬������ļ��Ĵ洢·���� */
/************************************************************************/
void CGenerateSeismicRecord::output_file(int Output_Sample_Num, float Output_Sample_interval,
	float* Output_Sample_Data, QString Output_File_Dir)
{
	if (Output_File_Dir != "")   //·�����ڲ�ִ��д��
	{
		//����QTд�ļ�����,ִ���ı�д��
		QFile file_save(Output_File_Dir);
		if (file_save.open(QIODevice::WriteOnly | QIODevice::Text))
		{
			QTextStream out(&file_save);
			//Ϊ��֤������������룬��ӱ������
			QTextCodec *codec = QTextCodec::codecForName("GB18030");
			//�ı���һ������������Ʊ��⣬�Կո����
			out << codec->toUnicode("������λ��") << "  " << codec->toUnicode("�������ϵ�ֵ") << " " << endl;
			out.setRealNumberNotation(QTextStream::FixedNotation);
			out.setRealNumberPrecision(6);   //����������ݵľ���
			//ѭ��������ݣ�һ������ռһ��
			for (int i = 0; i < Output_Sample_Num; i++)
			{
				out << i*Output_Sample_interval << "  " << Output_Sample_Data[i];
				out << endl;
			}
		}
		file_save.close();
	}
}