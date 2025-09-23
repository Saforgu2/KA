#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sortu_matrizea(int *A, int n) {
    int pos;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            pos = i * n + j;
            A[pos] = (i + 2 * j) % 7;
        }
    }
}

void main(int argc, char *argv[]){
    int *A;
    int n, batura, erren;
    // argv[0] == izena

    n = atoi(argv[1]);
    A = malloc(n*n * sizeof(int));
    batura = 0;

    if(argc >= 3){
        srand(time(NULL));
        sortu_matrizea(A, n);

        for(int i = 2; i < argc; i++){
            erren = atoi(argv[i]);
            for(int j = erren * n; j < (erren * n - 1 + n); j += 2){
                batura += A[j];
            }
        }

        printf("\nErrenkaden batura: %d", batura);
    }
    free(A);
}