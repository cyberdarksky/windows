#include <stdio.h>
#include <string.h>
void ProgramiSonlandir(void(ptr)())
{
    int son;
    printf("1) Anasayfaya git\n2) Programi sonlandir\n>>> ");
    scanf("%d", &son);
    switch (son)
    {
    case 1:
        (ptr)();
        break;

    default:
        break;
    }
}

int main()
{
    void (*ptr)() = &main;

    int sec;
    printf("\n***** Ana Sayfa *****\n\n1) YKS Programina giris\n2) Ayarlar\n3) Cikis\n>>> ");
    scanf("%d", &sec);
    switch (sec)
    {
    case 1:

        printf("***** ////////////// *****\n\n**** YKS Hack Programi xd ****\n\n");
        printf("1) Dortgende alan ve cevre hesaplama\n");
        printf("2) Cemberde alan ve cevre hesaplama\n");
        printf("3) Kup hacmi hesaplama\n");
        printf("4) Bir sayinin faktoriyelini hesaplama\n");
        printf("5) Havuz problemleri\n");
        printf("6) 1'den x'e kadar olan sayilarin toplam hesabi\n");
        printf("7) Yas problemleri hesaplama\n");
        printf("8) Isci problemleri hesaplama\n");
        printf("\nBir opsiyon sec:\n>>> ");
        scanf("%d", &sec);

        switch (sec)
        {
        case 1:
            printf("\n*****************\n***** Dortgende alan ve cevre hesaplama *****\n");
            int kenar1, kenar2, alan, cevre, son;
            printf("Uzun kenari gir:\n>>> ");
            scanf("%d", &kenar1);
            printf("\nKisa kenari gir:\n>>> ");
            scanf("%d", &kenar2);
            alan = kenar1 * kenar2;
            cevre = (kenar1 + kenar2) * 2;
            printf("1. Kenari %d ve 2. kenari %d olan dikdortgenin bilgileri:\n", kenar1, kenar2);
            printf("\nAlan: %d\nCevre: %d\n\n", alan, cevre);

            ProgramiSonlandir(ptr);

            break;
        case 2:
            printf("\n*****************\n***** Cemberde alan ve cevre hesaplama *****\n");
            int r, alan2, cevre2, son2, pi;
            printf("Yaricap gir:\n>>> ");
            scanf("%d", &r);
            pi = 3;
            alan2 = pi * r * r;
            cevre2 = pi * r * 2;
            printf("Yaricapi %d olan cemberin bilgileri:\n", r);
            printf("\nAlan: %d\nCevre: %d\n\n", alan2, cevre2);

            ProgramiSonlandir(ptr);
            break;

        case 3:
            printf("\n*****************\n***** Kup hacmi hesaplama *****\n");
            int k3, son3, hacim3;
            printf("Kenar gir:\n>>> ");
            scanf("%d", &k3);
            hacim3 = k3 * k3 * k3;
            printf("Bir kenari %d olan küpün bilgileri:\n", k3);
            printf("\nHacim: %d\n\n", hacim3);
            ProgramiSonlandir(ptr);
            break;
        case 4:
            printf("\n*****************\n***** Faktoriyel hesaplama *****\n");
            int i4, fak, k4, son4;
            i4 = 1;
            fak = 1;
            printf("Sayi gir:\n>>> ");
            scanf("%d", &k4);
            while (i4 <= k4)
            {
                fak = fak * i4;
                i4++;
            }
            printf("\n%d sayisinin faktoriyeli %d'dir.\n\n", k4, fak);
            ProgramiSonlandir(ptr);
            break;
        case 5:
            printf("\n*****************\n***** Havuz problemleri *****\n");
            int amusluk, bmusluk, sonuc;
            printf("Size verilen sorunun detaylarini girin:\n\n>>> ");
            printf("A muslugu kac saatte dolduruyor:\n>>> ");
            scanf("%d", &amusluk);
            printf("B muslugu kac saatte dolduruyor:\n>>> ");
            scanf("%d", &bmusluk);
            printf("\nBosuna yazdin knk, bundan sonrasini yazmaya usendim\n\n");

            ProgramiSonlandir(ptr);
            break;
        case 6:
            printf("\n*****************\n***** 1'den x'e kadar olan sayilarin toplam hesabi *****\n");
            int sayi6, sonuc6, i6;
            i6 = 1;
            sonuc6 = 0;
            printf("Sayi gir:\n>>> ");
            scanf("%d", &sayi6);
            while (i6 <= sayi6)
            {
                sonuc6 = sonuc6 + i6;
                i6++;
            }
            printf("\n1'den %d'e kadar olan sayilarin toplami:\n>>> %d\n\n", sayi6, sonuc6);
            ProgramiSonlandir(ptr);
            break;
        }

        break;
    case 2:

        printf("\n*****/// Ayarlar ///*****\n");
        printf("Cok yakinda...\n");
        printf("Ana menuye yonlendiriliyorsunuz...\n");
        main();

        break;
    default:
        printf("Hata!");
        printf("\nAna menuye yonlendiriliyorsunuz...\n");
        main();
        break;
    }

    return 0;
}