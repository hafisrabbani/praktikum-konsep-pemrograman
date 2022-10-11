#include <stdio.h>

void main()
{
    int i,bil,ribu,ratus,puluh,satu;

    printf("Masukan Jumlah Bilangan : ");
    scanf("%d",&bil);
    if(bil<=9999 && bil>999)
    {
        ribu=bil/1000;
        ratus=(bil%1000)/100;
        puluh=((bil%1000)%100)/10;
        satu=(((bil%1000)%100)%10)/1;
        printf("%d000 %d00 %d0 %d",ribu,ratus,puluh,satu);
    }else if(bil<=999 && bil>99)
    {
            ratus=bil/100;
        puluh=(bil%100)/10;
        satu=((bil%100)%10)/1;
        printf("%d00 %d0 %d",ratus,puluh,satu);
    }else if(bil<=99 && bil>9)
    {
        puluh=bil/10;
        satu=(bil%10)/1;
        printf("%d0 %d",puluh,satu);
    }else if(bil<=9 && bil>0)
    {
        satu=bil/1;
        printf("%d",satu);
    }else{
        printf("Bilangan tidak valid");
    }
}