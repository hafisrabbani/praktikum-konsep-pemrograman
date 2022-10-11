#include<stdio.h>
main()
{
    int j,i,bil,x,y,a=i;
    printf("Angka awal :");
    scanf("%d", &y);
    printf("Angka akhir :");
    scanf("%d", &x);
    printf("\nMaka Deret Bilangan Primanya adalah :\n");

    for(i=1; i<=x; i++)
    {
        if(i==2){
            printf("%d", i);
        }else{
            for(j=2;j<i;j++)
            {
                if(i% j==0)
                {
                    a=1;
                    break;
                }else{
                    a=0;
                }

            }
            if(a==0)
            {
                printf("%d", i);
            }
            else {
                printf("");
            }
        }
    }
    printf("\n\n\n");
}
