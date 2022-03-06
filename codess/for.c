#include <stdio.h>
#include <string.h>

int main() {
  char sira[10];

    printf("Sira sayisi olsun mu (evet / hayir): ");
    scanf("%s",&sira);

    if(strcmp(sira, "evet")==0)
    {
        int x,y;
        char kelime[10];
        printf("Tekrar sayisi gir: ");
        scanf("%d",&y);
        printf("Tekrarlanacak kelimeyi gir: ");
        scanf("%s",&kelime);

        for(x=1;x<=y;x++)
        printf("%d) %s\n",x,kelime);
    }

    else if(strcmp(sira, "hayir")==0)
    {
        int x,y;
        char kelime[10];
        printf("Tekrar sayisi gir: ");
        scanf("%d",&y);
        printf("Tekrarlanacak kelimeyi gir: ");
        scanf("%s",&kelime);

        for(x=1;x<=y;x++)
        printf("%s\n",kelime);
    }    

    else
    {

        printf("Hata!");
    }




    return 0;
}