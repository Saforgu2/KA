/*********************************************************************
	Matrize bateko i,j osagaia mat[i][j] bakoitia ala bikoitia den
	Matrizea bektore gisa tratatuta
*********************************************************************/

#include <stdio.h>
#include <stdlib.h>	// rand() funtzioa du definituta

#define M 3
#define N 4

void main (int argc, char *argv[])
{
  int  i,j;
  int  mat[M*N];

  // matrizea hasieratzea
  for (i=0; i<M*N; i++)
	mat[i] = rand () % 100;

  // matrizea txukun inprimatu
  for (i=0; i<M; i++)
  {
     for (j=0; j<N; j++)
	printf ("\t%d", mat[i*N+j]);
 	printf("\n");
  }

  printf ("\nSartu i eta j: ");
  scanf ("%d" "%d", &i, &j);
  if ((mat[i*N+j] % 2) == 0) printf ("%d bikoitia da\n", mat[i*N+j]);
  else printf ("%d bakoitia da\n", mat[i*N+j]);

}
