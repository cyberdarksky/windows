#include <string.h>
#include <stdio.h>

void kayitol()
{
    char newuser[15],newpass[15];
    printf("Kullanici adi gir: ");
    scanf("%s",&newuser);
    printf("Parola gir: ");
    scanf("%s",&newpass);
    printf("%s adli kullanici %s sifresi ile sisteme kayit edildi!\n",newuser,newpass);
}



void hesap()
{
    int ana1;
    printf("Hosgeldin, bir secenek sec;\n");
    printf("1)Kayit Ol\n2) Giris Yap\n>>> ");
    scanf("%d",&ana1);
    switch (ana1)
    {
    case 1: kayitol();
        break;
    case 2: girisyap();

    default: printf("Hatali giris\n");
    main();
        break;
    }
}



int main(){

            printf("\nEnter filename: ");
            scanf("%s", &filename);
            char *fil3name = filename;
            char *local_file = ("./%s",fil3name);
            char *ts2 = strdup(local_file);
            char *file_name = basename(ts2);
            printf(file_name);
            printf("Enter a sentence:\n");
            scanf("%s", &sentence);
            SaveTextIntoFile(sentence);

    printf("/// Calinti program denemesi ///\n");
    hesap();


    return 0;
} 