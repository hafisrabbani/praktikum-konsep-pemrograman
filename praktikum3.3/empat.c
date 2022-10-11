#include <stdio.h>
main()
{
    int pilihan;
    printf("Pilih hari yang anda inginkan\n");
    printf("1. Senin\n");
    printf("2. Selasa\n");
    printf("3. Rabu\n");
    printf("4. Kamis\n");
    printf("5. Jumat\n");
    printf("6. Sabtu\n");
    printf("7. Minggu\n");
    printf("Pilihan anda : ");
    scanf("%d",&pilihan);
    switch (pilihan)
    {
    case 1:
        printf("Pilihan Anda = Senin");
        break;
    case 2:
        printf("Pilihan Anda = Selasa");
        break;
    case 3:
        printf("Pilihan Anda = Rabu");
        break;
    case 4:
        printf("Pilihan Anda = Kamis");
        break;
    case 5:
        printf("Pilihan Anda = Jumat");
        break;
    case 6: 
        printf("Pilihan Anda = Sabtu");
        break;
    case 7:
        printf("Pilihan Anda = Minggu");
        break;
    default:
        printf("Tidak ada hari ke-%d", pilihan);
        break;
    }
}