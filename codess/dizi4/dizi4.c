#include <stdio.h>
#include "cyber.h"

int main() {

    int el,normal,ucret_el,ucret_normal;
    int asimmiktari_el,asimmiktari_normal;
    int kota_normal,kota_el,asim_el,asim_normal;


    kota_el=8;
    asim_el=4;
    kota_normal=15;
    asim_normal=5;
    printf("Eldeki agirligi gir (Kota: %dkg)\n>>> ",kota_el);
    scanf("%d",&el);
    printf("Normal agirligi gir /Kota: %dkg)\n>>> ",kota_normal);
    scanf("%d",&normal);    

    ucret_el=0;
    ucret_normal=0;
    asimmiktari_el=el-kota_el;
    asimmiktari_normal=normal-kota_normal;
    printf("\nElinizdeki agirlik= %dkg\nNormal agirlik= %dkg",el,normal);
    if(el>kota_el)
    {
        ucret_el=asimmiktari_el*asim_el;
        printf("\nElinizdeki agirlik ucretsiz %dkg olan kotayi %dkg astigi icin %dtl ek ucret eklendi!",kota_el,asimmiktari_el,ucret_el);
    }
    if(normal>kota_normal)
    {
        ucret_normal=asimmiktari_normal*asim_normal;
        printf("\nNormal agirlik ucretsız %dkg olan kotayi %dkg astigi icin %dtl ek ucret eklendi!",kota_normal,asimmiktari_normal,ucret_normal);
    }
    
    printf("\nFaturaniz: %dtl",ucret_el+ucret_normal);

    return 0;
}