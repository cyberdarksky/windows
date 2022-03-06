#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayi1,sayi2,top;
	
	printf("******** Acilis *********\n\n");
	printf("Sayi gir: ");
	scanf("%d",&sayi1);
	
	printf("2. Sayiyi gir: ");
	scanf("%d",&sayi2);
	
	top=sayi1+sayi2;
	
	printf("Toplam: %d",top);
	printf("\n\n***************************");
	
	return 0;
}
