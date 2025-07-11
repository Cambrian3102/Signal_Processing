#pragma once

#include <QtWidgets/QDialog>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>
#include <QFileDialog>
#include "ui_self_cross_correlation.h"
#include "allocate.h"

class CSelfCrossCorrelation : public QDialog
{
	Q_OBJECT

public:
	CSelfCrossCorrelation(QWidget *parent = Q_NULLPTR);

	//�ļ����·��
	QString output_file_1_dir, output_file_2_dir, output_file_3_dir, output_file_4_dir, output_file_5_dir, output_file_6_dir, output_file_7_dir;
	//�ź�Ƶ��
	float f0, f1;
	//�ź�ʱ�����в�������
	int N0,N1;
	//ʱ��������
	float time_samp_interval;
	//ϵ��
	float coeff_A0, coeff_A1, coeff_beta;
	//�źŵĴ洢����
	float* signal_F0, *signal_F1;
	//�źŵ�����ش洢����
	float *self_correlation_F0, *self_correlation_F1;
	//�źŵĻ���ش洢����
	float *cross_correlation_F0_F1, *cross_correlation_F1_F0, *cross_correlation_F0_F1_reverse_order;

	//�ԣ�������ؼ��㺯��
	void correlation(float* Array_A, float* Array_B, float* Array_Result, int Num_A, int Num_B, int Num_Result);
	//����ļ�
	void output_file(int Output_Sample_Num, float Output_Sample_interval, float* Output_Sample_Data, QString Output_File_Dir);
	//���غ���,�����(��)����ļ�,��ԴӸ�ʱ���𲽵�����
	void output_file(int Output_Start_Pos, int Output_End_Pos, float Output_Sample_interval, float* Output_Sample_Data, QString Output_File_Dir);

private:
	Ui::CSelfCrossCorrelationClass ui;

private slots:
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
	//������㰴ť��Ӧ����
	void on_CalPushButton_clicked();
	//���ȡ����ť��Ӧ����
	void on_CancelPushButton_clicked();
};
