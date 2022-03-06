#include <stdio.h>
#include <string.h>

int main() {

    int sayi1,sayi2;
    char islem[10];

    printf("Gir 1: ");
    scanf("%d",&sayi1);

    printf("Gir 2: ");
    scanf("%d",&sayi2);

    printf("islem: ");
    scanf("%s",&islem);

    if(strcmp(islem, "topla")==0)
    {
        printf("Sonuc: %d\n",sayi1+sayi2);
        main();
    }

    else if(strcmp(islem, "cikar")==0)
    {
        printf("Sonuc: %d\n",sayi1-sayi2);
        main();
    }

    else if(strcmp(islem, "carp")==0)
    {
        printf("Sonuc: %d\n",sayi1*sayi2);
        main();
    }

    else if(strcmp(islem, "bol")==0)
    {
        printf("Sonuc: %d\n",sayi1/sayi2);
        main();
    }
    else{
        printf("Hatali tuslama, en basa donuluyor...\n");
        main();
    }

return 0;
}