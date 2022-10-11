#include <stdio.h>

void main()
{
    int i,j,bil,inc1,inc2;
    inc1 = 1;
    inc2 = 1;
    printf("Masukkan bilangan : ");
    scanf("%d",&bil);
    for(i=1;i<bil;i++)
    {
        for(j=1;j<=i;j++){
            inc2+=inc1;
        }
        inc1=inc2;
    }

    printf("%d\n",inc2);
}