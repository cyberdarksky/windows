#include <stdio.h>
void kayit()
{

    char user[15], pass[15];

    printf("Kullanici adi gir: ");
    scanf("%s", &user);
    printf("Parola gir: ");
    scanf("%s", &pass);
    printf("%s kullanicisi %s sifresi ile kaydedildi!\n", user, pass);

    FILE *dosya;
    dosya = fopen("login.txt", "w");
    fprintf(dosya, "%s\n%s", user, pass);
    fclose(dosya);

}

void giris()
{
printf("yakinda");

}

int main()
{

    int ana1;
    printf("Hosgeldin, bir secenek sec;\n");
    printf("1)Kayit Ol\n2) Giris Yap\n>>> ");
    scanf("%d",&ana1);
    switch (ana1)
    {
    case 1: kayit();
        break;
    case 2: giris();

    default: printf("Hatali giris\n");
    main();
        break;
    }


    return 0;
}