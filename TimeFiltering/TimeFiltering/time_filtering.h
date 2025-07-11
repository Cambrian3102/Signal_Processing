#pragma once

#include <QtWidgets/QDialog>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>
#include <QFileDialog>
#include "ui_time_filtering.h"
#include "allocate.h"

class CTimeFiltering : public QDialog
{
	Q_OBJECT

public:
	CTimeFiltering(QWidget *parent = Q_NULLPTR);

	//�ļ����·��
	QString output_file_1_dir, output_file_2_dir, output_file_3_dir, output_file_4_dir, output_file_5_dir;
	//�ź�Ƶ��
	float f1, f2, f3, f4;
	//ʱ�����в�������
	int N, M;
	//ʱ��������
	float time_samp_interval;
	//ϵ��
	float coeff_A1, coeff_A2, coeff_A3, coeff_beta;
	//ʱ���˲����ĵͽ�Ƶ��߽�Ƶ
	float low_cut_fre, high_cut_fre;
	//�źŵĴ洢����
	float* signal_s, *signal_p, *signal_x, *signal_y;
	//ʱ���˲����Ӵ洢����
	float* filter_h;

	//�޻����㺯��
	void convolution(float* Array_A, float* Array_B, float* Array_Result, int Num_A, int Num_B, int Num_Result);
	//����ļ�
	void output_file(int Output_Sample_Num, float Output_Sample_interval, float* Output_Sample_Data, QString Output_File_Dir);

private:
	Ui::CTimeFilteringClass ui;

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
	//������㰴ť��Ӧ����
	void on_CalPushButton_clicked();
	//���ȡ����ť��Ӧ����
	void on_CancelPushButton_clicked();
};
