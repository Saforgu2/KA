#include <stdio.h>
#include <stdlib.h>

void sortu_matrizea (int *A, int tam)
{
  int  i;

  for (i=0; i<tam; i++) A[i] = rand () % 100;
}

void main(int argc, char *argv[]){
    int *A;
    int n, batura, erren;
    // argv[0] == izena

    n = atoi argv[1];
    A = malloc(n*n * sizeof(int));
    batura = 0;

    if(argc > 3){
        sortu_matrizea(A, n*n)
        for(int i = 1; i <= argc; i++){
            erren = atoi argv[i];
            for(int j = erren * n: j < (erren + n - 1); i++){
                batura += A[j];
            }
        }

        printf("\n Errenkaden batura: %d", batura);
    }
}