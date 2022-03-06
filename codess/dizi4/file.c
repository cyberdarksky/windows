#include <stdio.h>
#include <string.h>
#include <math.h>
#include "cyber.h"
#include <stdlib.h>
#include <conio.h> 

int main()
{
    char text[100];
    char k1[10],k2[10];
    int k3;
    printf("Enter the text:\n>>> ");
    scanf("%[^\n]s",text);

    FILE *textfile = fopen("Text.txt","w+");
    fprintf(textfile,"%s",text);
    fclose(textfile);
    printf("File saved!\n\n");

    FILE *dosya = fopen("Text.txt","r");
    if(dosya == NULL)
    {
        printf("File not found!\n");
    }
    else
    {
    fscanf(dosya,"%s%s%d",k1,k2,&k3);
    fclose(dosya);

    printf("%s\n%s\n%d",k1,k2,k3);
    }

    
    


    printf("\nPress any key...");
    getch();
    return 0;
}