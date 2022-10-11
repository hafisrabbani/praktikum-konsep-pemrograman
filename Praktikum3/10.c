#include <stdio.h>

int main()
{
    int a,b,c,x,y,z;

    printf("Masukan nilai a = ");
    scanf("%d",&a);
    printf("Masukan nilai b = ");
    scanf("%d",&b);
    printf("Masukan nilai c = ");
    scanf("%d",&c);
    printf("Masukan nilai x = ");
    scanf("%d",&x);
    printf("Masukan nilai z = ");
    scanf("%d",&z);
    y = (b*x)*2+(0.5*x)-c;
    printf("y = %d\n",y);
    y = (0.3*x*z)/(2*a);
    printf("y = %d\n",y);
}