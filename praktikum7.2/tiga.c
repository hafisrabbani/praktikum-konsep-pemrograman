#include <stdio.h>
#include <string.h>


void bandingString(char string1[], char string2[]){
    int i = 0;
    int status = 1;
    while(string1[i] != '\0' && string2[i] != '\0'){
        if(string1[i] != string2[i]){
            status = 0;
        }
        i++;
    }
    if(status == 1){
        printf("String sama\n");
    }else{
        printf("String beda\n");
    }

}

int main(){
    char string1[100];
    char string2[100];
    printf("Masukkan string 1: ");
    scanf("%s", string1);
    printf("Masukkan string 2: ");
    scanf("%s", string2);
    bandingString(strlwr(string1), strlwr(string2));
}