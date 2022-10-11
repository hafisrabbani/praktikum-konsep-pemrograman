#include <stdio.h>
main()
{
    int valid_operator = 1;
    //valid_operator diinisialisasi dengan logika 1
    char operator;
    float number1, number2, result;
    printf("Masukkan 2 buah bilangan & sebuah operator\n");
    printf("dengan format : number1 operator number2\n");
    scanf("%f %c %f", &number1, &operator, &number2);
    switch (operator)
    {
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        default:
            valid_operator = 0;
    }

    switch (valid_operator)
    {
        case 1:
            printf("%g %c %g is %g\n", number1, operator,number2, result );
            break;
    default:
            printf("Invalid operator!\n");
        break;
    }
}