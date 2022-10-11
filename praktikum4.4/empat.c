#include <stdio.h>

void main()
{
    int bil,i,next;
    next=0;
    printf("Masukkan bilangan : ");
    scanf("%d",&bil);

    while (next<bil)
    {
        for(i=1;i<=bil;i++){
            printf("%d ",next);
            next+=i;
        }
    }
}