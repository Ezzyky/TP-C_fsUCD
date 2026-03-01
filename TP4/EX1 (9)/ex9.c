#include <stdio.h>
int main (){
    int t[20][15];
    int i,j;
    int som=0,pos=0,spos=0,somn=0,max,min;
   
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
        scanf("%d",&t[i][j]);
        if (i == 0 && j == 0) {
                max = t[i][j];
                min = t[i][j];
            }
        som+=t[i][j];
        if (t[i][j]>0) {
            pos++;
            spos+=t[i][j];
        }
        if (t[i][j]<0) {
            
            somn+=t[i][j];
        }
        if (max<t[i][j]) max =t[i][j];
        if (min>t[i][j]) min =t[i][j];
        }
        

    }
    printf("Somme totale = %d\n", som);
    printf("Nombre des positifs = %d\n", pos);
    printf("Somme des positifs = %d\n", spos);
    printf("Somme des negatifs = %d\n", somn);
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;
}