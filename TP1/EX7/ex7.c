#include <stdio.h>
int A , B,C,D;
int main()
{
    printf ("entrez A , B et ,C:\n");
    scanf("%d %d %d",&A,&B,&C);
    printf ("avant A=%d B=%d c=%d\n",A,B,C);
    D=C;
    C=B;
    B=A;
    A=D;
    printf ("appre A=%d B=%d C=%d\n",A,B,C);
    getchar ();

    return 0;
}
