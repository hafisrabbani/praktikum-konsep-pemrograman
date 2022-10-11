#include <stdio.h>

void main()
{
    int i,bil,tmp;
    int res = 0;
    printf("Masukan Bilangan : ");
    scanf("%d",&bil);
    for(i=0;i<=bil;i++){
        tmp = bil%10;
        res += tmp;
        bil = bil/10;
    }
    printf("\nHasil penjumlahan digit : %d",res);
}