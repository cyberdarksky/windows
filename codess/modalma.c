#include <stdio.h>

int main() {

    int i,kalan;

    for(i=1;i<=50;i++)
    {
        if(i%5==0 && i%2==0)
        {
            printf("%d sayisi 5 ve 2'e tam bolunuyor.\n",i);
        }
        else
        {
            kalan=i%5;
            if (kalan==0)
            {
                printf("%d sadece 5'e bolunur.\n",i);
            }
            else
            {
                printf("%d Kalani=%d\n",i,kalan);
            }
            
            
        }
    }


    return 0;
}