#include <stdio.h>
int main (){
    float t[40],max=0;
    int i=0,s=0,m,n=0,n_m=0;
    while(1){
        
        printf ("entrez la note de %d eleve :",i+1);
        scanf ("%f",&t[i]);
        if (t[i]>20 || t[i]<0) {
            printf ("la valeur non valide !\n"); 
            continue;
        }
        if (max<t[i]) max=t[i];
        s+=t[i];
        i++;
        if (i==40) break;
    }
    m=(float)s/i;
    for (i=0;i<40;i++){
        if (t[i]>m) n+=1;
        if (max==t[i]) n_m+=1;
    }
    printf("les notes supérieures strictement à la moyenne de la classe est : %d.\nle nombre d occurrence de la note maximale est : %d",n,n_m);
    return 0;
}