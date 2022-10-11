#include <stdio.h>

void main()
{
    int bil,i,j;

    printf("Masukkan bilangan : ");
    scanf("%d",&bil);
    for(i=1;i<=bil;i++)
    {
        for(j=1;j<=bil;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}