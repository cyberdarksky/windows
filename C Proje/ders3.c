#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/*
	printf("******** Yakup Yazilim ********\n\n");
	
	char kitapadi[20];
	printf("Kitap adi gir: ");
	scanf("%s",kitapadi);
	printf("Okudugun %s gayet iyi bir kitap!\n",kitapadi);
	printf("Alttaki bilgileri doldurmaya ne dersin?\n\n");
	
	
	
	char ad[10],soyad[10],tarih[2],sehir[10];
	printf("Adin: ");
	scanf("%s",ad);
	
	printf("Soyadin: ");
	scanf("%s",soyad);
	
	printf("Dogum tarihin: ");
	scanf("%s",tarih);
	
	printf("Bulundugun sehir: ");
	scanf("%s",sehir);
	
	printf("\n\n");
	
	printf("Adin %s soyadin ise %s, %s tarihinde dogmussun ve %s'da yasiyorsun. \n\nUstelik %s okumayi da pek seviyorsun\n\n",ad,soyad,tarih,sehir,kitapadi);
	printf("******** Yazilim testi basarili ********");
	
	*/
	
	
	
	
	char kitapadi[10],kitapyazari[10],kitapsayfasayisi[2],kitapokunansayfasayisi[2];
	printf("Hangi kitabi okuyorsunuz:");
	scanf("%s",kitapadi);
	
	printf("Kitabin yazari: ");
	scanf("%s",kitapyazari);
	
	printf("Kitabýn sayfa miktari: ");
	scanf("%s",kitapsayfasayisi);
	
	printf("Okudugu sayfa miktari: ");
	scanf("%s",kitapokunansayfasayisi);
	
	printf("Merhaba, %s adli yazarýn %s sayfalýk bir eseri olan %s'i tam olarak %s sayfa okumussunuz",kitapyazari,kitapsayfasayisi,kitapadi,kitapokunansayfasayisi);
	
	return 0;
}
