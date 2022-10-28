#include <stdio.h>
void main(){
    const int MAX = 2;
    int matrixA[MAX][MAX],matrixB[MAX][MAX],matrixC[MAX][MAX],i,j;
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            printf("Masukan Matrix A [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrixA[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            printf("Masukan Matrix B [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrixB[i][j]);
        }
    }
    printf("\nHasilnya adalah \n");
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
            printf("%d ",matrixC[i][j]);
        }
        printf("\n");
    }
}