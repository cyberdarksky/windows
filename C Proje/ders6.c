#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	/* Reis burada kullan�c� bir uzunluk girecek ard�ndan ne yapmak istedi�ini yazacak
	mesela 1. sorguya "10" yazacak ve uzunluk de�eri 10 olacak.
	Ard�ndan ikinci sorguya "alan" veya "cevre" yazacak. Cevre yad�ysa cevreyi, Alan yazd�ysa alan� gosterecek.
	*/
	
   int alan,cevre,uzunluk,islem;
   
   printf("Uzunluk gir: ");
   scanf("%d",&uzunluk);
   
   alan=uzunluk*uzunluk;
   cevre=uzunluk*4;
   
   printf("Ogrenmek istediginiz islem: ");
   scanf("%s",&islem);
   
   printf("Islem sonucu: %d",islem);
	return 0;
}
