#include <stdio.h>
#include <stdlib.h>

int main() {

    int i,sayi,fak;
    i=1;
    fak=1;
    printf("Sayi gir: ");
    scanf("%d",&sayi);
    
    while(i<=sayi)
    {
        
        printf("Adim: %d --",i);
        fak=fak*i;
        printf("%d\n",fak);
        i++;
    }
    return 0;
}