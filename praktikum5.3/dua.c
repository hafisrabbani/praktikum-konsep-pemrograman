#include <stdio.h>

int permutasi(int n, int r);
int faktorial(int bil);
int combinasi(int n, int r);

void main()
{
    int n,r;
    printf("Masukan nilai n : ");
    scanf("%d",&n);
    printf("Masukan nilai r : ");
    scanf("%d",&r);
    printf("Hasil permutasi adalah : %d",permutasi(n,r));
    printf("\nHasil kombinasi adalah : %d",combinasi(n,r));
}

int combinasi(int n, int r){
    int result,penyebut;
    penyebut = n-r;
    result = faktorial(n)/faktorial(r)*penyebut;
    return result;
}

int faktorial(int bil)
{
    int i,result;
    result = 1;
    for(i=1;i<=bil;i++){
        result = result * i;
    }
    return result;
}


int permutasi(int n,int r){
    int result,penyebut;
    penyebut = n-r;
    result = faktorial(n)/penyebut;
    return result;
}