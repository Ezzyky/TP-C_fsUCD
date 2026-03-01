#include <stdio.h>
int t[20];
int s=0;
int i;
int main (){
    for( i=0;i<20;i++){
        printf("entrez un nombre nemero %d ",i);
        scanf("%d",&t[i]);
        s=s+t[i];
    }
    printf ("%d",s);
    return 0;
}