#include <stdio.h>

int main() {

    int i,sayi;
    printf("Ogrenci sayisi gir: ");
    scanf("%d",&sayi);
    char ogrenci[sayi][15];

    for(i=0;i<sayi;i++)
    {
        printf("%d. Ogrenci: ",i+1);
        scanf("%s",ogrenci[i]);
    }
    for(i=0;i<sayi;i++)
    {
        printf("%d. Ogrencinin adi: %s\n",i+1,ogrenci[i]);
    }

    return 0;
}