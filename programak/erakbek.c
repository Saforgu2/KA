#include<stdio.h>

/*bektorea errekorritu erakusle bidez eta osagaiak batu*/

void main(int argc, char *argv[])
{
 int  i, batu;
 int  bek[]={55,44,33,22,11};
 int  *er;
 
 er = bek;	// er aldagaiak bektorearen helbidea izango du
 batu = 0;
 
 printf("\n*(er+i)\n");
 for(i =0; i <5; i++) 
 {
  batu += *(er+i);					// batu += bek[i];
  printf("bek[%d] = %d\n", i, *(er+i));	// printf("bek[%d] = %d\n", i, bek[i]);
 }
 printf("\nbektorearen batura %d da\n", batu);
 
  
  er = bek;	// er aldagaiak bektorearen helbidea izango du
  batu = 0;

  printf("\n*(er++)\n");
  for(i =0; i <5; i++) 
 {
  batu += *er;					// batu += bek[i];
  printf("bek[%d] = %d\n", i, *(er++));	// *(er++) BALIOKIDEA DA: 55, 44, 33, 22, 11
 }
 printf("\nbektorearen batura %d da\n", batu);
 
 

 er = bek;	// er aldagaiak bektorearen helbidea izango du
 batu = 0;

 printf("\n(*er)++\n");
 for(i =0; i <5; i++) 
 {
  batu += *er;				// batu += bek[i];
  printf("bek[%d] = %d\n", i, (*er)++);	// KONTUZ!!! (*er)++ ezberdina da: 55, 56, 57, 58, 59
 }
 printf("\nbektorearen batura %d da\n", batu);
 
 printf("\nbektorearen hasierako helbidea %p da\n", er);
 printf("\nbektorearen 2. osagaiaren helbidea %p da (+8)\n", &bek[2]);
 printf("\nbektorearen 2. osagaiaren helbidea %p da (+8)\n", er+2);
 
 }
