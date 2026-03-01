#include <stdio.h>
int A , B,C;
int main()
{
    printf ("entrez A et B :\n");
    scanf("%d %d",&A,&B);
    printf ("A=%d B=%d\n",A,B);
    C=A;
    A=B;
    B=C;
    printf ("A=%d B=%d\n",A,B);
    getchar ();

    return 0;
}
