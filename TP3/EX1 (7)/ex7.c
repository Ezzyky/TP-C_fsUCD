#include <stdio.h>
int n,pos=0,max=0,pos_max;
int main (){
    do{
        printf ("entrez un nombre(0 pour s arrete) : ");
        scanf ("%d",&n);
        pos+=1;
        if (n>max){
            max=n;
            pos_max=pos;
        }
    }while(n!=0);
    printf("Le plus grand de ces nombres est : %d\n C etait le nombre numero %d",max,pos_max);
    return 0;
}