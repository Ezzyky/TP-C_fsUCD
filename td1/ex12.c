#include <stdio.h>
#include <math.h>
int x1,x2,y,y2;
float AB;
int main(){
    // point A
    printf ("entrez les coordonnees de A :\n X1= \n");
    scanf("%d",&x1);
    printf("y1 :\n");
    scanf("%d",&y);
    printf("les cordonees de A(%d;%d)\n",x1,y);
    // point B
    printf ("entrez les coordonnées de B :\nX2= \n");
    scanf("%d",&x2);
    printf ("y2 :\n");
    scanf("%d",&y2);
    printf("les cordonees de B(%d;%d)\n",x2,y2);
    // AB
    AB= sqrtf(pow((x2-x1),2)+pow((y2-y),2));
    printf("La distance entre deux points A et B AB=%.2f",AB);
    return 0;
}