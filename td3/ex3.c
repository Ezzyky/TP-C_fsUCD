#include <stdio.h>
long long max=0,n,pos,i;
int main (){
    printf("Entrez le nombre numero 1 :\n1= ");
    scanf("%lld",&n);
    max=n;
    pos=1;
    for (i=2;i<=6;i++)
    {
        printf("Entrez le nombre numeero %d :\n%d= ",i,i);
        scanf("%lld",&n);
        if (n>max) 
        {
            max = n;
            pos =i;
        }

    }
    printf("Le plus grand de ces nombres est : %lld\n C etait le nombre numero %lld",max,pos);
    return 0;
}