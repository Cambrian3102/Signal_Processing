#ifndef ALLOCATE_H
#define ALLOCATE_H
/************************************************************************
**
** ���ӳ������������ڴ�ռ������  
**
************************************************************************/

//����1ά��������
int* allocate1int(int column);

//����2ά��������
int** allocate2int(int row,int column);

//����3ά��������
int*** allocate3int(int page,int row,int column);

//����1ά����������
float* allocate1float(int column);

//����2ά����������
float** allocate2float(int row,int column);

//����3ά����������
float*** allocate3float(int page,int row,int column);

//����1ά16λ���븡��������(SSEָ����ʹ��)
float* allocate1float_aligned16(int column);

//����2ά16λ���븡��������(SSEָ����ʹ��)
float** allocate2float_aligned16(int row, int column);

//����2ά16λ���븡��������(SSEָ����ʹ��)
float*** allocate3float_aligned16(int page, int row, int column);

//����1ά32λ���븡��������(AVXָ����ʹ��)
float* allocate1float_aligned32(int column);

//����2ά32λ���븡��������(AVXָ����ʹ��)
float** allocate2float_aligned32(int row, int column);

//����2ά32λ���븡��������(AVXָ����ʹ��)
float*** allocate3float_aligned32(int page, int row, int column);

//����1ά˫����������
double* allocate1double(int column);

//����2ά˫����������
double** allocate2double(int row,int column);

//����3ά˫����������
double*** allocate3double(int page,int row,int column);

//�ͷ�1ά��������ռ�
void free1int(int* p);

//�ͷ�2ά��������ռ�
void free2int(int** p,int row);

//�ͷ�3ά��������ռ�
void free3int(int*** p,int page,int row);

//�ͷ�1ά����������ռ�
void free1float(float* p);

//�ͷ�2ά����������ռ�
void free2float(float** p,int row);

//�ͷ�3ά����������ռ�
void free3float(float*** p,int page,int row);

//�ͷ�3ά16λ�����븡��������ռ�(SSEָ����ʹ��)
void free1float_aligned16(float* p);

//�ͷ�2ά16λ�����븡��������ռ�(SSEָ����ʹ��)
void free2float_aligned16(float** p, int row);

//�ͷ�3ά16λ�����븡��������ռ�(SSEָ����ʹ��)
void free3float_aligned16(float*** p, int page, int row);

//�ͷ�3ά32λ�����븡��������ռ�(AVXָ����ʹ��)
void free1float_aligned32(float* p);

//�ͷ�2ά32λ�����븡��������ռ�(AVXָ����ʹ��)
void free2float_aligned32(float** p, int row);

//�ͷ�3ά32λ�����븡��������ռ�(AVXָ����ʹ��)
void free3float_aligned32(float*** p, int page, int row);

//�ͷ�1ά˫����������ռ�
void free1double(double* p);

//�ͷ�2ά˫����������ռ�
void free2double(double** p,int row);

//�ͷ�3ά˫����������ռ�
void free3double(double*** p,int page,int row);


#endif