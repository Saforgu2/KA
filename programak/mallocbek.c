/**********************************************************************
    memoria-esleipen dinamikoa
***********************************************************************/

#include <stdio.h>
#include <stdlib.h>


void sortu_bek (int *A, int tam)
{
  int  i;
  for (i=0; i<tam; i++) A[i] = rand () % 100;
}


void main (int argc, char *argv[])
{
  int    i, tam, batura;
  int    *A;		// A bektorerako erakuslea
  float  bb;


  printf ("\n Osagai kopurua  > ");
  scanf  ("%d", &tam); 

  A = malloc (tam * sizeof(int));  // memoria esleitu A bektoreari
  sortu_bek (A, tam);

  batura = 0;
  for (i=0; i<tam; i++) batura += A[i];
  bb = (float) batura / tam;

  printf ("\n Osagai kop.: %2d -- Batura: %4d -- Batezbestekoa: %1.2f\n\n", tam, batura, bb);
  free (A);
}

