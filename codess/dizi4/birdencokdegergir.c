#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    system("COLOR 2");

    int a[100], i, j;
    j = 1;
    i = 1;
    char sec[5];
    while (j <= i)
    {
        printf("\nSayi giriniz:\n>>> ");
        scanf("%d", &a[i]);

        printf("Eklenecek sayi var mi? (y:yes  or n:no)\n>>> ");
        scanf("%s", sec);

        if (strcmp(sec, "y") == 0)
        {
            i++;
            j++;
        }

        else
        {
            printf("Ekleme istegi reddedildi!\n");
            j++;
        }
    }

    int k = 1;
    printf("\n\n***** Kaydedilecek degerler ****\n");
    printf("_______________________________\n");
    while (k <= i)
    {
        printf("\nSayi %d: %d", k, a[k]);
        k++;
    }

    printf("\n_______________________________\n\n\n");
    printf("Yukaridaki bilgiler kaydedilsin mi? (y/n)\n>>> ");
    scanf("%s", &sec);
    if (strcmp(sec, "y") == 0)
    {
        FILE *data = fopen("data.txt", "w+");
        k = 1;
        while (k <= i)
        {
            fprintf(data, "\nSayi %d: %d", k, a[k]);
            k++;
        }
        fclose(data);
        while (k < 30)
        {
            printf("**  **  **  **  **  **  **  **\n");
            k++;
        }
        printf("\n<--------- [data.txt] --------->\n");
        int k = 1;
        printf("_______________________________\n");
        while (k <= i)
        {
            printf("\nSayi %d: %d", k, a[k]);
            k++;
        }

        printf("\n_______________________________\n\n\n");
        printf("\nUyari: Bilgiler 'data.txt' adli dosyaya kaydedildi!\n");

    }
    else if (strcmp(sec, "n") == 0)
    {
        printf("\nKaydedilmedi!\n");
    }
    else
    {
        printf("\nHatali komut!\n");
    }

    printf("\nCikmak icin herhangi bir tusa basiniz...");
    getch();
    return 0;
}