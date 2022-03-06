#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	/* Reis burada kullanýcý bir uzunluk girecek ardýndan ne yapmak istediðini yazacak
	mesela 1. sorguya "10" yazacak ve uzunluk deðeri 10 olacak.
	Ardýndan ikinci sorguya "alan" veya "cevre" yazacak. Cevre yadýysa cevreyi, Alan yazdýysa alaný gosterecek.
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
