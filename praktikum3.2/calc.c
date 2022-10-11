#include <stdio.h>

int main()
{
    float bil1,bil2,result;
    int oprasi;
    printf("\t === Kalkulator Sederhana ===");
    printf("\nMasukan Bilangan 1 :");
    scanf("%f",&bil1);
    printf("\nMasukan Bilangan 2 :");
    scanf("%f",&bil2);
    printf("\n Pilih Oprasi Perhitungan\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\nPilih Operasi => ");
    scanf("%d",&oprasi);
    if(oprasi == 1){
        result = bil1+bil2;
    }else if (oprasi == 2){
        result = bil1-bil2;
    }else if (oprasi == 3){
        result = bil1*bil2;
    }else if (oprasi == 4){
        result = bil1/bil2;
    }else{
        printf("Oprasi Tidak Ditemukan");
    }

    printf("Hasilnya Adalah : %.f",result);   
    
}

