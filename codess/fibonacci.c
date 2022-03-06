#include <stdio.h>
#include <time.h>

int main() {

    int sira,i,a,b,c,sayac;
    sayac=0;
    printf("Ogrenmek istedigin dize sirasi:\n>>> ");
    scanf("%d",&sira);
    
    a=1;
    b=1; 
    printf("\nFibonacci is loading...\n\n%d\n%d\n",a,b);

    for(i=1;i<=sira;i++)
    {
        c=a+b;
        a=b;
        b=c;
        sayac=sayac+c;
        printf("%d\n",c);
    }

    printf("\nTop: %d",sayac);

return 0;
}