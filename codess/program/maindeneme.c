#include <stdio.h>

int main() {

    FILE *dosya;
    char karakter[15];
    dosya=fopen("user.txt","r");
    fscanf(dosya,"%s",&karakter);
    printf("%s",karakter);

    return 0;
}