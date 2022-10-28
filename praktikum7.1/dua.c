#include <stdio.h>

int panjangstring(char *s)
{
    int i = 0;
    while (s[i] != '\0'){
        i++;
    }
    return i;
}

void main()
{

    char *string[100];
    printf("Masukan string : ");
    scanf("%s",string);
    printf("Panjang string : %d",panjangstring(string));
}