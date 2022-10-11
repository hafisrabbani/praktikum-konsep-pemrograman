#include <stdio.h>

int main()
{
    int uang,tmp,ratusribu,limaplh,duaplh,sepuluh,limarb,duarb,seribu;
     printf("Jumlah Uang Rupiah : ");
     scanf("%d",&uang);
     ratusribu = uang/100000;
     tmp = uang-(ratusribu*100000);
     limaplh = tmp/50000;
     tmp = tmp-(limaplh*50000);
     duaplh = tmp/20000;
     tmp = tmp-(duaplh*20000);
     sepuluh = tmp/10000;
     tmp = tmp-(sepuluh*10000);
     limarb = tmp/5000;
     tmp = tmp-(limarb*5000);
     duarb = tmp/2000;
     tmp = tmp-(duarb*2000);
     seribu = tmp/1000;
     tmp = tmp-(seribu*1000);
     printf("%d Lembar Rp.100000\n",ratusribu);
     printf("%d Lembar Rp.50000\n",limaplh);
     printf("%d Lembar Rp.20000\n",duaplh);
     printf("%d Lembar Rp.10000\n",sepuluh);
     printf("%d Lembar Rp.5000\n",limarb);
     printf("%d Lembar Rp.2000\n",duarb);
     printf("%d Lembar Rp.1000\n",seribu);
}