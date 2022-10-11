#include <stdio.h>

void main()
{
    int bil,i,j,k;
    k=1;
    printf("Masukan bilangan : ");
    scanf("%d",&bil);
    for(i=1;i<=bil;i++)
    {
        for(j=k;j<=bil;j++)
        {
            printf("%d " ,j);
        }
        k++;
        printf("\n");
    }

}
