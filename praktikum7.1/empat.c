#include <stdio.h>

void copystring(char *s, char *t)
{
    int i = 0;
    while (s[i] != '\0'){
        t[i] = s[i];
        i++;
    }
    t[i] = '\0';
}

main()
{
    char *s[100];
    char *t[100];
    printf("masukan string : ");
    fgets(s,100,stdin);
    copystring(s,t);
    printf("hasil : %s",t);

}