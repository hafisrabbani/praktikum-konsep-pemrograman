#include <stdio.h>

void main()
{
    char kar;
    int space = 0;
    int i = 0;
    printf("Masukan Kalimat: ");
    while(kar != '\n'){
        kar = getchar();
        if(kar ==' '){
            space++;
        }
        i++;
    }
    printf("Jumlah Spasi: %d",space);
    printf("\nJumlah Karakter: %d",i);
}