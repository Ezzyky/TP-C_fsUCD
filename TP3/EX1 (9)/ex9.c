#include <stdio.h>
int n,p=0,d=0,s;
int main (){
    do
    {
        printf ("entrez n nombre :");
        scanf ("%d",&n);
            if (n%2==0) p+=1;
            if (n%2!=0) d+=1;
    }while (n>0);
    s=p+d;
    printf("pair :%d\nimpair :%d\ns :%d\n",p,d,s);
    return 0;
}