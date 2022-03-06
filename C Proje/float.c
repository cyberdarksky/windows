#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	int s1,s2,top,cik,carp;
	char islem[10];
	
	printf("Number one: ");
	scanf("%d",&s1);
	printf("Number two: ");
	scanf("%d",&s2);
	
	top=s1+s2;
    cik=s1-s2;
    carp=s1*s2;
	
    printf("Process: ");
    scanf("%s",&islem);

    switch (islem) {
    case 'topla':
        printf("%d",top);
        break;

    case 'cikar' :
        printf("%d",cik);   
        break;

    default :
    printf("Error");
    }


	return 0;
}
