#include <stdio.h>
long long s,h,m,d,j,rest,rest1;
int main(){
    printf("entrez un nombre en second :");
    scanf("%d",&s);
    j=s/(3600*24);
    rest = s%(3600*24);
    h=rest/3600;
    rest1=rest%3600;
    m=rest1/60;
    d=rest1%60;
    printf ("%lld(s) = %lld (j) %lld (h) %lld (m) %lld (s) ",s,j,h,m,d);
    return 0;
}