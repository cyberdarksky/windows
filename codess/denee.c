#include <stdio.h>
#include <locale.h>
int main(){
int maas,zam,zamli;
setlocale(LC_ALL, "Turkish");
printf("Maaşı gir: ");
scanf("%d",&maas);
printf("Zam oranı gir: ");
scanf("%d",&zam);
zamli=(maas)+(maas*zam)/100;
printf("Zamlı maaş: %d",zamli);
    return 0;
}