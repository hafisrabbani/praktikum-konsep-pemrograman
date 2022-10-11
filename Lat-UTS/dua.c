#include <stdio.h>

int main()
{
    int bil,k,i,j=1;
    printf("Masukan bilangan : ");
    scanf("%d",&bil);

    for(i=1;i<=bil;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf("%d " ,j);
            j+=1;
        }
        printf("\n");
    }
    for(i=bil;i>=1;i--)
    {
        for(k=1;k<i;k++)
        {
            printf("%d ",j);
            j+=1;
        }
        printf("\n");
    }
    return 0;
}
