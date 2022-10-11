#include <stdio.h>

void main()
{
    // bil fibonacci
    char exit = 'n';
    while (exit == 'n')
    {
        int bil,i,next;
        next=0;
        printf("Masukkan bilangan : ");
        scanf("%d",&bil);

        for(i=1;i<=bil;i++){
            printf("%d ",next);
            next+=i;
        }

        printf("\nExit? (y/n) : ");
        scanf(" %c",&exit);
    }
}