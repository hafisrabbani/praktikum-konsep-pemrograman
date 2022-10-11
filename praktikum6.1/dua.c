#include <stdio.h>

void main()
{
    int i=0,size,data[100];

    printf("Masukan jumlah data : ");
    scanf("%d",&size);

    while(i<=size){
        if(i==0){
            data[i]=0;
        }else if(i==1){
            data[i]=1;
        }else{
            data[i]=data[i-1]+data[i-2];
        }
        printf("Bilangan ke-%d : %d\n",i+1,data[i]);
        i++;
    }
}