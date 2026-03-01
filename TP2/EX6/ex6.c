#include <stdio.h>
int main(){
    float a,b;

    printf ("Entrez un deux nombre.\na= ");
    scanf ("%f",&a);
    printf("b= ");
    scanf("%f",&b);
    if (a<b) {
        printf(" %.2f et %.2f sont ordonnees par un ordre croissant.",a,b);
    }
    else if (b<a) {
        printf(" %.2f et %.2f sont ordonnees par un ordre decroissant.",a,b);
    }
    else {
    printf (" %.2f et %.2f sont identiques.",a,b);
    }
    return 0;
}
