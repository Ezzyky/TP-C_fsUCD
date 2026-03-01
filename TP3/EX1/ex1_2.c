#include <stdio.h>
int k=1,nb;
int main (){
    scanf ("%d",&nb);
    do
    {
        printf("%d\n",k);
        k++;
    } while (nb+1>k);
    
    return 0;
}