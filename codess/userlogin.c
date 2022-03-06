#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void yazi()
{
  printf("Deneme");
}

void adim2()
{
  char username[15], password[15];
  if (strcmp(username, "cyberdarksky") == 0)
  {

    printf("\nGiris yapilacak kullanici: %s\n", username);
    printf("Sifreni gir:\n>>> ");
    scanf("%s", &password);
    if (strcmp(password, "123456") == 0)
    {
      printf("Giris basarili!");
    }

    else
    {
      printf("Sifre yanlis!");
      main();
    }
  }
  else
  {
    printf("Kullanici adi bulunamadi!");
    main();
  }
}
int main()
{
  char username[15], password[15];
  printf("\nKullanici adi gir:\n>>> ");
  scanf("%s", &username);
  adim2();
  
  return 0;
}