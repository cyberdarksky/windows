#include <stdio.h>

int main() {
    int i,j,satir,sutun,close;
    printf("Satir: ");
    scanf("%d",&satir);
    printf("Sutun: ");
    scanf("%d",&sutun);
    int matris[satir][sutun];
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("[%d]-[%d]\n>>> ",i,j);
            scanf("%d",&matris[i][j]);
            printf("\n");
        }
    }
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("//* matris[%d][%d] = %d *//\n",i,j,matris[i][j]);
            printf("\n");
        }
    }

    return 0;
}