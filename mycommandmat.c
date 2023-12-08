#include "mymat.h"


void read_mat(mat *result, double numbers[])
{
	int i,j;
	int pos = 0;

	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			(*result)[i][j] = numbers[pos];	
			pos++;
		}
	}
}

void arr_reset (double *result)
{
	int i;
	
	for(i=0; i<(length*length);i++)
		result[i] = 0.0;
}

void mat_reset (mat *result)
{
	int i,j;

	for(i=0;i<length;i++)
		for(j=0;j<length;j++)
			(*result)[i][j] = 0.0 ;
}

void print_mat (mat a)
{
	int i,j;

	for(i=0;i<length;i++)
	{
	printf("\n");
		for(j=0;j<length;j++)
		{
			printf("\t %7.2f",a[i][j]); 
		}
	}
}

