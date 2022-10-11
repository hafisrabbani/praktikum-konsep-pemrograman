#include <stdio.h>

void dinaikkan(int *a, int *b);

void main()
{
    int a,b;

    printf("Masukan Bilangan 1 : ");
    scanf("%d",&a);
    printf("Masukan Bilangan 2 : ");
    scanf("%d",&b);

    // printf("Bilangan terbesar adalah : %d");
    dinaikkan(&a,&b);

}

void dinaikkan(int *a, int *b){
    printf("Hasil : %d",*a+2);
    printf("\nHasil : %d",*b+2);
}