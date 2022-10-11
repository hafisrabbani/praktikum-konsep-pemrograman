#include <stdio.h>

void main()
{
    int size,i;

    printf("Masukan jumlah data : ");
    scanf("%d",&size);
    int arr[size];

    for(i=0;i<size;i++)
    {
        printf("Masukan bilangan ke-%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("Bilangan ke-%d : %d\n",i+1,arr[i]);
    }
}