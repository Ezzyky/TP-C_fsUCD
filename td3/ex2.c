#include <stdio.h>
int a=0,b,c;
int main (){
    printf("entrez al valeur de b.\n");
    scanf ("%d",&b);
    while (1)
    {
        printf("entrez al valeur de c (entre un valeur negatif pour s arrete.\n");
        scanf ("%d",&c);
        if (c<0) break;
        if (b==c) a+=1;
    }
    printf("%d",a);
    return 0;
}