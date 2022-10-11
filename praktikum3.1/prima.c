#include <stdio.h>
int main()
{
    int bil;
    printf("Masukan Bilangan : ");
    scanf("%d",&bil);

    if((bil == 2 || bil==3 || bil==5 || bil==7)||(bil > 1 && bil%2 != 0 && bil%3 != 0 && bil%5 != 0 && bil%7 != 0)){
        printf("%d adalah bilangan Prima!",bil);
    }else{
        printf("%d Bukan Bilangan Prima!",bil);
    }
}