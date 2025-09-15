#include <stdio.h>

void main (int argc, char *argv[] )
{
   int  bek[5]= {1,3,5,7,9};
   int  *erak;          //erakusle bat,
   int  z1,z2,z3,z4,z5;

   erak = bek;
   printf ("\nBektorearen hasierako helbidea = erak = %p \n", erak);

   z1 = (*erak)++;
   printf ("\n ");
   printf (" z1 = (*erak)++;");
   printf ("\nz1 = %d \n", z1);
   printf ("bek = {\t%d \t%d \t%d \t%d \t%d }\n", bek[0], bek[1], bek[2], bek[3], bek[4]);
   printf ("\nerak = %p \n", erak);

   z2 = *erak++;
   printf ("\n ");
   printf (" z2 = *erak++;");
   printf ("\nz2 = %d \n", z2);
   printf ("bek = {\t%d \t%d \t%d \t%d \t%d }\n", bek[0], bek[1], bek[2], bek[3], bek[4]);
   printf ("\nerak = %p \n", erak);

   z3 = ++(*erak);
   printf ("\n ");
   printf (" z3 = ++(*erak);");
   printf ("\nz3 = %d \n", z3);
   printf ("bek = {\t%d \t%d \t%d \t%d \t%d }\n", bek[0], bek[1], bek[2], bek[3], bek[4]);
   printf ("\nerak = %p \n", erak);

   z4 = *++erak;
   printf ("\n ");
   printf (" z4 = *++erak;");
   printf ("\nz4 = %d \n", z4);
   printf ("bek = {\t%d \t%d \t%d \t%d \t%d }\n", bek[0], bek[1], bek[2], bek[3], bek[4]);
   printf ("\nerak = %p \n", erak);

   z5 = ++*erak;
   printf ("\n ");
   printf (" z5 = ++*erak;");
   printf ("\nz5 = %d \n", z5);
   printf ("bek = {\t%d \t%d \t%d \t%d \t%d }\n", bek[0], bek[1], bek[2], bek[3], bek[4]);
   printf ("\nerak = %p \n", erak);

   printf ("\n ");
}

