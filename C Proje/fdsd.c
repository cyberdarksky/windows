#include <stdio.h>
#include <string.h>

int main(){

    int x,z;
    char y[10],choice[3];

//Tekrarlanacak kelimeyi girip "y" de�erine atayacak.
    printf("Enter word: ");
    scanf("%s",&y);

//Tekrarlama say�s�n� girip "x" de�erine atacayacak.
    printf("Enter 'for' number: ");
    scanf("%d",&x);

//Ba��nda s�ra numaras� olup olmad���n� girecek "choice" de�erine atayacak.
    printf("Is there a line number (yes or no): ");
    scanf("%s",&choice);

//"Yes" komutu ile ba��nda s�ra numaras� olacak
    if(strcmp(choice, "yes")==0)
    {
      for(z=1;z<=x;z++)
        {
           printf("%d) %s\n",z,y);
        }
    }
//"No" komutu ile sadece girilen kelimeyi yazacak
    else if(strcmp(choice, "no")==0)
    {
     for(z=1;z<=x;z++)
       {
           printf("%s\n",y);
       }
    }  
// Hatal� giri� vs.
    else
    {
        printf("Invalid arguman!");
    }

    return 0;
}
