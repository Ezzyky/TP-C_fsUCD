#include <stdio.h>
int i,n;
int main (){
    printf("entrez un nombre : ");
    scanf("%d",&n);
    for (i=n+1;i<=n+10;i++){
        printf("%d\n",i);
    }
    return 0;
}