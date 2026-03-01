#include <stdio.h>
int n;
int main (){
    do{
        printf("entrez un nombre : ");
        scanf("%d",&n);
        if (n>20) printf("Plus grand !");
        if (n<0) printf("Plus petit !");
    if(n>=0 && n<=20) printf("bravo !!");
    }while (n<0 || n>20);
        
    return 0;
}