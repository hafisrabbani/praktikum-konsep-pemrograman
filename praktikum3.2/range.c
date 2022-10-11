#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bil;
    char result;
    printf("\tKonversi Angka Ke Huruf");

    printf("\nMasukan Nilai : ");
    scanf("%d",&bil);

    if(bil<=40){
        result = 'E';
    }else if(bil < 40 && bil<= 55){
        result = 'D';
    }
    else if(bil < 55 && bil <= 60){
        result = 'C';
    }
    else if(bil < 60 && bil <= 80){
        result = 'B';
    }
    else if(bil < 80 && bil <= 100){
        result = 'A';
    }else{
        printf("Out Of Scope");
        exit(0);
    }

    putchar(result);
}