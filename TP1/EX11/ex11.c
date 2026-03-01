#include <stdio.h>
#include <string.h>
char txt[20];
int a;
int main (){
    printf("entrez une chaine de caractre :\n");
    scanf("%s",txt);
    a=strlen(txt);
    printf("%d",a);
    return 0;
}