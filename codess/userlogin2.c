

#include <stdio.h>
#include <stdlib.h>

void sifreligiris(); 
int main(void) {

sifreligiris();
return (EXIT_SUCCESS);
}

void sifreligiris(){ 
char gercek_sifre[12]="hrqss68762"; 
char sifre[12]={0}; 
char gercek_kullaniciadi[15]="cyberdarksky";
char kullaniciadi[11]={0};  
int sonuc1=2;
int sonuc2=2;

printf("Kullanici adi:");
scanf("%s",kullaniciadi);
printf("Sifre :");
scanf("%s",sifre);

sonuc1=strcmp(sifre,"hrqss68762");
sonuc2=strcmp(kullaniciadi,"cyberdarksky");

if(sonuc1==0 && sonuc2==0){
printf("Hos geldiniz %s \n",kullaniciadi);
}
else {
printf("\nkullanci adi veya sifre hatali tekrar dene\n\n");
sifreligiris(); 
}

}