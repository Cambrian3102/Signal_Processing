#pragma once

#include <QtWidgets/QDialog>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>
#include <QFileDialog>
#include "ui_amp_spectrum_add_zeros.h"
#include "allocate.h"

class CAmpSpectrumAddZeros : public QDialog
{
	Q_OBJECT

public:
	CAmpSpectrumAddZeros(QWidget *parent = Q_NULLPTR);

	//�ļ����·��
	QString output_file_1_dir, output_file_2_dir, output_file_3_dir, output_file_4_dir, output_file_5_dir, output_file_6_dir, output_file_7_dir, output_file_8_dir;
	//�ź�Ƶ�ʳɷݵ���Ŀ
	int M;
	//�ź�Ƶ��
	float f[5];
	//��Ƶ�ʳɷݵ�������Ȩϵ��
	float coeff_A[5];
	//ʱ�����в�������
	int N;
	//ʱ��������
	float time_samp_interval;

	//ǰ������Ŀ�Լ�������������������Ŀ
	int add_zeros_num_in_front,N_after_add_zero_in_front;
	//������Ŀ�Լ�������������������Ŀ
	int add_zeros_num_at_back, N_after_add_zero_at_back;
	//����������Ŀ�Լ�������������������Ŀ
	int add_zeros_num_insert, N_after_add_zero_insert;
	
	//ʱ���źŵĴ洢����
	float* signal_f1, *signal_f2, *signal_f3, *signal_f4;
	//�źŵ�����״洢����
	float *signal_F1, *signal_F2, *signal_F3, *signal_F4;

	//����Ҷ�任����
	int fft_num;
	//Ƶ�ʲ������
	float fre_samp_interval;

	//���ٸ���Ҷ�任����
	void fft(float* Re, float* Im, int n, int isign);
	//����ļ�
	void output_file(int Output_Sample_Num, float Output_Sample_interval, float* Output_Sample_Data, QString Output_File_Dir);

private:
	Ui::CAmpSpectrumAddZerosClass ui;

private slots:
//��ӦƵ�ʳɷ���Ŀ�ı�Ĳۺ���
void on_Par0SpinBox_valueChanged(int new_value);
	//��������ļ�1�洢���ƣ�����·�����İ�ť�����Ӧ����
	void on_OutputFile1PushButton_clicked();
	//��������ļ�2�洢���ƣ�����·�����İ�ť�����Ӧ����
	void on_OutputFile2PushButton_clicked();
	//��������ļ�3�洢���ƣ�����·�����İ�ť�����Ӧ����
	void on_OutputFile3PushButton_clicked();
	//��������ļ�4�洢���ƣ�����·�����İ�ť�����Ӧ����
	void on_OutputFile4PushButton_clicked();
	//��������ļ�5�洢���ƣ�����·�����İ�ť�����Ӧ����
	void on_OutputFile5PushButton_clicked();
	//��������ļ�6�洢���ƣ�����·�����İ�ť�����Ӧ����
	void on_OutputFile6PushButton_clicked();
	//��������ļ�7�洢���ƣ�����·�����İ�ť�����Ӧ����
	void on_OutputFile7PushButton_clicked();
	//��������ļ�8�洢���ƣ�����·�����İ�ť�����Ӧ����
	void on_OutputFile8PushButton_clicked();
	//������㰴ť��Ӧ����
	void on_CalPushButton_clicked();
	//���ȡ����ť��Ӧ����
	void on_CancelPushButton_clicked();
};
