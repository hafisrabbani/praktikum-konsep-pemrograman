#include <stdio.h>

int data[100];
int size;

void input(){
    int i;
    printf("Masukkan banyaknya data: ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Masukkan data ke-%d: ",i+1);
        scanf("%d",&data[i]);
    }
}

int findMax(){
    int i,max;
    max=data[0];
    for(i=1;i<size;i++){
        if(data[i]>max){
            max=data[i];
        }
    }
    return max;
}

void main()
{
    input();
    printf("Nilai maksimum adalah: %d",findMax());
}