#include <stdio.h>
#include <string.h>

int main () {
    int a,b,c,sayac,i;

    printf("gir: ");
    scanf("%d",&a);
    printf("gir: ");
    scanf("%d",&b);
    printf("gir: ");
    scanf("%d",&c);

    for(i=a;i<=b;i+=c)
    {
        sayac=sayac+i;
        printf("%d\n",sayac);
    }

main2();

    return 0;
}
int main2() {

    printf("En basa sariyooo xd\n");
    main();
}