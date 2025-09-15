/*  KA, Konputagailuen Arkitektura - Informatika Ingeniaritza, 2. maila
    C laborategia

    matberbi.c
    matrize baten karratua (matrizea x matrizea)
***********************************************************************/

#include <stdio.h>
#include <stdlib.h>


int err_bider_zut (int *A, int *B, int N);


void main ()
{
  ...



  printf ("\n Matrizearen tamaina, N (max, 1000) >> ");
  ...

  if (N > 1000) {
    printf ("\n  Tamaina handiegia \n");
    exit (-1);
  }

  // esleitu memoria matrizeetarako, eta hasieratu balioak
  ...


  // kalkulatu A x A, err_bider_zut funtzioa erabiliz
  ...




  printf ("\n A2-ren osagaien batura: %d\n", batura);
  printf (" Matrizeak, A eta A2 \n");
  for (i=0; i<N; i++) 
  {
    for (j=0; j<N; j++) printf ("%5d ", A[N*i+j]);
    printf ("    ");
    for (j=0; j<N; j++) printf ("%5d ", A2[N*i+j]);
    printf ("\n");
  }
} // main


// errenkada eta zutabe bat biderkatzeko funtzioa
// ==============================================

int err_bider_zut (int *A, int *B, int N)
{

  ...

}
