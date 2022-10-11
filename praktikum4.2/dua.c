#include <stdio.h>
int main()
{
    int i = 0;
    int tmp = 0; 
    int num;
    char again = 'Y';
    while (again == 'Y' || again == 'y')
    {
        i++;
        printf("Masukan bilangan ke %d: ",i);
        scanf("%d", &num);
        tmp += num;
        printf("Mau memasukan data lagi [Y/T]: ");
        scanf("%s", &again);
    }

    printf("Total Bilangan %d",tmp);

}