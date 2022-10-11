#include <stdio.h>
int main()
{
    int 
    result1,result2,result3,result4,result5,result6,a = 12,b = 2, c = 3, d = 4;
    result1 = a % b;
    result2 = a - c;
    result3 = a + b;
    result4 = a / d;
    result5 = a / d * d + a % d;
    result6 = a % d /d * a - c;
    printf("Oprasi 1 bernilai : = %d \n",result1);
    printf("Oprasi 2 bernilai : = %d \n",result2);
    printf("Oprasi 3 bernilai : = %d \n",result3);
    printf("Oprasi 4 bernilai : = %d \n",result4);
    printf("Oprasi 5 bernilai : = %d \n",result5);
    printf("Oprasi 6 bernilai : = %d \n",result6);
}