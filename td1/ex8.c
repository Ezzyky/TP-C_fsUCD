#include <stdio.h>
int x=12 ,y=5;
int main (){
    printf ("avant x=%d y=%d\n",x,y);
    x+=y;
    y=x-y;
    x-=y;
    printf ("appre x=%d y=%d\n",x,y);
    getchar();
    return 0;
}
