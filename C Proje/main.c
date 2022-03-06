#include <stdio.h>
#include <string.h>

int main() {
    char password[10];
    printf("Sifren: ");
    scanf("%s", password);

    if (strcmp(password, "cyberdarksky")== 0)
    {
        printf("dogru \n");
    }
    else
    {
        printf("Password ingorret");
    }
    return 0;
}