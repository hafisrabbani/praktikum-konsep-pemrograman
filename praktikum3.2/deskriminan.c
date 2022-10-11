#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d,x1,x2;

    printf("Masukan nilai A : ");
    scanf("%f",&a);
    printf("\nMasukan nilai B : ");
    scanf("%f",&b);
    printf("\nMasukan nilai C : ");
    scanf("%f",&c); 

    d = pow(b,2)-(4*a*c);

    if(d==0){
        x1 = x2 = -b / 2*a;
    }else if(d>0){
        x1 = (-b + sqrt(d)) / 2*a;
        x2 = (-b - sqrt(d)) / 2*a;
    }else{
        x1 = -b / 2*a + (sqrt(-d) / 2*a);
        x2 = -b / 2*a - (sqrt(-d) / 2*a);
    }

    printf("\n=== Hasilnya Adalah === \n");
    printf("Nilai Diskriminan %.2f",d);
    printf("\nNilai X1 : %.2f",x1);
    printf("\nNilai X2 : %.2f",x2);
}