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

	//文件输出路径
	QString output_file_1_dir, output_file_2_dir, output_file_3_dir, output_file_4_dir, output_file_5_dir, output_file_6_dir, output_file_7_dir;
	//地层厚度信息
	float layer1_thickness, layer2_thickness, layer3_thickness, layer4_thickness, layer5_thickness, layer6_thickness;
	//地层速度信息
	float layer1_velocity, layer2_velocity, layer3_velocity, layer4_velocity, layer5_velocity, layer6_velocity;
	//地层密度信息
	float layer1_density, layer2_density, layer3_density, layer4_density, layer5_density, layer6_density;
	//反射系数序列采样点数
	int reflect_coeff_N;
	//反射系数序列
	float* reflect_coeff;

	//雷克子波主频率
	float main_fre;
	//雷克子波序列采样点数
	int ricker_N;
	//时间采样间隔
	float time_samp_interval;
	//雷克子波存储数组
	float* ricker,* ricker_spectrum;
	//随机噪音强度百分比
	float random_noise_percent;
	//随机噪音的存储数组
	float* random_noise;
	//地震记录存储数组
	float *record_has_noise, *record_no_noise;
	//地震记录的振幅谱存储数组
	float *record_has_noise_spectrum, *record_no_noise_spectrum;

	//傅里叶变换点数
	int fft_num;
	//频率采样间隔
	float fre_samp_interval;

	//褶积计算函数
	void convolution(float* Array_A, float* Array_B, float* Array_Result, int Num_A, int Num_B, int Num_Result);
	//快速傅里叶变换函数
	void fft(float* Re, float* Im, int n, int isign);
	//生成随机数序列
	void generate_rand_array(int Array_Num, float* Array_Data, float Min_Value, float Max_Value);
	//输出文件
	void output_file(int Output_Sample_Num, float Output_Sample_interval, float* Output_Sample_Data, QString Output_File_Dir);

private:
	Ui::CGenerateSeismicRecordClass ui;

private slots:
	//设置输出文件1存储名称（绝对路径）的按钮点击响应函数
	void on_OutputFile1PushButton_clicked();
	//设置输出文件2存储名称（绝对路径）的按钮点击响应函数
	void on_OutputFile2PushButton_clicked();
	//设置输出文件3存储名称（绝对路径）的按钮点击响应函数
	void on_OutputFile3PushButton_clicked();
	//设置输出文件4存储名称（绝对路径）的按钮点击响应函数
	void on_OutputFile4PushButton_clicked();
	//设置输出文件5存储名称（绝对路径）的按钮点击响应函数
	void on_OutputFile5PushButton_clicked();
	//设置输出文件6存储名称（绝对路径）的按钮点击响应函数
	void on_OutputFile6PushButton_clicked();
	//设置输出文件7存储名称（绝对路径）的按钮点击响应函数
	void on_OutputFile7PushButton_clicked();
	//点击计算按钮响应函数
	void on_CalPushButton_clicked();
	//点击取消按钮响应函数
	void on_CancelPushButton_clicked();
};
