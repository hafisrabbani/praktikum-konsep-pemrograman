#include <stdio.h>

int main()
{
    int bil,i,j;
    printf("Masukan bilangan : ");
    scanf("%d",&bil);

    for(i=bil;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }

        printf("\n");
    }
    for(i=2;i<=bil;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d " ,i);
        }
        printf("\n");
    }
    return 0;
}
