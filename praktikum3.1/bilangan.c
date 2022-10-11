#include <stdio.h>

int main()
{
    float bil1,bil2,hasil;
    printf("Masukan bil 1 :");
    scanf("%f",&bil1);
    printf("\nMasukan bil 2 : ");
    scanf("%f",&bil2);

    if(bil2<0){
        printf("division by zero");
    }else{
        hasil = bil1/bil2;
        printf("Hasilnya adalah : %.3f",bil1/bil2);
    }
}