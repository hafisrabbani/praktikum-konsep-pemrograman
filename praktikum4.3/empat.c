#include <stdio.h>
void main()
{
    int n,i,min,max,avg;
    printf("Masukan banyaknya bilangan : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int bil;
        printf("Masukan bilangan ke-%d : ",i);
        scanf("%d",&bil);
        if(i==1){
            min = bil;
            max = bil;
            avg = bil;
        }else{
            if(bil<min){
                min = bil;
            }
            if(bil>max){
                max = bil;
            }
            avg = avg + bil;
        }
    }
    printf("\nNilai minimum : %d",min);
    printf("\nNilai maksimum : %d",max);
    printf("\nNilai rata-rata : %d",avg/n);
}