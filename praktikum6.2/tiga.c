#include <stdio.h>
#include <math.h>
const float PI = 3.14;
int sudut[13];

float findRadiant(float sudut){
    return sudut/180*PI;
}

void hitungsudut(){
    int i,j=0;
    for(i=0;i<13;i++){
        sudut[i]=j*=30;
    }
}

void main()
{
    int i;
    for(i=0;i<13;i++){
        sudut[i]=i*30;
    }
    printf("Sudut\t\tSin\t\tCos\t\tTan\n");
    printf("------------------------------------------------------------\n");
    for(i=0;i<13;i++){
        printf("%d\t\t%.2f\t\t%.2f\t\t%.2f\n",sudut[i],sin(findRadiant(sudut[i])),cos(findRadiant(sudut[i])),tan(findRadiant(sudut[i])));
    }
}