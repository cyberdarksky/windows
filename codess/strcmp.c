#include <stdio.h>
#include <string.h>

int main(){

    char girdi[10];
    int sonuc;

    printf("\n*** Strcmp calisma mantigi ***\n\n");
    printf("Girilmesi gereken kelime 'cyber'.\nDogru ise: 0\nYanlis ise: 1\nSayi ise: -1\nGecersiz karakter: -1\n\nGir>>> ");
    scanf("%s",&girdi);
    sonuc=strcmp(girdi,"cyber");
    printf("Sonuc: %d\n",sonuc);
    main();




    return 0;
}