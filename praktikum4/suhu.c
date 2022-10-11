#include <stdio.h>

int main()
{
    float celcius,fahrenheit;
    printf("Masukan nilai celcius : ");
    scanf("%f",&celcius);
    fahrenheit = celcius*1.8+32;
    printf("Hasilnya %2.f",fahrenheit);
}