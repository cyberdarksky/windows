#include <stdio.h>
#include <string.h>

int main()
{
    printf("**** Sinif ogrenci kaydi ****\n\n");
    int i, sayi;
    i = 0;
    printf("Kac ogrenci girilecek: ");
    scanf("%d", &sayi);
    char ogrenci[sayi][15];
    while (i < sayi)
    {
        printf("Ogrenci adi girin: ");
        scanf("%s", &ogrenci[i]);
        i++;
    }
    i = 0;
    while (i < sayi)
    {
        printf("%d. Ogrenci: %s\n", i + 1, ogrenci[i]);
        i++;
    }

    return 0;
}