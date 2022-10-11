#include <stdio.h>

void main()
{
    int bil,i;
    printf("Masukan Bilangan : ");
    scanf("%d",&bil);
    for(i=1;i<=bil;i++){
        if(i>100){
            break;
        }
        if(i%2!=0){
            if(i%7==0 || i%11==0){
                continue;
            }
            printf("%d ",i);
        }
    }
}