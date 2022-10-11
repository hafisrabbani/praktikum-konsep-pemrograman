#include <stdio.h>
main()
{
    int i,size;
    printf("Masukan Bilangan : ");
    scanf("%d",&size);
    for ( i = 1; i<=size*2; i++)
    {
        if(i%2!=0){
            printf("%d ", i);
        }
    }
}