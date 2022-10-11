#include <stdio.h>

float radian(float derajat){
    float rad;
    rad=derajat*3.14/180;
    return rad;
}

void main()
{
    float derajat;
    printf("Masukkan derajat : ");
    scanf("%f",&derajat);
    printf("Radian : %.3f",radian(derajat));
}