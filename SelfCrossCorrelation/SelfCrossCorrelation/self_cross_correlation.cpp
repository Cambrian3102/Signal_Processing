#include "self_cross_correlation.h"
#define PI 3.1415926

CSelfCrossCorrelation::CSelfCrossCorrelation(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.CalPushButton->setFocus();
}

/************************************************************************/
/* ������桰�����ļ�1����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile1PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_1_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("���������ź�F0"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile1LineEdit->setText(output_file_1_dir);
}

/************************************************************************/
/* ������桰�����ļ�2����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile2PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_2_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("����������ź�F1"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile2LineEdit->setText(output_file_2_dir);
}

/************************************************************************/
/* ������桰�����ļ�3����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile3PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_3_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("���������ź�F0�������Rxx"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile3LineEdit->setText(output_file_3_dir);
}

/************************************************************************/
/* ������桰�����ļ�4����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile4PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_4_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("����������ź�F1�������Ryy"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile4LineEdit->setText(output_file_4_dir);
}

/************************************************************************/
/* ������桰�����ļ�5����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile5PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_5_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("����F0��F1�Ļ����Rxy"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile5LineEdit->setText(output_file_5_dir);
}

/************************************************************************/
/* ������桰�����ļ�6����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile6PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_6_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("����F1��F0�Ļ����Ryx"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile6LineEdit->setText(output_file_6_dir);
}

/************************************************************************/
/* ������桰�����ļ�7����ť����Ӧ����,��д���ļ��Ի����н����û����ļ�·����Ϣ,���ط��ڽ����� */
/************************************************************************/
void CSelfCrossCorrelation::on_OutputFile7PushButton_clicked()
{
	QTextCodec *codec = QTextCodec::codecForName("GB18030");
	output_file_7_dir = QFileDialog::getSaveFileName(this, codec->toUnicode("����F0��F1�Ļ����Rxy�ķ�ת����"),
		"", codec->toUnicode("�ļ� (*.txt)"));
	ui.OutputFile7LineEdit->setText(output_file_7_dir);
}

