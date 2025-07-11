/************************************************************************
**
** ���ļ����������ڴ�ռ������  
**
*************************************************************************/

#include "allocate.h"
#include "malloc.h"

/************************************************************************/
/* ����1ά��������,����(����) */
/************************************************************************/
int* allocate1int(int column)
{
	int* p;
	p = new int [column];
	if (p == 0)
	{
		free1int(p);
	}
	else
	{
		for (int i=0;i<column;i++)
		{
			p[i] = 0.0;
		}
	}
	return p;
}

/************************************************************************/
/* ����2ά��������,����(����,����) */
/************************************************************************/
int** allocate2int(int row,int column)
{
	int** p;
	p = new int* [row];
	for(int i=0;i<row;i++)
	{
		p[i] = new int [column];
	}
	if (p == 0)
	{
		free2int(p,row);
	}
	else
	{
		for (int i=0;i<row;i++)
		{
			for (int j=0;j<column;j++)
			{
				p[i][j] =0.0;
			}
		}
	}
	return p;
}

/************************************************************************/
/* ����3ά��������,����(ҳ��,����,����) */
/************************************************************************/
int*** allocate3int(int page,int row,int column)
{
	int i,j,k;
	int*** p;
	p = new int** [page];
	for(i=0; i<page; i++)
	{
		p[i] = new int* [row];
		for(j=0; j<row; j++) 
		{
			p[i][j]=new int[column]; 
		}
	}
	if (p == 0)
	{
		free3int(p,page,row);
	}
	else
	{
		for (i=0;i<page;i++)
		{
			for (j=0;j<row;j++)
			{
				for (k=0;k<column;k++)
				{
					p[i][j][k] = 0.0;;
				}
			}
		}
	}
	return p;
}

/************************************************************************/
/* ����1ά����������,����(����) */
/************************************************************************/
float* allocate1float(int column)
{
	float* p;
	p = new float [column];
	if (p == 0)
	{
		free1float(p);
	}
	else
	{
		for (int i=0;i<column;i++)
		{
			p[i] = 0.0;
		}
	}
	return p;
}

/************************************************************************/
/* ����2ά����������,����(����,����) */
/************************************************************************/
float** allocate2float(int row,int column)
{
	float** p;
	p = new float* [row];
	for(int i=0;i<row;i++)
	{
		p[i] = new float [column];
	}
	if (p == 0)
	{
		free2float(p,row);
	}
	else
	{
		for (int i=0;i<row;i++)
		{
			for (int j=0;j<column;j++)
			{
			    p[i][j] =0.0;
			}
		}
	}
	return p;
}

/************************************************************************/
/* ����3ά����������,����(ҳ��,����,����) */
/************************************************************************/
float*** allocate3float(int page,int row,int column)
{
	int i,j,k;
	float*** p;
	p = new float** [page];
	for(i=0; i<page; i++)
	{
		p[i] = new float* [row];
		for(j=0; j<row; j++) 
		{
			p[i][j]=new float[column]; 
		}
	}
	if (p == 0)
	{
		free3float(p,page,row);
	}
	else
	{
		for (i=0;i<page;i++)
		{
			for (j=0;j<row;j++)
			{
				for (k=0;k<column;k++)
				{
					p[i][j][k] = 0.0;;
				}
			}
		}
	}
	return p;
}

/************************************************************************/
/* ����1ά16λ���븡��������,����(����)(SSEָ����ʹ��) */
/************************************************************************/
float* allocate1float_aligned16(int column)
{
	float* p = (float*)_aligned_malloc(sizeof(float)*column, 16);
	if (p == 0)
	{
		free1float_aligned16(p);
	}
	else
	{
		for (int i = 0; i < column; i++)
		{
			p[i] = 0.0;
		}
	}
	return p;
}

/************************************************************************/
/* ����2ά16λ���븡��������,����(����,����)(SSEָ����ʹ��) */
/************************************************************************/
float** allocate2float_aligned16(int row, int column)
{
	int i, j;
	float** p = (float**)_aligned_malloc(sizeof(float*)*row, 16);
	for (i = 0; i < row; i++)
	{
		p[i] = (float*)_aligned_malloc(sizeof(float)*column, 16);
	}
	if (p == 0)
	{
		free2float_aligned16(p, row);
	}
	else
	{
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
			{
				p[i][j] = 0.0;;
			}
		}
	}
	return p;
}

/************************************************************************/
/* ����3ά16λ���븡��������,����(ҳ��,����,����)(SSEָ����ʹ��) */
/************************************************************************/
float*** allocate3float_aligned16(int page, int row, int column)
{
	//float* u_cur_1D_SSE_temp=(float*)_aligned_malloc(sizeof(float)*nx*ny*nz,16);

	int i, j, k;
	float*** p = (float***)_aligned_malloc(sizeof(float**)*page, 16);
	//p = new float** [page];
	for (i = 0; i < page; i++)
	{
		p[i] = (float**)_aligned_malloc(sizeof(float*)*row, 16);
		for (j = 0; j < row; j++)
		{
			p[i][j] = (float*)_aligned_malloc(sizeof(float)*column, 16);
		}
	}
	if (p == 0)
	{
		free3float_aligned16(p, page, row);
	}
	else
	{
		for (i = 0; i < page; i++)
		{
			for (j = 0; j < row; j++)
			{
				for (k = 0; k < column; k++)
				{
					p[i][j][k] = 0.0;;
				}
			}
		}
	}
	return p;
}

