#include <stdio.h>
#include <math.h>
main()
{
    int pilihan;
    float input,extinput,result;
    printf("Menu\n");
    printf("1. Menghitung volume kubus\n");
    printf("2. Menghitung luas lingkaran\n");
    printf("3. Menghitung volume silinder\n");
    printf("4. Pilih Menu : ");
    scanf("%d",&pilihan);

    switch (pilihan)
    {
    case 1:
        printf("Panjang Sisi Kubus : ");
        scanf("%f", &input);
        result = pow(input,3);
        break;
    case 2:
        printf("Jari-jari Lingkaran : ");
        scanf("%f", &input);
        result = 3.14 * pow(input,2);
        break;
    case 3:
        printf("Jari-jari Lingkaran : ");
        scanf("%f", &input);
        printf("\nTinggi Silinder : ");
        scanf("%f", &extinput);
        result = 3.14 * pow(input,2) * extinput;
        break;
    default:
        printf("Tampilkan pesan kesalahan.");
        break;
    }

    printf("Hasilnya adalah %g", result);
}