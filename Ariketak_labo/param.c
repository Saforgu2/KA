/*  KA, Konputagailuen Arkitektura - Informatika Ingeniaritza, 2. maila
    C laborategia

    param.c
    matrize baten errenkaden posizio bikoitietako osagien batura
    parametroak: matrizearen tamaina, eta batu nahi diren errenkadak
    adibidez:   param 10 2 5 8
***********************************************************************/

#include <stdio.h>
#include <stdlib.h>


void main (int argc, char *argv[])
{
  ...
	

  if (argc < 3) {
    printf ("\nParametroak: matrize-tamaina eta batu behar diren errenkadak\n");
    exit (-1);
  }

  ...

  // esleitu memoria mat matrizeari eta batura aldagaiari
  ...


  // hasieratu mat matrizea
  ...


  // kalkulua:   argc-2 = batu behar diren errenkaden kopurua
  // eta inprimatu baturak
  ...



  free (mat);
  free (batura);
}

