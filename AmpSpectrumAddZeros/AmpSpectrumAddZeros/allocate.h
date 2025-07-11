#ifndef ALLOCATE_H
#define ALLOCATE_H
/************************************************************************
**
** 该子程序用于数组内存空间的申请  
**
************************************************************************/

//申请1维整形数组
int* allocate1int(int column);

//申请2维整形数组
int** allocate2int(int row,int column);

//申请3维整形数组
int*** allocate3int(int page,int row,int column);

//申请1维浮点形数组
float* allocate1float(int column);

//申请2维浮点形数组
float** allocate2float(int row,int column);

//申请3维浮点形数组
float*** allocate3float(int page,int row,int column);

//申请1维16位对齐浮点形数组(SSE指令集编程使用)
float* allocate1float_aligned16(int column);

//申请2维16位对齐浮点形数组(SSE指令集编程使用)
float** allocate2float_aligned16(int row, int column);

//申请2维16位对齐浮点形数组(SSE指令集编程使用)
float*** allocate3float_aligned16(int page, int row, int column);

//申请1维32位对齐浮点形数组(AVX指令集编程使用)
float* allocate1float_aligned32(int column);

//申请2维32位对齐浮点形数组(AVX指令集编程使用)
float** allocate2float_aligned32(int row, int column);

//申请2维32位对齐浮点形数组(AVX指令集编程使用)
float*** allocate3float_aligned32(int page, int row, int column);

//申请1维双精度形数组
double* allocate1double(int column);

//申请2维双精度形数组
double** allocate2double(int row,int column);

//申请3维双精度形数组
double*** allocate3double(int page,int row,int column);

//释放1维整形数组空间
void free1int(int* p);

//释放2维整形数组空间
void free2int(int** p,int row);

//释放3维整形数组空间
void free3int(int*** p,int page,int row);

//释放1维浮点形数组空间
void free1float(float* p);

//释放2维浮点形数组空间
void free2float(float** p,int row);

//释放3维浮点形数组空间
void free3float(float*** p,int page,int row);

//释放3维16位对其齐浮点形数组空间(SSE指令集编程使用)
void free1float_aligned16(float* p);

//释放2维16位对其齐浮点形数组空间(SSE指令集编程使用)
void free2float_aligned16(float** p, int row);

//释放3维16位对其齐浮点形数组空间(SSE指令集编程使用)
void free3float_aligned16(float*** p, int page, int row);

//释放3维32位对其齐浮点形数组空间(AVX指令集编程使用)
void free1float_aligned32(float* p);

//释放2维32位对其齐浮点形数组空间(AVX指令集编程使用)
void free2float_aligned32(float** p, int row);

//释放3维32位对其齐浮点形数组空间(AVX指令集编程使用)
void free3float_aligned32(float*** p, int page, int row);

//释放1维双精度形数组空间
void free1double(double* p);

//释放2维双精度形数组空间
void free2double(double** p,int row);

//释放3维双精度形数组空间
void free3double(double*** p,int page,int row);


#endif