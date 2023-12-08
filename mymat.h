#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
#define matricesize 6
#define length 4
typedef double mat[length][length]; 

mat* create_matrix();

void add_mat( mat, mat, mat *);
void free_matrix(mat matrices[]);



void sub_mat( mat, mat, mat *);
void mul_mat( mat, mat, mat *);
void scalar_m( mat, double , mat *);
void mat_t( mat, mat *);

void read_mat(mat *, double []);
void arr_reset (double *);
void mat_reset (mat *);
void print_mat (mat );

int checkfuncname(char* func);
int checkmatname(char );
