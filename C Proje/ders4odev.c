#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/*
	
	int alan,uzunluk,cevre;
	
	printf("**** Alan ve Cevre Hesabi ****");
	printf("\n\n");
	printf("Bir uzunluk gir: ");
	scanf("%d",&uzunluk);
	
	alan=uzunluk*uzunluk;
	cevre=uzunluk*4;
	
	printf("\nGirilen uzunluk ile olusturulan geometrik sekil bilgileri;\n\n**********************************\n\n");
	printf("Alan= %d\nCevre= %d",alan,cevre);
	printf("\n\n**********************************");
	
	*/
	
	
	/*
	int not1,not2,not3,ort,top;
	
	printf("***** Ogrenci Not Ortalamasi Hesapla *****\n");
	printf("1. Notu gir: ");
	scanf("%d",&not1);
	
	printf("2. Notu gir: ");
	scanf("%d",&not2);
	
	printf("3. Notu gir: ");
	scanf("%d",&not3);
	
	top=not1+not2+not3;
	ort=top/3;
	
	printf("\n\nNot toplami: %d",top);
	printf("\nNot ortalamasi: %d",ort);
	
	printf("\n\n***************************");
	
	*/
	
	
	
	int ma,mf,ka,kf,sua,suf,bilet,top;
	
	printf("Kola adeti: ");
	scanf("%d",&ka);
	
		printf("Misir adeti: ");
	scanf("%d",&ma);
	
		printf("Su adeti: ");
	scanf("%d",&sua);
	
	kf=2;
	mf=2;
	suf=1;
	
	top=kf*ka+sua*suf+ma*mf;
	
	printf("\nToplam fiyat: %d",top);
	
	return 0;
}
