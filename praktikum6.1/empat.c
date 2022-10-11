#include <stdio.h>

void main()
{
    int max,i,size;

    printf("Masukan Banyak data : ");
    scanf("%d",&size);
    int bil[size];
    for(i=0;i<size;i++){
        printf("masukan data ke-%d : ",i+1);
        scanf("%d",&bil[i]);
        if(i==0){
            max=bil[i];
        }else{
            if(bil[i]>max){
                max=bil[i];
            }
        }
    }

    printf("Bilangan terbesar adalah %d",max);
}