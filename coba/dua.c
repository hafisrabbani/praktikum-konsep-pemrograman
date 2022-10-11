#include <stdio.h>

void main()
{
    int bil,i,j,k;

    k=1;
    printf("Masukan bilangan : ");
    scanf("%d",&bil);


    for(i=1;i<=bil;i++)
    {
        for(j=1;j<=i;j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    for(i=bil-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k++;
        }

        printf("\n");
    }
}