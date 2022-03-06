#include <stdio.h>

int main() {

    int a,b,c,i,sayac;
    sayac=0;
    a=1;
    for(i=1;i<=41;i+=4)
    {
     sayac=sayac+i;
     printf("%d\n",i);
    }
printf("top: %d",sayac);

    return 0;
}