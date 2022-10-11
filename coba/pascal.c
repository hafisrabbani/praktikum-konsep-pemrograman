#include <stdio.h>

int faktorial(long int bil)
{
    int i,j;
    j=1;
    for(i=1;i<=bil;i++){
        j=j*i;
    }

    return j;
}

void main()
{
    int i,bil,j;

    printf("Masukan Jumlah Bilangan : ");
    scanf("%d",&bil);
    for(i=0;i<bil;i++)
    {
        for(j=0;j<bil-i-1;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
                printf("%d ",faktorial(i)/(faktorial(j)*faktorial(i-j)));
        }
        printf("\n");
    }
}