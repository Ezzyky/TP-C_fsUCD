#include <stdio.h>
float x,y;
int main (){

    printf("entrez deux nombre.\nx= ");

    scanf("%f",&x);

    printf("y= ");
    scanf("%f",&y);

    if (x>0 && y>0)
    {
        printf("le prodoit de %.2f et %.2f est positif.",x,y);
    }

    else if ((x<0 && y>0) || (x>0 && y<0))
    {
        printf("le prodoit de %.2f et %.2f est negatif.",x,y);
    }

    else
    {
        printf("le prodoit de %.2f et %.2f est nul.",x,y);
    }

    return 0;
}