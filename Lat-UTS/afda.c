#include <stdio.h>

int main()
{
    int a,b,c,d,hasil,number = 1;
    printf("Masukkan bilangan yang akan dioutput: ");
    scanf("%d", &hasil);
    for (a=1 ; a<=hasil ; a++)
    {
        for (b=1 ; b<=a ; b++)
        {
            printf("%d ",number);
            number++;
        } 
        printf ("\n");

    }
    for (c=1; c<=hasil ; c--);
    {
        for (d=1 ; d<=c ; d++);
    {
        printf("%d ",number);
    }
      printf("\n");
    }
}