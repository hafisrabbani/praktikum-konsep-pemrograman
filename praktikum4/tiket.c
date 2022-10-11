#include <stdio.h>

int main()
{
    int jumlahTiket,jumtik2,sisaBagi,total;

    printf("Masukan Jumlah Tiket : \n");
    scanf("%d",&jumlahTiket);
    jumtik2 = jumlahTiket/3;
    sisaBagi = jumlahTiket%3;
    total = (jumtik2*100000)+(sisaBagi*50000);
    printf("Total Harga : %d",total);
}