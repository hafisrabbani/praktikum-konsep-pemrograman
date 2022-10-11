#include <stdio.h>
#include <stdlib.h>
void main(){
    char kar;
    printf("Masukan Karakter : ");
    while(kar != '\n'){
        kar = getchar();
        if(kar=='\n'){
            break;
        }
    }
    printf("Selesai");
}