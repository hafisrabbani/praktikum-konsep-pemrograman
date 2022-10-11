#include <stdio.h>

int main()
{
    int bilangan,check;
    printf("Masukan bilangan : ");
    scanf("%d",&bilangan);
    if(bilangan%2 == 0){
        printf("%d adalah bilangan genap",bilangan);
    }else{
        printf("%d adalah bilangan ganjil",bilangan);
    }
}