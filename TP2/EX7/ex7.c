#include <stdio.h>
int main(){
    float a,b,c;

    printf ("Entrez un deux nombre.\na= ");
    scanf ("%f",&a);
    printf("b= ");
    scanf("%f",&b);
    printf("c= ");
    scanf("%f",&c);

    if (a<b<c) {
        printf(" %.2f et %.2f et %.2f sont ordonnees par un ordre croissant.",a,b,c);
    }
    else if (c<b<a) {
        printf(" %.2f et %.2f et %.2f sont ordonnees par un ordre decroissant.",a,b,c);
    }
    else {
    printf (" %.2f et %.2f et %.2f sont identiques.",a,b,c);
    }
    return 0;
}
