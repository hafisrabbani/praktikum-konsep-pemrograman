#include <stdio.h>

void main()
{
    int bil,i;
    printf("Masukan Bilangan : ");
    scanf("%d",&bil);
    for(i=1;i<=bil;i++){
        if(i%2!=0){
            if(i%3==0){
                continue;
            }
            printf("%d ",i);
        }
    }
}