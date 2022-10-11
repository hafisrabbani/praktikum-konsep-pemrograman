#include <stdio.h>

float konversi(float suhu,char asal,char tuj){
    // asal = C,F,R
    float hasil;
    if(asal=='C'){
        if(tuj=='F'){
            hasil=suhu*9/5+32;
        }else if(tuj=='R'){
            hasil=suhu*4/5;
        }
    }else if(asal=='F'){
        if(tuj=='C'){
            hasil=(suhu-32)*5/9;
        }else if(tuj=='R'){
            hasil=(suhu-32)*4/9;
        }
    }else if(asal=='R'){
        if(tuj=='C'){
            hasil=suhu*5/4;
        }else if(tuj=='F'){
            hasil=suhu*9/4+32;
        }
    }

    return hasil;
}

void main()
{
    float suhu;
    char asal,tuj;
    printf("Masukkan suhu : ");
    scanf("%f",&suhu);
    printf("Masukkan asal : ");
    scanf(" %c",&asal);
    printf("Masukkan tujuan : ");
    scanf(" %c",&tuj);
    printf("Hasil : %.2f",konversi(suhu,asal,tuj));
}