#include <stdio.h>

int main()
{
    int Aa,Bb,Cc,Dd;

     printf("Masukan Konstanta \n");
     printf("A :");
     scanf("%d",&Aa);
     printf("\nB : ");
     scanf("%d",&Bb);
     printf("\nC : ");
     scanf("%d",&Cc);

     Dd = (Bb*Bb)-(4*Aa*Cc);
     printf("Hasil : %d",Dd);
}