#include <stdio.h>

int main()
{
    float jumlah;
    printf("Masukan total belanja : ");
    scanf("%f",&jumlah);
    if(jumlah >= 100000){
        printf("Total Pembelian Anda Adalah : %2.f",jumlah-(jumlah*5/100));
    }else{
        printf("Total Pembelian Anda Adalah : %2.f",jumlah);
    }
}