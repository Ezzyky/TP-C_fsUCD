#include <stdio.h>
int M=5, PH=4,GEO=3 ,ANG=2,F=4;
int m, ph, ang, f,geo;
float mo;
int main(){
    printf ("entrez les note de chaque matières suivent :\n");
    printf("Math\n");
    scanf("%d",&m);
    
    printf("Physique\n");
    scanf("%d",&ph);
    
    printf("Anglais\n");
    scanf("%d",&ang);

    printf("Français\n");
    scanf("%d",&f);
    
    printf("Géographie\n");
    scanf("%d",&geo);

    mo =(((M*m)+(ph*PH)+(ang*ANG)+(GEO*geo)+(F*f))/(float)(M+ANG+F+GEO+PH));
    printf("la moyenne des notes des cinq matières est %.2f",mo);
    getchar ();
    return 0;
}