#include <stdio.h>
int x,y,s,sou,m,mo;
float d;
char msg[20];
int main (){
    printf ("entrez x et y :\n");
    scanf("%d %d",&x,&y);
    s=x+y;
    sou=x-y;
    m=x*y;
    mo=x%y;
    if (y!=0){
        d=(float)x/y;
        sprintf(msg,"%f",d);
    }
    else{
        sprintf(msg ,"undef");
    }
    printf ("somme=%d soustraction=%d division=%s  multiplication =%d modulo=%d",s,sou,msg,m,mo);
    getchar ();
    return 0;
}