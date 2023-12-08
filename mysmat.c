#include <math.h>
#include "mymat.h"


void add_mat( mat a, mat b , mat *result)
{
	int i,j;
	
	for(i=0;i<length;i++)
		for(j=0;j<length;j++)
			(*result)[i][j] = a[i][j] + b[i][j];	
}

void sub_mat( mat a, mat b , mat *result)
{
	int i,j;
	
	for(i=0;i<length;i++)
		for(j=0;j<length;j++)
			(*result)[i][j] = a[i][j] - b[i][j];	
}

void mul_mat( mat a, mat b , mat *result)
{
	int i,j,c,count;
	
	for(i=0;i<length;i++)
	{
		for(c=0;c<length;c++)
		{
			count=0;			
			for(j=0;j<length;j++)
				count += (a[i][j] * b[j][i]);
			(*result)[i][c] = count;
		}
	}	
}

void scalar_m( mat a, double scal , mat *result)
{
	int i,j;
	
	for(i=0;i<length;i++)
		for(j=0;j<length;j++)
			(*result)[i][j] = (a[i][j] * scal);	
}

void mat_t( mat a , mat *result)
{
	int i,j;
	
	for(i=0;i<length;i++)
		for(j=0;j<length;j++)
			(*result)[i][j] = a[j][i];	
}














