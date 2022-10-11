#include <stdio.h>

void main()
{
    char kar;
    int space = 0;
    int i = 0;
    int kecil = 0;
    int besar = 0;
    int angka = 0;
    printf("Masukan Kalimat: ");
    while(kar != '\n'){
        kar = getchar();
        if(kar ==' '){
            space++;
        }else if(kar >= 'a' && kar <= 'z'){
            kecil++;
        }else if(kar >= 'A' && kar <= 'Z'){
            besar++;
        }else if(kar >= '0' && kar <= '9'){
            angka++;
        }
        i++;
    }
    printf("\nJumlah Karakter: %d",i);
    printf("Jumlah Spasi: %d",space);
    printf("\nJumlah Huruf Kecil: %d",kecil);
    printf("\nJumlah Huruf Besar: %d",besar);
    printf("\nJumlah Angka: %d",angka);
}