#include <stdio.h>
void main()
{
    int bil,i,j,status;
    char exit = 'n';
    while (exit == 'n')
    {
        printf("Masukkan bilangan : ");
        scanf("%d",&bil);
        for(i=1; i<=bil; i++){
            if(i==2){
                printf("%d ", i);
            }else{
                for(j=2;j<i;j++){
                    if(i%j==0)
                    {
                        status=0;
                        break;
                    }else{
                        status=1;
                    }
                }
                if(status==1){
                    printf("%d ", i);
                }
            }
        }
        printf("\nExit? (y/n) : ");
        scanf(" %c",&exit);
    }
    
}