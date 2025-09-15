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
  int    i, j, m, n, tam, batura;
  int    *A;		// A matrizerako erakuslea, bektore gisa tratatuta
  int    **B;		// B matrizerako erakuslea, matrize gisa tratatuta

  float  bb;


  printf ("\n Errenkada kopurua  > ");
  scanf  ("%d", &m); 
  printf ("\n Zutabe kopurua  > ");
  scanf  ("%d", &n); 

// memoria esleitu A matrizeari, dimentsio bakarrean eta deitu sortu_matrizea funtzioari
  	OSATZEKO


// memoria esleitu B matrizeari, bi dimentsiotan eta deitu sortu_matrizea funtzioari
	 OSATZEKO



// Aren batazbestekoa kalkulatu eta inprimatu
  	OSATZEKO


// Bren batazbestekoa kalkulatu eta inprimatu
  	OSATZEKO


  free (A);
  for (i=0; i<m; i++) free(B[i]);
  free (B);

}

