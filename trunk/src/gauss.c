#include "gauss.h"
/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){
        int r = mat->r;
        int c = mat->c;
	int i;
	int j;
	int k;
	for( i=0; i<r-1; i++)
	{
	for( j=i+1; j<r; j++)
	{
		if(mat->data[i][i] == 0)return 1;
		double tym = (-1) * mat->data[j][i] / mat->data[i][i];	
		for( k=i; k<r; k++)
		{
			mat-> data[j][k] += tym * mat->data[i][k]; 
		}
		b->data[j][0] += tym * b->data[i][0];
	}
}
	return 0;
}

