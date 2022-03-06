#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int a,x,y,z,sayac;
    char asama[5];
    sayac=0;
    
    printf("Baslangic degeri (varsayilan = 1):\n>>> ");
    scanf("%d",&x);
    printf("Bitis degeri:\n>>> ");
    scanf("%d",&y);
    printf("Artis miktari gir:\n>>> ");
    scanf("%d",&z);

    printf("Asamalar gosterilsin mi (yes or no):\n>>> ");
    scanf("%s",&asama);

    if(strcmp(asama,"yes")==0) {
    for(a=x;a<=y;a+=z) 
    {
        sayac=sayac+a;
        printf("%d) %d\n",a,sayac);
    }
    }
    else if(strcmp(asama,"no")==0) {
    for(a=x;a<=y;a+=z) 
    {
        sayac=sayac+a;
    }
    printf("Sonuc: %d",sayac);
    }
    else {
        printf("\nHatali giris yaptiniz!\nTekrar gir >>> ");
        main();
    }
    

    return 0;
}