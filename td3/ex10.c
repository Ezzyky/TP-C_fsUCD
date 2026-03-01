#include <stdio.h>
char n,b[255];
int i=0;

int main (){
    while (1){
        printf ("doner une char: ");
        scanf(" %c", &n);
        if (n == '.') break;
        if(n =='0') 
            n =' ';
        b[i]=n;
        i++;
    }
    b[i] = '\0';
    printf("%s",b);
    
    return 0;
}