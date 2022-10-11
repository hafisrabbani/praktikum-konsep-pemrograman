#include <stdio.h>

int terbesar(int a,int b);

void main()
{
    int a,b;

    printf("Masukan Bilangan 1 : ");
    scanf("%d",&a);
    printf("Masukan Bilangan 2 : ");
    scanf("%d",&b);

    printf("Bilangan terbesar adalah : %d",terbesar(a,b));

}

int terbesar(int a, int b){
    int result;
    if(a>b){
        result = a;
    }else{
        result = b;
    }

    return result;
}