#include <stdio.h>

void main()
{
    int start,selesih,end;
    printf("Masukan bil awal : ");
    scanf("%d",&start);
    printf("Masukan selisih : ");
    scanf("%d",&selesih);
    printf("Masukan bil akhir : ");
    scanf("%d",&end);

    for(int i=start;i<=end;i+=selesih)
    {
        printf("%d ",i);
    }
}