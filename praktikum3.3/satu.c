#include <stdio.h>
#include <stdlib.h>
int main()
{
    char letter;
    int sum,valid_flag;
    printf("Enter a letter: ");
    letter = getchar();
    
    switch (letter)
    {
    case 'X':
        sum = 0;
        break;
    case 'Z':
        valid_flag = 1;
        break;
    case 'A':
        sum = 1 ;
        break;
    
    default:
        printf("Unknown letter -->%c\n", letter );
        exit(0);
        break;
    }
    printf("Sum = %d", sum);
}