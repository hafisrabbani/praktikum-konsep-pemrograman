#include <stdio.h>

int ganjil(int bil){
    if(bil%2==0){
        return 0;
    }else{
        return 1;
    }
}

void main()
{
    int bil;
    printf("Masukkan bilangan : ");
    scanf("%d",&bil);
    if(ganjil(bil)==1){
        printf("Bilangan ganjil");
    }else{
        printf("Bilangan genap");
    }
}