#include <stdio.h>
int main (){
    char t[10];
    int ma=0,min=0,l=0,i;
    for (i=0;i<10;i++){
        printf("entre un char :\n");
        scanf(" %c",&t[i]);
        if (t[i]>='A' && t[i]<='Z' ) {ma++;
            l+=l;
        }
        else if (t[i]>='a' && t[i]<='z' ) min++;
    }
    printf("%d",ma);
    return 0;
}