#include <stdio.h>
int main()
{   
    float a;
    printf("number : ");
    scanf("%f",&a);
    if(a >= 0 && a <=25){
        printf("Interval [0,25]");
    }else if(a >= 25 && a <= 50){
        printf("Interval [25,50]");
    }else if(a >= 50 && a <= 75){
        printf("Interval [50,75]"); 
    }else if(a >= 75 && a <= 100){
        printf("Interval [75,100]");
    }else{
        printf("Diluar batas");
    }
}