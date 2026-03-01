#include <stdio.h>
int main (){
    int t[5];
    int min,i,pos;
    printf("entrez un nombre ");
    scanf("%d",&t[0]);
    min=t[0];
    pos =1;
    for (i=1;i<5;i++){
        printf("entrez un nombre ");
        scanf("%d",&t[i]);
        if (min>t[i]){
            min=t[i];
            pos=i+1;
        }
    }
    printf("la valeur minimal est > %d. %d",min,pos);
    return 0;
}