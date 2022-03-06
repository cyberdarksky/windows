#include <stdio.h>
#include <string.h>

void kayit()
{
    char user[15], pass[15],secim[5];
    FILE *userdata;
    userdata = fopen("user.txt", "r");
    fscanf(userdata, "%s", user);
    printf("Halihazirda kullanici olup olmadıgi kontrol ediliyor...\n\n");
    printf("Kayitli kullanici 1: %s\n\n\n",user);
    printf("Kayit islemine devam edilsin mi? (evet veya hayir)\n>>> ");
    scanf("%s",&secim);
    if(strcmp(secim,"evet")==0)
    {
    printf("Kullanici adi gir: ");
    scanf("%s", &user);
    printf("Parola gir: ");
    scanf("%s", &pass);
    printf("\n\nKullanici adi: %s\nSifre: %s\nKaydedilecek onaylıyor musunuz? (evet veya hayir):\n>>> ",user,pass);
    scanf("%s",&secim);
    if(strcmp(secim,"evet")==0)
    {
    printf("\n'%s' kullanicisi '%s' sifresi ile kaydedildi!\n", user, pass);
    printf("* Detayli bilgi icin 'user.txt' ve 'pass.txt' dosyasina goz at.\n\n");

    FILE *userd;
    userd = fopen("user.txt", "w");
    fprintf(userd, "%s", user);
    fclose(userd);

    FILE *passd;
    passd = fopen("pass.txt", "w");
    fprintf(passd, "%s", pass);
    fclose(passd);
    }
    else
    {
        printf("\nKullanici bilgisi kaydedilmedi!");
    }
    }
    else
    {
        printf("Kayit isleminden vazgecildi!\n");
    } 
}
void data()
{
    FILE *userdata;
    char user[15];
    userdata = fopen("user.txt", "r");
    fscanf(userdata, "%s", user);
    printf("\n**** '%s' adli kullanicinin oturum sayfasi ****\n\n", user);

    char ad[10], soyad[10], meslek[10], sehir[10], secim[10];
    printf("Adi: ");
    scanf("%s", &ad);
    printf("Soyadi: ");
    scanf("%s", &soyad);
    printf("Meslegi: ");
    scanf("%s", &meslek);
    printf("Sehri: ");
    scanf("%s", &sehir);

    printf("\n\n\nAdi: %s\n", ad);
    printf("Soyadi: %s\n", soyad);
    printf("Meslegi: %s\n", meslek);
    printf("Sehir: %s\n", sehir);
    printf("Kaydedilecek onaylıyor musunuz? (evet veya hayir):\n>>> ");
    scanf("%s",&secim);
    if(strcmp(secim,"evet")==0)
    {
    printf("\nBilgi: Veriler 'data.txt' adli dosyaya kaydedildi!\n\n.............");

    FILE *data;
    data = fopen("data.txt", "w");
    fprintf(data, "%s\n%s\n%s\n%s", ad, soyad, meslek, sehir);
    fclose(data);
    }
    else
    {
        printf("\nKullanici bilgisi kaydedilmedi!");
    }
    
   
}
void dataprint()
{
    FILE *userdata;
    char user[15];
    userdata = fopen("user.txt", "r");
    fscanf(userdata, "%s", user);
    printf("\n**** '%s' adli kullanici hakkinda bilgiler ****\n\n", user);

    FILE *data;
    char ad[10], soyad[10], meslek[10], sehir[10];
    data = fopen("data.txt", "r");
    fscanf(data, "%s", &ad);
    fscanf(data, "%s", &soyad);
    fscanf(data, "%s", &meslek);
    fscanf(data, "%s", &sehir);

    printf("Adi: %s\n", ad);
    printf("Soyadi: %s\n", soyad);
    printf("Meslegi: %s\n", meslek);
    printf("Sehir: %s\n", sehir);
    printf("\n\nBilgi: Metinler 'data.txt' adli dosyadan cekilmistir...");
}
void giris()
{

    printf("\n**** Giris Menusu ****\n");
    printf("Uyari: Eger kayit olmadiysaniz giris yapamazsiniz!\n");

    FILE *userdata;
    char user[15], pass[15], usergirdi[15], passgirdi[15];
    userdata = fopen("user.txt", "r");
    fscanf(userdata, "%s", user);
    FILE *passdata;
    passdata = fopen("pass.txt", "r");
    fscanf(passdata, "%s", pass);

    printf("\nKullanici adi: ");
    scanf("%s", &usergirdi);
    printf("Sifre: ");
    scanf("%s", &passgirdi);

    if (strcmp(usergirdi, user) == 0 && strcmp(passgirdi, pass) == 0)
    {
        int sec;
        printf("\nGiris basarili...\n\n");
        printf("1) Kullanici bilgilerini goruntule\n2) Kullanici bilgilerini guncelle\n>>> ");
        scanf("%d", &sec);
        switch (sec)
        {
        case 1:
            dataprint();
            break;
        case 2:
            data();
            break;
        default:
            break;
        }
    }
    else
    {
        printf("Hatali kullanici adi veya parola, tekrar dene...\n");
        giris();
    }
}
int main()
{

    int ana1;
    printf("****//// Hosgeldin, bir secenek sec ////****\n\n");
    printf("1) Kayit Ol\n2) Giris Yap\n3) Cikis\n>>> ");
    scanf("%d", &ana1);
    switch (ana1)
    {
    case 1:
        kayit();
        break;
    case 2:
        giris();
        break;
    case 3:
        printf("\n\nCikiliyor...\n\n");
        break;

    default:
        printf("Hatali giris\n");
        break;
    }

    return 0;
}