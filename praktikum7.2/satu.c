#include <stdio.h>
#include <string.h>

int main(){
    int pjgstring;
    char string[100];
    char copy[100];
    printf("Masukkan string: ");
    scanf("%s", string);
    pjgstring = strlen(string);
    printf("Panjang string: %d\n", pjgstring);
    strcpy(copy, string);
    printf("Copy string: %s\n", copy);
    printf("Balik string: %s\n", strrev(string));
}