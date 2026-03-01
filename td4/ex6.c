#include <stdio.h>
int  main(){
int t[10],i,x,f=0;

for(i=0 ;i<10;i++){
    printf ("entrez la valeur numero %d ",i);
    scanf("%d",&t[i]);
}
printf ("entrez un nombre ");
scanf ("%d",&x);
for(i=0 ;i<10;i++){
    if (x==t[i]){
        f=1;
    }
}
if (f==1)
{
    printf("Le nombre existe dans le tableau\n");
}
else 
    printf("Le nombre n'existe pas dans le tableau\n");
    return 0;
}   