/************************************************************************/
/* ������桰���㡱��ť����Ӧ����,��ɾ���ļ���  */
/************************************************************************/
void CSelfCrossCorrelation::on_CalPushButton_clicked()
{
	//�ӶԻ����������ȡ��Ϣ��ֵ�������ڲ��Ķ�Ӧ����,����ʾ��
	f0 = ui.Par1DoubleSpinBox->value();
	f1 = ui.Par2DoubleSpinBox->value();
	coeff_A0 = ui.Par3DoubleSpinBox->value();
	coeff_A1 = ui.Par4DoubleSpinBox->value();
	N0 = round(ui.Par5DoubleSpinBox->value());
	N1 = round(ui.Par6DoubleSpinBox->value());
	coeff_beta = ui.Par7DoubleSpinBox->value();
	time_samp_interval = ui.Par8DoubleSpinBox->value() / 1000.0;
	

	//�ӶԻ����������ȡ����ļ�·��
	output_file_1_dir = ui.OutputFile1LineEdit->text();
	output_file_2_dir = ui.OutputFile2LineEdit->text();
	output_file_3_dir = ui.OutputFile3LineEdit->text();
	output_file_4_dir = ui.OutputFile4LineEdit->text();
	output_file_5_dir = ui.OutputFile5LineEdit->text();
	output_file_6_dir = ui.OutputFile6LineEdit->text();
	output_file_7_dir = ui.OutputFile7LineEdit->text();

	//���и��Ĵ������������ź�F0
	signal_F0 = allocate1float(N0);
	for (int i = 0; i < N0; i++)
	{
		float nDelta = i * time_samp_interval;
		signal_F0[i] = coeff_A0 * sin(2 * PI * f0 * nDelta);
	}

	//���и��Ĵ������ɷ������ź�F2
	signal_F1 = allocate1float(N1);
	for (int i = 0; i < N1; i++)
	{
		float nDelta = i * time_samp_interval;
		signal_F1[i] = coeff_A1 * exp(-coeff_beta * nDelta * nDelta) * cos(2 * PI * f1 * nDelta);
	}

	//�������ź�F0��������ؼ���
	int corr_samp_num_0 = 2 * N0 - 1;
	self_correlation_F0 = allocate1float(corr_samp_num_0);
	correlation(signal_F0, signal_F0, self_correlation_F0, N0, N0, corr_samp_num_0);

	//�Է������ź�F1��������ؼ���
	int corr_samp_num_1 = 2 * N1 - 1;
	self_correlation_F1 = allocate1float(corr_samp_num_1);
	correlation(signal_F1, signal_F1, self_correlation_F1, N1, N1, corr_samp_num_1);

	//���ź�F0��F1���л���ؼ���
	int cross_corr_samp_num_0_1 = N0 + N1 - 1;
	cross_correlation_F0_F1 = allocate1float(cross_corr_samp_num_0_1);
	correlation(signal_F0, signal_F1, cross_correlation_F0_F1, N0, N1, cross_corr_samp_num_0_1);

	//���ź�F0��F1�Ļ���ؽ��ȡ������
	cross_correlation_F0_F1_reverse_order = allocate1float(cross_corr_samp_num_0_1);
	for (int i = 0; i < cross_corr_samp_num_0_1; i++)
	{
		cross_correlation_F0_F1_reverse_order[i] = cross_correlation_F0_F1[cross_corr_samp_num_0_1 - 1 - i];
	}

	//���ź�F1��F0���л���ؼ���
	int cross_corr_samp_num_1_0 = N1 + N0 - 1;
	cross_correlation_F1_F0 = allocate1float(cross_corr_samp_num_1_0);
	correlation(signal_F1, signal_F0, cross_correlation_F1_F0, N1, N0, cross_corr_samp_num_1_0);

	//��������ź�F0
	output_file(N0, time_samp_interval, signal_F0, output_file_1_dir);

	//����������ź�F1
	output_file(N1, time_samp_interval, signal_F1, output_file_2_dir);

	//��������ź�F0�������
	output_file(-corr_samp_num_0 / 2, corr_samp_num_0 / 2, time_samp_interval, self_correlation_F0, output_file_3_dir);

	//����������ź�F1�������
	output_file(-corr_samp_num_1 / 2, corr_samp_num_1 / 2, time_samp_interval, self_correlation_F1, output_file_4_dir);

	//����ź�F0��F1�Ļ����
	output_file(-(N1 - 1), N0 - 1, time_samp_interval, cross_correlation_F0_F1, output_file_5_dir);

	//����ź�F1��F0�Ļ����
	output_file(-(N0 - 1), N1 - 1, time_samp_interval, cross_correlation_F1_F0, output_file_6_dir);

	//����ź�F0��F1����ص�����
	output_file(-(N0 - 1), N1 - 1, time_samp_interval, cross_correlation_F0_F1_reverse_order, output_file_7_dir);

	//�ͷ������ڴ�ռ�
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
//������桰ȡ������ť����Ӧ����,����Ϊ�ر��û��Ի������
/************************************************************************/
void CSelfCrossCorrelation::on_CancelPushButton_clicked()
{
	reject();
}

/************************************************************************/
/* ��ؼ����Ӻ���,����:(����1,����2,��ؼ�����,����1��������Ŀ,����2��������Ŀ,*/
/* ��ؽ�����е�������Ŀ) */
/************************************************************************/
void CSelfCrossCorrelation::correlation(float* Array_A, float* Array_B, float* Array_Result,
	int Num_A, int Num_B, int Num_Result)
{
    for (int n = 0; n < Num_Result; ++n)
    {
        Array_Result[n] = 0.0; // ��ʼ��

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
/* ����ļ�����������������еĲ�����������������еĲ������(ʱ������Ƶ�ʼ��)��  */
/* �������������ֵ�洢���飬������ļ��Ĵ洢·���� */
/************************************************************************/
void CSelfCrossCorrelation::output_file(int Output_Sample_Num, float Output_Sample_interval,
	float* Output_Sample_Data, QString Output_File_Dir)
{
	if (Output_File_Dir != "")     //·�����ڲ�ִ��д��
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

/************************************************************************/
/* ���غ���,�����(��)����ļ�,��ԴӸ�ʱ���𲽵����ݣ���������������е��𲽲�����λ�ã�  */
/* ��������е���ֹ������λ��,��������еĲ������(ʱ������Ƶ�ʼ��)�� */
/* �������������ֵ�洢���飬������ļ��Ĵ洢·���� */
/************************************************************************/
void CSelfCrossCorrelation::output_file(int Output_Start_Pos, int Output_End_Pos, float Output_Sample_interval, float* Output_Sample_Data, QString Output_File_Dir)
{
	if (Output_File_Dir != "")     //·�����ڲ�ִ��д��
	{
		int Output_Sample_Num = Output_End_Pos - Output_Start_Pos + 1;
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
				out << (i + Output_Start_Pos)*Output_Sample_interval << "  " << Output_Sample_Data[i];
				out << endl;
			}
		}
		file_save.close();
	}
}