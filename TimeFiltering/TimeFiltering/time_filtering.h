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

	//文件输出路径
	QString output_file_1_dir, output_file_2_dir, output_file_3_dir, output_file_4_dir, output_file_5_dir;
	//信号频率
	float f1, f2, f3, f4;
	//时间序列采样点数
	int N, M;
	//时间采样间隔
	float time_samp_interval;
	//系数
	float coeff_A1, coeff_A2, coeff_A3, coeff_beta;
	//时域滤波器的低截频与高截频
	float low_cut_fre, high_cut_fre;
	//信号的存储数组
	float* signal_s, *signal_p, *signal_x, *signal_y;
	//时域滤波因子存储数组
	float* filter_h;

	//褶积计算函数
	void convolution(float* Array_A, float* Array_B, float* Array_Result, int Num_A, int Num_B, int Num_Result);
	//输出文件
	void output_file(int Output_Sample_Num, float Output_Sample_interval, float* Output_Sample_Data, QString Output_File_Dir);

private:
	Ui::CTimeFilteringClass ui;

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
	//点击计算按钮响应函数
	void on_CalPushButton_clicked();
	//点击取消按钮响应函数
	void on_CancelPushButton_clicked();
};
