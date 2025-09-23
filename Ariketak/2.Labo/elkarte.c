#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <linux/time.h>

struct bazkide{
    char izena[40];
    int adina;
    int bazkide_zenbakia;
};

void main(){
    int auke, kop, muga1, muga2;
    double texe, btadina;
    struct timespec t1, t2;
    struct bazkide bazkidea;
    FILE *f1, *f2;

    f1 = fopen("bazkideak.dat", "r");

    printf("\nAukeratu egin nahi duzuen eragiketa (1, 2 edo 3): \n");
    scanf("%d", &auke);

    kop = 0;
    btadina = 0;
    
    clock_gettime(CLOCK_REALTIME, &t1);

    if(auke == 1){
        muga1 = 0;
        muga2 = 33;
        f2 = fopen("bgazteenak.dat", "w");
    }
    else if(auke == 2){\
        muga1 = 32;
        muga2 = 66;
        f2 = fopen("bzaharrenak.dat", "w");
    }
    else{
        muga1 = 65;
        muga2 = 200;
        f2 = fopen("bjubilatuak.dat", "w");
    }

    while(fscanf(f1, "%s", bazkidea.izena) != EOF){
        fscanf(f1, "%d", &bazkidea.adina);
        fscanf(f1, "%d", &bazkidea.bazkide_zenbakia);
        if(bazkidea.adina > muga1 && bazkidea.adina < muga2){
            fprintf(f2, "%s %d %d\n", bazkidea.izena, bazkidea.adina, bazkidea.bazkide_zenbakia);
            kop++;
            btadina = btadina + bazkidea.adina;
        }
    }

    btadina = btadina / kop;

    clock_gettime(CLOCK_REALTIME, &t2);
    texe = (t2.tv_sec - t1.tv_sec) + (t2.tv_nsec - t1.tv_nsec) / 1e9;

    printf("\nBatazbesteko adina: %f\nKopurua: %d\nPasatutako denbora: %f\n", btadina, kop, texe);

    fclose(f1);
    fclose(f2);
}