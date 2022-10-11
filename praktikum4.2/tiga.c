#include <stdio.h>
int main()
{
    int i = 0;
    int tmp = 0; 
    int num,min,max;
    float avg;
    char again = 'Y';
    while (again == 'Y' || again == 'y')
    {
        i++;
        printf("Masukan bilangan ke %d: ",i);
        scanf("%d", &num);
        tmp += num;
        if(i == 1){
            min = num;
            max = num;
        }else{
            if(num < min){
                min = num;
            }
            if(num > max){
                max = num;
            }
        }
        printf("Mau memasukan data lagi [Y/T]: ");
        scanf("%s", &again);
    }
    avg = tmp/i;
    printf("Total Bilangan %d",tmp);
    printf("\nNilai minimal %d",min);
    printf("\nNilai maksimal %d",max);
    printf("\nNilai rata-rata %.2f",avg);

}