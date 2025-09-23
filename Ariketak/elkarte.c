#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <linux/time.h>

#define MAX 100

struct bazkide{
    char izena[40];
    int adina;
    int bazkide_zenbakia;
};

void main(){
    int auke, kop;
    double texe, btadina = 0;
    struct timespec t1, t2;
    FILE *f1, *f2;
    char bazkideak[20], hitza[MAX];

    f1 = fopen(bazkideak, "r");

    printf("\nAukeratu egin nahi duzuen eragiketa (1, 2 edo 3): ");
    scanf("%d", auke);
    
    clock_gettime(CLOCK_REALTIME, &t1);

    if(auke == 1){
        char bgazteenak[20];

        while(fscanf(f1, "%s", hitza) != EOF){
            fprintf();
        }
    }
    else if(auke == 2){

    }
    else{

    }

    clock_gettime(CLOCK_REALTIME, &t2);
    texe = (t2.tv_sec - t1.tv_sec) + (t2.tv_nsec - t1.tv_nsec) / 1e9;
}