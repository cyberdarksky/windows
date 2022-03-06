#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int sayi,yuzler,onlar,birler,art,ysayi;
    char sec[10],islem2[10];
    printf("3 basamakli sayi gir:\n>>> ");
    scanf("%d",&sayi);

    yuzler=sayi/100;
    onlar=(sayi/10)%10;
    birler=sayi%10;

    printf("\nYuzler: %d\nOnlar: %d\nBirler: %d\n\n",yuzler,onlar,birler);
    printf("Arttirilacak birimi yaziniz (yuzler, onlar, birler ve sayi) :\n>>> ");
    scanf("%s",&sec);

    if(strcmp(sec,"yuzler")==0)
    {
        printf("\nArttirma miktari gir:\n>>> ");
        scanf("%d",&art);
        yuzler=yuzler+art;
        printf("\nYuzler basamagi arttirildi...\n\n%d sayisi %d%d%d olarak guncellendi!",sayi,yuzler,onlar,birler);
        printf("\nBaska bir islem yapmak istiyor musunuz? (evet veya hayir)\n>>> ");
        scanf("%s",&islem2);
        if(strcmp(islem2,"evet")==0)
        {
            printf("\n");
            main();
        }
        else
        {
            printf("\nTesekkurler, program kapatildi!");
        }

    }
    else if(strcmp(sec,"sayi")==0)
    {
        printf("\nArttirma miktari gir:\n>>> ");
        scanf("%d",&art);
        ysayi=sayi+art;
        printf("\nSayi arttirildi...\n\n%d sayisi %d olarak guncellendi!",sayi,ysayi);
        printf("\nBaska bir islem yapmak istiyor musunuz? (evet veya hayir)\n>>> ");
        scanf("%s",&islem2);
        if(strcmp(islem2,"evet")==0)
        {
            printf("\n");
            main();
        }
        else
        {
            char ch;
            printf("\nTesekkurler, program kapatildi!");
            printf("\nPress Enter\n");
            ch=fgetc(stdin);
            if(ch==0x0A)
            {
                printf("Close");
            }
        }

    }
        else
    {
        printf("Hatali tuslama, tekrar dene...\n");
        main();
    }





    return 0;
}