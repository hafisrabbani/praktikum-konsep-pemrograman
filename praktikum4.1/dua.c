#include <stdio.h>
main()
{
    int i,size;
    int result = 0;
    printf("Masukan Bilangan : ");
    scanf("%d",&size);
    for ( i = size; i>=1; i--)
    {
        if(i==1){
            printf("%d", i);
        }else{
            printf("%d + ", i);
        }
        result += i;
    }

    printf("\nhasil = %d", result);
}