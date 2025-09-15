#include <stdio.h>

void main (int argc, char *argv[] )
{
   int  i;
   int  *er;		//erakusle bat, oso bat erreferentziatzeko
   int  *z[10];	// erakusleen array bat (10 erakusle)
   int  x = 10, y = 0;
   int  zb;		

   printf ("\n x = %d eta y = %d\n", x, y);

   // er, x eta y
   er = &x;		// &x --> x aldagaiaren helbidea (1000)
   y = *er;		// y -->  er erakusleak erakusten duena = 10

  
   printf ("\n er = &x;\n");
   printf ("\n \ter erakusleari x-ren helbidea esleitzen diogu: \n");
   printf ("\n \ter = %p eta &x = %p \n", er, &x);
   printf ("\n \teta er erakusleak erakusten duena (*er) x = %d da\n", *er);

   printf ("\n y = *er;\n");
   printf ("\n \ty-ri er erakusleak erakusten duena (%d) esleitzen diogu\n", *er);
   printf ("\n \tberaz, x = %d eta y = %d\n", x, y);
   

   // er erakuslearekin eragiketak
   *er = 100;		// er = 1000 (adibidean) --> @1000 = 100 --> x = 100! 
   y = (*er) + 1;	// y = 101 
   printf ("\n *er = 100;\n");
   printf ("\ter = &x = %p --> MEM(%p) = 100 --> x = %d! \n", er, er, x);
   printf ("\n  y = (*er) + 1;\n");
   printf ("\tberaz, y = %d + 1 --> y = %d\n", *er, *er+1);
 
   // zb zenbakia eta z bektorea
   zb = 4;	// zb aldagaiak 4 balioa hartzen du 
   z[2] = &zb;	// z[2] = 2000 (adibidean) eta *z[2] = 4
   printf ("\n zb = 4;\n");
   printf ("\tzb = %d \n", zb);
   
   printf ("\n");
   for (i=0; i<10; i++) printf ("\n z[%d] = %p", i, z[i]);
   printf ("\n");
   printf ("\n z[2] = &zb;\n");
   printf ("\tz[2] = %d \n", *z[2]);
   printf ("\n");
}

