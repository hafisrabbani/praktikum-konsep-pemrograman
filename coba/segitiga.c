#include <stdio.h>

void main(){

    int i,j,bil;

    printf("Masukan Jumlah Bilangan : ");
    scanf("%d",&bil);

    for(i=1;i<=bil;i++){
        
        for(j=1;j<=bil-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}