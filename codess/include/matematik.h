#include <stdio.h>
#include <string.h>
int karesini_al(int x)
{
    x = x * x;
    return x;
}
int topla(int x, int y)
{
    x = x + y;
    return x;
}
int toplaf(int x, int y)
{
    x = x + y;
    printf("%d",x);
    return x;
}
int sablon(int x, int y, char z[10])
{

    printf("%d sayisi ve %d sayisi %s olarak ayarlandi", x, y, z);
}
int faktoriyel(int n)
{
    int i, sayac;
    sayac = 1;
    for (i = 1; i <= n; i++)
    {
        sayac = sayac * i;
    }
    return sayac;
    // Faktoriyeli sayaç değerine ata!
}
int faktoriyelf(int n)
{
    int i, sayac;
    sayac = 1;
    for (i = 1; i <= n; i++)
    {
        sayac = sayac * i;
    }
    printf("%d",sayac);
    return sayac;
}
int fact(int n)
{
    int i,sonuc;
    for(i=n;i>1;i--)
    {
        n=fact(n-1);
    }
    printf("%d",n);
    
    return n;
}