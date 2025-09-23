#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void sortu_matrizea (int *A, int tam){
  int  i;
  for (i=0; i<tam; i++){
    A[i] = rand () % 100;
  }
}

void main(){
  int i, batura;
  bool txiki = false;
  int A[100];

  srand(time(NULL));

  sortu_matrizea(A, 100);
  batura = 0;
  i = 0;

  while(!txiki && i < 100){
    if(A[i] < 5){
        txiki = true;
    }
    else{
        batura += A[i];
        i++;
    }
  }

  printf("\n A bektorearen batura: %d\n", batura);
  printf("\n Posizioa batuketa-prozesuarena: %d\n", i);
}
