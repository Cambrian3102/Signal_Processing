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

	//文件输出路径
	QString output_file_1_dir, output_file_2_dir, output_file_3_dir, output_file_4_dir, output_file_5_dir, output_file_6_dir, output_file_7_dir;
	//信号频率
	float f0, f1;
	//信号时间序列采样点数
	int N0,N1;
	//时间采样间隔
	float time_samp_interval;
	//系数
	float coeff_A0, coeff_A1, coeff_beta;
	//信号的存储数组
	float* signal_F0, *signal_F1;
	//信号的自相关存储数组
	float *self_correlation_F0, *self_correlation_F1;
	//信号的互相关存储数组
	float *cross_correlation_F0_F1, *cross_correlation_F1_F0, *cross_correlation_F0_F1_reverse_order;

	//自（互）相关计算函数
	void correlation(float* Array_A, float* Array_B, float* Array_Result, int Num_A, int Num_B, int Num_Result);
	//输出文件
	void output_file(int Output_Sample_Num, float Output_Sample_interval, float* Output_Sample_Data, QString Output_File_Dir);
	//重载函数,输出自(互)相关文件,针对从负时间起步的数据
	void output_file(int Output_Start_Pos, int Output_End_Pos, float Output_Sample_interval, float* Output_Sample_Data, QString Output_File_Dir);

private:
	Ui::CSelfCrossCorrelationClass ui;

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
