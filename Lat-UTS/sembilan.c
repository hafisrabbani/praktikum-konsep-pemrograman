#include <stdio.h>

void main()
{
    int i,j,bil;

    printf("Masukan bilangan : ");
    scanf("%d",&bil);
    for(i=1;i<=bil;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}