#include <stdio.h>

void main()
{
    int bil,i,j;
    char exit = 'n';
    while(exit=='n'){
        printf("Masukkan bilangan : ");
        scanf("%d",&bil);
        for(i=1;i<=bil;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        printf("Exit? (y/n) : ");
        scanf(" %c",&exit);
    }
}