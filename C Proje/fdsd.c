#include <stdio.h>
#include <string.h>

int main(){

    int x,z;
    char y[10],choice[3];

//Tekrarlanacak kelimeyi girip "y" deðerine atayacak.
    printf("Enter word: ");
    scanf("%s",&y);

//Tekrarlama sayýsýný girip "x" deðerine atacayacak.
    printf("Enter 'for' number: ");
    scanf("%d",&x);

//Baþýnda sýra numarasý olup olmadýðýný girecek "choice" deðerine atayacak.
    printf("Is there a line number (yes or no): ");
    scanf("%s",&choice);

//"Yes" komutu ile baþýnda sýra numarasý olacak
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
// Hatalý giriþ vs.
    else
    {
        printf("Invalid arguman!");
    }

    return 0;
}
