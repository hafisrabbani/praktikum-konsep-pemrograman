#include <stdio.h>

void main()
{
    int i,bil,tmp,res;

    printf("Masukan Jumlah Bilangan : ");
    scanf("%d",&bil);
    res=7;
    for(i=1;i<=bil;i++){
        printf("%d ",res);
        tmp=res;
        res=(tmp*2)-i;
    }
    
}