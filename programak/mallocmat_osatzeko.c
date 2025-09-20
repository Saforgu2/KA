/**********************************************************************
    memoria-esleipen dinamikoa 
***********************************************************************/

#include <stdio.h>
#include <stdlib.h>


void sortu_matrizea (int *A, int tam)
{
  int  i;

  for (i=0; i<tam; i++) A[i] = rand () % 100;
}


void main ()
{
  int    i, j, m, n, tam, batura = 0;
  int    *A;		// A matrizerako erakuslea, bektore gisa tratatuta
  int    **B;		// B matrizerako erakuslea, matrize gisa tratatuta

  float  bb;

  free (A);

  printf ("\n Errenkada kopurua  > ");
  scanf  ("%d", &m); 
  printf ("\n Zutabe kopurua  > ");
  scanf  ("%d", &n); 

// memoria esleitu A matrizeari, dimentsio bakarrean eta deitu sortu_matrizea funtzioari
  A = malloc(m*n * sizeof(int));
  sortu_matrizea(A, m * n);

// memoria esleitu B matrizeari, bi dimentsiotan eta deitu sortu_matrizea funtzioari
  B = malloc(m * sizeof(int *));
  for (i=0; i<m; i++) B[i] = malloc (n * sizeof(int));
  for(i = 0; i < m; i++) sortu_matrizea(B[i], n);

// Aren batazbestekoa kalkulatu eta inprimatu
  for(i = 0; i < (m * n); i++) batura += A[i];
  bb = batura / (float)(m * n);
  printf("\n A-ren batabestekoa: ");
  printf("%.4f", bb);
  printf("\n");
  batura = 0;

// Bren batazbestekoa kalkulatu eta inprimatu
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      batura += B[i][j];
    }
  }

  bb = batura / (float)(m * n);

  printf("\n B-ren batabestekoa: %.4f", bb);

  free (A);
  for (i=0; i<m; i++) free(B[i]);
  free (B);

}

