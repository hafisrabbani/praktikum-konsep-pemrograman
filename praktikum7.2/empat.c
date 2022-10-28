#include <stdio.h>
#include <string.h>


void main()
{
    char string1[100];
    char string2[100];
    printf("Masukkan string 1: ");
    scanf("%s", string1);
    printf("Masukkan string 2: ");
    scanf("%s", string2);
    if(strcmp(string1, string2) == 0){
        printf("String sama\n");
    }else{
        printf("String beda\n");
    }
}