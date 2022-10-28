#include <stdio.h>

int panjangstring(char *s)
{
    int i = 0;
    while (s[i] != '\0'){
        i++;
    }
    return i;
}

char *reverseString(char *s)
{
    int i = 0;
    int j = panjangstring(s) - 1;
    while (i < j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;
}

void main()
{
    char *s[100];

    printf("Masukan string yang akan dibalik : ");
    fgets(s,100,stdin);
    printf("hasil : %s",reverseString(s));
}