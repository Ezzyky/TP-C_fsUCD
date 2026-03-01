#include <stdio.h>
int main ()
{
    int i;
    int t[10];

    for (i=0;i<10;i++){
        printf ("entre ");
        scanf("%d",&t[i]);
    }
    for (i=9;i>=0;i--){
        printf ("%d\n",t[i]);
    }
    return 0;
}