/************************************************************************/
/* ����1ά32λ���븡��������,����(����)(AVXָ����ʹ��) */
/************************************************************************/
float* allocate1float_aligned32(int column)
{
	float* p = (float*)_aligned_malloc(sizeof(float)*column, 32);
	if (p == 0)
	{
		free1float_aligned32(p);
	}
	else
	{
		for (int i = 0; i < column; i++)
		{
			p[i] = 0.0;
		}
	}
	return p;
}

/************************************************************************/
/* ����2ά32λ���븡��������,����(����,����)(AVXָ����ʹ��) */
/************************************************************************/
float** allocate2float_aligned32(int row, int column)
{
	int i, j;
	float** p = (float**)_aligned_malloc(sizeof(float*)*row, 32);
	for (i = 0; i < row; i++)
	{
		p[i] = (float*)_aligned_malloc(sizeof(float)*column, 32);
	}
	if (p == 0)
	{
		free2float_aligned32(p, row);
	}
	else
	{
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
			{
				p[i][j] = 0.0;;
			}
		}
	}
	return p;
}

/************************************************************************/
/* ����3ά32λ���븡��������,����(ҳ��,����,����)(AVXָ����ʹ��) */
/************************************************************************/
float*** allocate3float_aligned32(int page, int row, int column)
{
	int i, j, k;
	float*** p = (float***)_aligned_malloc(sizeof(float**)*page, 32);
	for (i = 0; i < page; i++)
	{
		p[i] = (float**)_aligned_malloc(sizeof(float*)*row, 32);
		for (j = 0; j < row; j++)
		{
			p[i][j] = (float*)_aligned_malloc(sizeof(float)*column, 32);
		}
	}
	if (p == 0)
	{
		free3float_aligned32(p, page, row);
	}
	else
	{
		for (i = 0; i < page; i++)
		{
			for (j = 0; j < row; j++)
			{
				for (k = 0; k < column; k++)
				{
					p[i][j][k] = 0.0;;
				}
			}
		}
	}
	return p;
}

/************************************************************************/
/* ����1ά˫����������,����(����) */
/************************************************************************/
double* allocate1double(int column)
{
	double* p;
	p = new double [column];
	if (p == 0)
	{
		free1double(p);
	}
	else
	{
		for (int i=0;i<column;i++)
		{
			p[i] = 0.0;
		}
	}
	return p;
}

/************************************************************************/
/* ����2ά˫����������,����(����,����) */
/************************************************************************/
double** allocate2double(int row,int column)
{
	double** p;
	p = new double* [row];
	for(int i=0;i<row;i++)
	{
		p[i] = new double [column];
	}
	if (p == 0)
	{
		free2double(p,row);
	}
	else
	{
		for (int i=0;i<row;i++)
		{
			for (int j=0;j<column;j++)
			{
				p[i][j] =0.0;
			}
		}
	}
	return p;
}

/************************************************************************/
/* ����3ά˫����������,����(ҳ��,����,����) */
/************************************************************************/
double*** allocate3double(int page,int row,int column)
{
	int i,j,k;
	double*** p;
	p = new double** [page];
	for(i=0; i<page; i++)
	{
		p[i] = new double* [row];
		for(j=0; j<row; j++) 
		{
			p[i][j]=new double[column]; 
		}
	}
	if (p == 0)
	{
		free3double(p,page,row);
	}
	else
	{
		for (i=0;i<page;i++)
		{
			for (j=0;j<row;j++)
			{
				for (k=0;k<column;k++)
				{
					p[i][j][k] = 0.0;;
				}
			}
		}
	}
	return p;
}

/************************************************************************/
/* �ͷ�1ά���������ڴ�ռ�,����(����ָ��) */
/************************************************************************/
void free1int(int* p)
{
	delete [] p;
	p = 0;
}

/************************************************************************/
/* �ͷ�2ά���������ڴ�ռ�,����(����ָ��,����) */
/************************************************************************/
void free2int(int** p,int row)
{
	int i;
	for (i=0;i<row;i++)
	{
		delete [] p[i];  
	}
	delete [] p;  
	p = 0;
}

/************************************************************************/
/* �ͷ�3ά���������ڴ�ռ�,����(����ָ��,ҳ��,����) */
/************************************************************************/
void free3int(int*** p,int page,int row)
{
	int i,j;
	for(i=0; i<page; i++) 
	{
		for(j=0; j<row; j++) 
		{   
			delete [] p[i][j];   
		}   
	}       
	for(i=0; i<page; i++)   
	{       
		delete [] p[i];   
	}   
	delete [] p;  
	p = 0;
} 

