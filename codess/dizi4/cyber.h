int yaz(int x) // int değer yazdırır
{
    printf("%d\n",x);
    return x;
}
int birlerb(int sayi)
{
    int a,b,c;
    a=sayi/100;
    b=(sayi/10)%10;
    c=sayi%10;
    return c;
}
int onlarb(int sayi)
{
    int a,b,c;
    a=sayi/100;
    b=(sayi/10)%10;
    c=sayi%10;
    return b;
}
int yuzlerb(int sayi)
{
    int a,b,c;
    a=sayi/100;
    b=(sayi/10)%10;
    c=sayi%10;
    return a;
}
int kup(int x) // sayının küpünü alır
{
    x=x*x*x;
    return x;
}
void alt() // alt satıra geçer
{
    printf("\n");
}
struct veriler 
{
    char adi[10];
    int sinifi,yas;
    char sehir[10];
};
int denklemcoz(int a, int b, int c)
{
    int delta,kok1,kok2;
    delta=pow(b,2)-4*a*c;
    if(delta>0)
    {
        kok1=(-b+sqrt(delta))/2*a;
        kok2=(-b-sqrt(delta))/2*a;
        printf("Kok 1: %d\n",kok1);
        printf("Kok 2: %d",kok2);
    }
    else if(delta=0)
    {
        kok1=(-b+sqrt(delta))/2*a;
        printf("Kok: %d",kok1);
    }
    else
    {
        printf("Delta 0'dan kucuk!");
    }

    return kok1;
}
int denklem(int a, int b, int c,int d)
{
    // d değeri kaçıncı kök olduğunu belirtmek için
    int delta,kok1,kok2,kok;
    delta=pow(b,2)-4*a*c;
    kok1=(-b+sqrt(delta))/2*a;
    kok2=(-b-sqrt(delta))/2*a;
    switch (d)
    {
        case 1: kok=kok1;
        break;
        case 2: kok=kok2;
        break;
    }

    return kok;    
}