#include <stdio.h>
int main() {
    char password[100];
    printf("Sifren: ");
    scanf("%s", password);
    
    if (password == "cyberdarksky")
    {
	    printf("dogru \n");
	}
	else
    {
	
	    printf("yanlis");
	}
	return 0;
}
