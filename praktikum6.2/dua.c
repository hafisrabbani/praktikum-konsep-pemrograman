#include <stdio.h>

void main()
{
    int data[4][3] = {
        {81,90,62},
        {50,83,87},
        {89,55,65},
        {77,70,92}
    },i,j,tmp;

    float hasil[4];
    printf("No. Mhs\t\tRata-rata\n--------------------------------");
    for(i=0;i<4;i++){
        tmp=0;
        for(j=0;j<3;j++){
            tmp+=data[i][j];
        }
        hasil[i]=tmp/3;

        printf("\n%d\t\t%.2f",i+1,hasil[i]);
    }
}