#include <stdio.h>
int main()
{
    int bil;
    printf("Input anga : ");
    scanf("%d",&bil);

    if(bil>0 && bil<=100){
        printf("%d ada dalam range 1-100",bil);
    }else{
        printf("%d di luar range 1-100",bil);
    }
}