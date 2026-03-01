#include <stdio.h>
int main()
{
    int x;
    float f;
    printf ("entrez les valeur de photocopies.\nphotocopies= ");
    scanf("%d",&x);
    if (x<=10) {
        f=x*0.10;
    }
    else if (x<=30)
    {
        f=((x-10)*0.9)+(10*0.10);
    }
    else {
        f=((x-30)*0.8)+(10*0.10)+(20*0.9);
    }
    printf("la facture %.2f DH",f);
    
    return 0;
}