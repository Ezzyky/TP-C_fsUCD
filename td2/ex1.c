#include <stdio.h>
int x;
int main ()
{
    while (1)
    {
        printf("entrez un nombre :");
        scanf("%d",&x);
        if (x%2==0)
        {
            printf("le nombre est paire.\n");
        }
        else
        {
        printf("le nombre est impaire.\n");
        }
    }
    return 0;
}