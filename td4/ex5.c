#include <stdio.h>
int t[10];
int i;
int main ()
{    
    for(i=0;i<10;i++){
        printf ("entre un le valeur de numero %d",i+1);
        scanf("%d",&t[i]);
    }
    int min=t[0],max =t[6];
    for(i=1;i<5;i++){
        if (min>t[i]) min=t[i];
        if (max<t[i+5]) max=t[i+5];
    }
    
    printf ("%d %d",min ,max);
    
    return 0;
}