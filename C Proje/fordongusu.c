#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    int i,tekrar,artis;
    char metin[20],sira[10];
    printf("Sıra numarası eklensin mi (evet veya hayır)\n>>> ");
    scanf("%s",sira);

    if(strcmp(sira,"evet")==0)
 {
    setlocale(LC_ALL, "Turkish");

    printf("Metni girin:\n>>> ");
    scanf("%s",&metin);
    printf("%s icin tekrar sayisi gir:\n>>> ",metin);
    scanf("%d",&tekrar);
    printf("%d'e kadar kacar kacar artsın: (varsayılan= 1)\n>>> ",tekrar);
    scanf("%d",&artis);
    for(i=0;i<=tekrar;i+=artis)
    {
    setlocale(LC_ALL, "Turkish"); 
    printf("%d) %s\n",i,metin);
    }
 }

 else if(strcmp(sira,"hayir")==0)
 {
    printf("Metni girin:\n>>> ");
    scanf("%s",&metin);
    printf("%s icin tekrar sayisi gir\n>>> ",metin);
    scanf("%d",&tekrar);

    for(i=0;i<=tekrar;i++)
    {
    printf("%s\n",metin);
    }
 }

 else 
 {
     printf("Hatalı giriş!\n");
     main();
 }
    return 0;
}