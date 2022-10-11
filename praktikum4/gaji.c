#include <stdio.h>

int main()
{
    int gajipokok,tunjanganSuami,tunjanganAnak,JumAnak,lamaKerja,Thr,transport,jumlahHari,tmpGaji,pajak,asuransi;
    
    printf("Masukan Gaji Pokok : ");
    scanf("%d",&gajipokok);
    printf("\nJumlah Anak : ");
    scanf("%d",&JumAnak);
    printf("\nMasa Kerja (tahun) : ");
    scanf("%d",&lamaKerja);
    printf("\nJumlah Hari Kerja : ");
    scanf("%d",&jumlahHari);

    tunjanganSuami = gajipokok*10/100;
    tunjanganAnak = (gajipokok*5/100)*JumAnak;
    Thr = 5000*lamaKerja;
    pajak = (gajipokok+tunjanganSuami+tunjanganAnak)*15/100;
    transport = jumlahHari*3000;
    asuransi = 20000;
    tmpGaji = gajipokok+tunjanganSuami+tunjanganAnak+Thr+transport-pajak-asuransi;
    printf("-----------------------------\n");
    printf("     SISTEM PENGGAJIAN       \n");
    printf("-----------------------------\n");
    printf("Tunjangan Suami/Istri : %d\n",tunjanganSuami);
    printf("Tunjangan Anak        : %d\n",tunjanganAnak);
    printf("THR                   : %d\n",Thr);
    printf("Pajak(-)              : %d\n",pajak);
    printf("Bantuan Transport     : %d\n",transport);
    printf("Polis Asuransi        : 20000\n");
    printf("-----------------------------\n");
    printf("Gaji Bersih : %d",tmpGaji);

}