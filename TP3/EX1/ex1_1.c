#include <stdio.h>
int k=1,nb;
int main (){
    scanf ("%d",&nb);
    
    while (nb+1>k)
    {
        printf("%d\n",k);
        k++;
    }
    return 0;
}