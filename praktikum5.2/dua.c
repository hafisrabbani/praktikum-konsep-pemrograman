#include <stdio.h>

int faktorial(long int bil)
{
    int i,j;
    j=1;
    for(i=1;i<=bil;i++){
        j=j*i;
    }

    return j;
}

void main()
{
    int bil,i;
    printf("Masukkan bilangan : ");
    scanf("%d",&bil);
    printf("%d! = ",bil);
    for(i=bil;i>=1;i--){
        printf("%d x ",i);
        if(i==1){
            printf("%d",i);
        }
    }
    printf(" = %d",faktorial(bil));
}