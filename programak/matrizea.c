/***********************************************************
	Matrize bateko zenbaki bakoitien batura
***********************************************************/	

#include <stdio.h>
#include <stdlib.h>	// rand() funtzioa du definituta

#define M 3
#define N 4

void main ()
{
  int  i,j, batura;
  int  mat[M][N];
  
  // matrizea hasieratzea
  for (i=0; i<M; i++)    
     for (j=0; j<N; j++)
	mat[i][j] = rand () % 100;	

  batura = 0;
  // zenbaki bakoitien batura
  for (i=0; i<M; i++)    
     for (j=0; j<N; j++)
	if ((mat[i][j] % 2) == 1) batura += mat[i][j];	

  // matrizea txukun inprimatu
  for (i=0; i<M; i++)  
  {  
     for (j=0; j<N; j++)
	printf ("\t%d", mat[i][j]);
     printf("\n");		
  }
  printf ("\n batura = %d\n", batura);
}
	
