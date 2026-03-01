#include <stdio.h>
int n,i,s=0;
int main (){
    printf ("entrez un nombre :");
    scanf ("%d",&n);
    for (i=1;i<n;i++)
    {
        if (n%i==0){
            s+=i;
        }
    }
    if (s==n) 
    {
        printf("le nombre est parfait.\n");
    }
    else printf("non parfait");
    return 0;
}