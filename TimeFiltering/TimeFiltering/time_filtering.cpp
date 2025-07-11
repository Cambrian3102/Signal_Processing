#include "time_filtering.h"
#define M_PI 3.1415926

CTimeFiltering::CTimeFiltering(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.CalPushButton->setFocus();
}

/************************************************************************/
/* ������桰�����ļ�1����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CTimeFiltering::on_OutputFile1PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_1_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("�����ź�s"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile1LineEdit->setText(output_file_1_dir);
}

/************************************************************************/
/* ������桰�����ļ�2����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CTimeFiltering::on_OutputFile2PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_2_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("�����ź�p"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile2LineEdit->setText(output_file_2_dir);
}

/************************************************************************/
/* ������桰�����ļ�3����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CTimeFiltering::on_OutputFile3PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_3_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("�����ź�x"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile3LineEdit->setText(output_file_3_dir);
}

/************************************************************************/
/* ������桰�����ļ�4����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CTimeFiltering::on_OutputFile4PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_4_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("����ʱ���˲�����h"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile4LineEdit->setText(output_file_4_dir);
}

/************************************************************************/
/* ������桰�����ļ�5����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CTimeFiltering::on_OutputFile5PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_5_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("�����˲�������y"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile5LineEdit->setText(output_file_5_dir);
}

/************************************************************************/
/* ������桰���㡱��ť����Ӧ����,��ɾ���ļ���  */
/************************************************************************/
void CTimeFiltering::on_CalPushButton_clicked()
{
	//�ӶԻ����������ȡ��Ϣ��ֵ�������ڲ��Ķ�Ӧ����,����ʾ��
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

	//�ӶԻ����������ȡʱ���˲����Ӳ�����ֵ�������ڲ�����
	M = round(ui.Par7DoubleSpinBox->value());
	low_cut_fre = ui.Par12DoubleSpinBox->value();
	high_cut_fre = ui.Par13DoubleSpinBox->value();
	if (M%2==0)     //Ϊȷ��ʱ���˲��������ҶԳ�,��������ȡ����
	{
		M += 1;
	}

	//�ӶԻ����������ȡ����ļ�·��
	output_file_1_dir = ui.OutputFile1LineEdit->text();
	output_file_2_dir = ui.OutputFile2LineEdit->text();
	output_file_3_dir = ui.OutputFile3LineEdit->text();
	output_file_4_dir = ui.OutputFile4LineEdit->text();
	output_file_5_dir = ui.OutputFile5LineEdit->text();

	//���и��Ĵ��������ź�s(n��)
	signal_s = allocate1float(N);
	for (int i = 0; i < N; i++)
	{
		float nDelta = i * time_samp_interval;
		signal_s[i] = coeff_A1 * exp(-coeff_beta * nDelta * nDelta) * sin(2 * M_PI * f1 * nDelta) +
			coeff_A2 * exp(-coeff_beta * nDelta * nDelta) * sin(2 * M_PI * f2 * nDelta);
	}

	//���и��Ĵ��������ź�p(n��)
	signal_p = allocate1float(N);
	for (int i = 0; i < N; i++)
	{
		float nDelta = i * time_samp_interval;
		signal_p[i] = coeff_A3 * (sin(2 * M_PI * f3 * nDelta) + cos(2 * M_PI*f4 * nDelta));
	}

	//���и��Ĵ��������ź�x(n��)
	signal_x = allocate1float(N);
	for (int i = 0; i < N; i++)
	{
		signal_x[i] = signal_s[i] + signal_p[i];
	}

	//���и��Ĵ�������ʱ���˲�����h
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

	//�ź�x���˲�����h���޻�
	int conv_point_num = M + N - 1;
	signal_y = allocate1float(conv_point_num);
	convolution(signal_x, filter_h, signal_y, N, M, conv_point_num);

	//����ź�s
	output_file(N, time_samp_interval, signal_s, output_file_1_dir);

	//����ź�p
	output_file(N, time_samp_interval, signal_p, output_file_2_dir);

	//����ź�x
	output_file(N, time_samp_interval, signal_x, output_file_3_dir);

	//���ʱ���˲�����h
	output_file(M, time_samp_interval, filter_h, output_file_4_dir);

	//����޻��˲����y
	output_file(conv_point_num, time_samp_interval, signal_y, output_file_5_dir);

	//�ͷ������ڴ�ռ�
	free1float(signal_s);
	free1float(signal_p);
	free1float(signal_x);
	free1float(filter_h);
	free1float(signal_y);

	accept();
}

/************************************************************************/
//������桰ȡ������ť����Ӧ����,����Ϊ�ر��û��Ի������
/************************************************************************/
void CTimeFiltering::on_CancelPushButton_clicked()
{
	reject();
}

/************************************************************************/
/* �޻������Ӻ���,����:(����1,����2,�޻�������,����1��������Ŀ,����2��������Ŀ,*/
/* �޻�������е�������Ŀ) */
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
/* ����ļ�����������������еĲ�����������������еĲ������(ʱ������Ƶ�ʼ��)��  */
/* �������������ֵ�洢���飬������ļ��Ĵ洢·���� */
/************************************************************************/
void CTimeFiltering::output_file(int Output_Sample_Num, float Output_Sample_interval,
	float* Output_Sample_Data, QString Output_File_Dir)
{
	if (Output_File_Dir!="")      //�ļ�·�����ڲ�д��
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