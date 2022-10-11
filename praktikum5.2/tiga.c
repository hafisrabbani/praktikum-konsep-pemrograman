#include <stdio.h>

int prima(int bil){
    int i;
    for(i=2;i<bil;i++){
        if(bil%i==0){
            return 0;
        }
    }
    return 1;
}

void main()
{
    int bil;
    printf("Masukkan bilangan : ");
    scanf("%d",&bil);
    if(prima(bil)==1){
        printf("Bilangan prima");
    }else{
        printf("Bilangan bukan prima");
    }
}