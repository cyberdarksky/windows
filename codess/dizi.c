#include <stdio.h>

int main()
{

    int i, notsayi, top;
    i = 1;
    top = 0;
    printf("\n*** Ortalama Hesaplama ***\n\n");
    printf("Kac not var?\n>>> ");
    scanf("%d", &notsayi);
    int not [notsayi];

    while (i <= notsayi)
    {

        printf("%d. notu gir: ", i);
        scanf("%d", &not [i]);
        top = not [i] + top;
        i++;
    }
    i = 1;
    while (i <= notsayi)
    {
        printf("\n%d. Not: %d", i, not [i]);
        i++;
    }
    float ort;
    ort = top / notsayi;
    printf("\nOrtalama: %f", ort);

    char dosyaadi[10];
    printf("\n\nLog kayit dosyasinin adi: ");
    scanf("%s",&dosyaadi);

    FILE *data;
    data = fopen("aa.txt","a");
    for(i=1;i<=notsayi;i++)
    {
        fprintf(data, "Not %d:%d\n", i,not[i]);
    }
    fprintf(data, "Ortalama: %f", ort);
    fclose(data);
    printf("\n'%s.txt' dosyasi kaydedildi!",dosyaadi);

    return 0;
}