/************************************************************************/
/* �ͷ�1ά�����������ڴ�ռ�,����(����ָ��) */
/************************************************************************/
void free1float(float* p)
{
	delete [] p;
	p = 0;
}

/************************************************************************/
/* �ͷ�2ά�����������ڴ�ռ�,����(����ָ��,����) */
/************************************************************************/
void free2float(float** p,int row)
{
	int i;
	for (i=0;i<row;i++)
	{
		delete [] p[i];  
	}
	delete [] p;  
	p = 0;
}

/************************************************************************/
/* �ͷ�3ά�����������ڴ�ռ�,����(����ָ��,ҳ��,����) */
/************************************************************************/
void free3float(float*** p,int page,int row)
{
	int i,j;
	for(i=0; i<page; i++) 
	{
		for(j=0; j<row; j++) 
		{   
			delete [] p[i][j];   
		}   
	}       
	for(i=0; i<page; i++)   
	{       
		delete [] p[i];   
	}   
	delete [] p;  
	p = 0;
} 

/************************************************************************/
/* �ͷ�1ά16λ�����븡���������ڴ�ռ�,����(����ָ��)(SSEָ����ʹ��) */
/************************************************************************/
void free1float_aligned16(float* p)
{
	_aligned_free(p);
	p = 0;
}

/************************************************************************/
/* �ͷ�2ά16λ�����븡���������ڴ�ռ�,����(����ָ��,����)(SSEָ����ʹ��) */
/************************************************************************/
void free2float_aligned16(float** p, int row)
{
	int i;
	for (i = 0; i < row; i++)
	{
		_aligned_free(p[i]);
		//delete [] p[i];   
	}
	_aligned_free(p);
	//delete [] p;  
	p = 0;
}

/************************************************************************/
/* �ͷ�3ά16λ�����븡���������ڴ�ռ�,����(����ָ��,ҳ��,����)(SSEָ����ʹ��) */
/************************************************************************/
void free3float_aligned16(float*** p, int page, int row)
{
	int i, j;
	for (i = 0; i < page; i++)
	{
		for (j = 0; j < row; j++)
		{
			_aligned_free(p[i][j]);
			//delete [] p[i][j];   
		}
	}
	for (i = 0; i < page; i++)
	{
		_aligned_free(p[i]);
		//delete [] p[i];   
	}
	_aligned_free(p);
	//delete [] p;  
	p = 0;
}

/************************************************************************/
/* �ͷ�1ά32λ�����븡���������ڴ�ռ�,����(����ָ��)(AVXָ����ʹ��) */
/************************************************************************/
void free1float_aligned32(float* p)
{
	_aligned_free(p);
	p = 0;
}

/************************************************************************/
/* �ͷ�2ά32λ�����븡���������ڴ�ռ�,����(����ָ��,����)(AVXָ����ʹ��) */
/************************************************************************/
void free2float_aligned32(float** p, int row)
{
	int i;
	for (i = 0; i < row; i++)
	{
		_aligned_free(p[i]);
		//delete [] p[i];   
	}
	_aligned_free(p);
	//delete [] p;  
	p = 0;
}

/************************************************************************/
/* �ͷ�3ά32λ�����븡���������ڴ�ռ�,����(����ָ��,ҳ��,����)(AVXָ����ʹ��) */
/************************************************************************/
void free3float_aligned32(float*** p, int page, int row)
{
	int i, j;
	for (i = 0; i < page; i++)
	{
		for (j = 0; j < row; j++)
		{
			_aligned_free(p[i][j]);
			//delete [] p[i][j];   
		}
	}
	for (i = 0; i < page; i++)
	{
		_aligned_free(p[i]);
		//delete [] p[i];   
	}
	_aligned_free(p);
	//delete [] p;  
	p = 0;
}

/************************************************************************/
/* �ͷ�1ά˫�����������ڴ�ռ�,����(����ָ��) */
/************************************************************************/
void free1double(double* p)
{
	delete [] p;
	p = 0;
}

/************************************************************************/
/* �ͷ�2ά˫�����������ڴ�ռ�,����(����ָ��,����) */
/************************************************************************/
void free2double(double** p,int row)
{
	int i;
	for (i=0;i<row;i++)
	{
		delete [] p[i];  
	}
	delete [] p;  
	p = 0;
}

/************************************************************************/
/* �ͷ�3ά˫�����������ڴ�ռ�,����(����ָ��,ҳ��,����) */
/************************************************************************/
void free3double(double*** p,int page,int row)
{
	int i,j;
	for(i=0; i<page; i++) 
	{
		for(j=0; j<row; j++) 
		{   
			delete [] p[i][j];   
		}   
	}       
	for(i=0; i<page; i++)   
	{       
		delete [] p[i];   
	}   
	delete [] p;  
	p = 0;
} 