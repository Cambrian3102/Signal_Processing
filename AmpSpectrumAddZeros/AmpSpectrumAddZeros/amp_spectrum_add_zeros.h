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

	//文件输出路径
	QString output_file_1_dir, output_file_2_dir, output_file_3_dir, output_file_4_dir, output_file_5_dir, output_file_6_dir, output_file_7_dir, output_file_8_dir;
	//信号频率成份的数目
	int M;
	//信号频率
	float f[5];
	//各频率成份的能量加权系数
	float coeff_A[5];
	//时间序列采样点数
	int N;
	//时间采样间隔
	float time_samp_interval;

	//前补零数目以及补零后的序列样点总数目
	int add_zeros_num_in_front,N_after_add_zero_in_front;
	//后补零数目以及补零后的序列样点总数目
	int add_zeros_num_at_back, N_after_add_zero_at_back;
	//隔档差零数目以及补零后的序列样点总数目
	int add_zeros_num_insert, N_after_add_zero_insert;
	
	//时域信号的存储数组
	float* signal_f1, *signal_f2, *signal_f3, *signal_f4;
	//信号的振幅谱存储数组
	float *signal_F1, *signal_F2, *signal_F3, *signal_F4;

	//傅里叶变换点数
	int fft_num;
	//频率采样间隔
	float fre_samp_interval;

	//快速傅里叶变换函数
	void fft(float* Re, float* Im, int n, int isign);
	//输出文件
	void output_file(int Output_Sample_Num, float Output_Sample_interval, float* Output_Sample_Data, QString Output_File_Dir);

private:
	Ui::CAmpSpectrumAddZerosClass ui;

private slots:
//响应频率成份数目改变的槽函数
void on_Par0SpinBox_valueChanged(int new_value);
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
	//设置输出文件8存储名称（绝对路径）的按钮点击响应函数
	void on_OutputFile8PushButton_clicked();
	//点击计算按钮响应函数
	void on_CalPushButton_clicked();
	//点击取消按钮响应函数
	void on_CancelPushButton_clicked();
};
