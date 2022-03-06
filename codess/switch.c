#include <stdio.h>
#include <string.h>

int main() {

    int gun,ay,yil;
    char secim1[10],a1[10];
    gun=0;
    ay=0;
    yil=0;
    a1="ocak";

    printf("\n***> Tarih ayarlari <***\n");
    printf("Suanki tarih: %d/%d/%d\n",gun,ay,yil);
    
    printf("Hangi ay girilecek: ");
    scanf("%d",&ay);
    switch (ay) {
            case 1: printf("Ocak ayi secildi!\n");
            break;
            case 2: printf("Subat ayi secildi!\n");
            break;
            case 3: printf("Mart ayi secildi!\n");
            break;
            case 4: printf("Nisan ayi secildi!\n");
            break;
            case 5: printf("Mayis ayi secildi!\n");
            break;
            case 6: printf("Haziran ayi secildi!\n");
            break;
            case 7: printf("Temmuz ayi secildi!\n");
            break;
            case 8: printf("Agustos ayi secildi!\n");
            break;
            case 9: printf("Eylul ayi secildi!\n");
            break;
            case 10: printf("Ekim ayi secildi!\n");
            break;
            case 11: printf("Kasim ayi secildi!\n");
            break;
            case 12: printf("Aralik ayi secildi!\n");
            break;
            default: printf("Boyle bir ay yok, yeniden baslatiliyor...\n");
            break;
        }
        printf("Suanki tarih: %d/%d/%d\n",gun,ay,yil);

        printf("Hangi gun girilecek: ");
        scanf("%d",&gun);
        printf("\nSuanki tarih: %d/%d/%d\n",gun,ay,yil);
        printf("Hangi yil girilecek: ");
        scanf("%d",&yil);
        switch (ay) {
            case 1: printf("\nSuanki tarih: %d %s %d\n",gun,a1,yil);
            break;
            case 2: printf("Subat ayi secildi!\n");
            break;
            case 3: printf("Mart ayi secildi!\n");
            break;
            case 4: printf("Nisan ayi secildi!\n");
            break;
            case 5: printf("Mayis ayi secildi!\n");
            break;
            case 6: printf("Haziran ayi secildi!\n");
            break;
            case 7: printf("Temmuz ayi secildi!\n");
            break;
            case 8: printf("Agustos ayi secildi!\n");
            break;
            case 9: printf("Eylul ayi secildi!\n");
            break;
            case 10: printf("Ekim ayi secildi!\n");
            break;
            case 11: printf("Kasim ayi secildi!\n");
            break;
            case 12: printf("Aralik ayi secildi!\n");
            break;
        
  return 0;      
}
  
