#include <stdio.h>
int x,y;
int main ()
{
    // x
    printf("doner les cordonees de A.\nx= ");
    scanf("%d",&x);
    // y
    printf("y= ");
    scanf("%d",&y);
    //a
    printf("les cordonees de x(%d;%d).",x,y);
     
    if (x>0 && y>0)
    {
        printf(" dans la partie 'A' .");
        
    }
     if (x==0 && y==0)
    {
        printf("dans la partie 'O' .");
    }
     if (x<0 && y>0)
    {
        printf(" dans la partie 'B' .");
    }
     if (x<0 && y<0)
    {
        printf(" dans la partie 'C' .");
    }
    if (x>0 && y<0)
    {
        printf(" dans la partie 'D' .");
    }
    return 0;
}