#include <stdio.h>
#include <conio.h>

void main(){
    char kar;
    while(kar != 'X'){
        kar = getch();
        if(kar != 'X'){
            printf("%c",kar);
        }else{
            printf("%c",kar);
            printf("\nAnda Menginputkan X");
        }
    }
}