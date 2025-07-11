#pragma once

#include <QtWidgets/QDialog>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>
#include <QFileDialog>
#include <QTime>
#include "ui_generate_seismic_record.h"
#include "allocate.h"

class CGenerateSeismicRecord : public QDialog
{
	Q_OBJECT

public:
	CGenerateSeismicRecord(QWidget *parent = Q_NULLPTR);

	//�ļ����·��
	QString output_file_1_dir, output_file_2_dir, output_file_3_dir, output_file_4_dir, output_file_5_dir, output_file_6_dir, output_file_7_dir;
	//�ز�����Ϣ
	float layer1_thickness, layer2_thickness, layer3_thickness, layer4_thickness, layer5_thickness, layer6_thickness;
	//�ز��ٶ���Ϣ
	float layer1_velocity, layer2_velocity, layer3_velocity, layer4_velocity, layer5_velocity, layer6_velocity;
	//�ز��ܶ���Ϣ
	float layer1_density, layer2_density, layer3_density, layer4_density, layer5_density, layer6_density;
	//����ϵ�����в�������
	int reflect_coeff_N;
	//����ϵ������
	float* reflect_coeff;

	//�׿��Ӳ���Ƶ��
	float main_fre;
	//�׿��Ӳ����в�������
	int ricker_N;
	//ʱ��������
	float time_samp_interval;
	//�׿��Ӳ��洢����
	float* ricker,* ricker_spectrum;
	//�������ǿ�Ȱٷֱ�
	float random_noise_percent;
	//��������Ĵ洢����
	float* random_noise;
	//�����¼�洢����
	float *record_has_noise, *record_no_noise;
	//�����¼������״洢����
	float *record_has_noise_spectrum, *record_no_noise_spectrum;

	//����Ҷ�任����
	int fft_num;
	//Ƶ�ʲ������
	float fre_samp_interval;

	//�޻����㺯��
	void convolution(float* Array_A, float* Array_B, float* Array_Result, int Num_A, int Num_B, int Num_Result);
	//���ٸ���Ҷ�任����
	void fft(float* Re, float* Im, int n, int isign);
	//�������������
	void generate_rand_array(int Array_Num, float* Array_Data, float Min_Value, float Max_Value);
	//����ļ�
	void output_file(int Output_Sample_Num, float Output_Sample_interval, float* Output_Sample_Data, QString Output_File_Dir);

private:
	Ui::CGenerateSeismicRecordClass ui;

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
