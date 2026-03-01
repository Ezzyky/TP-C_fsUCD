#include <stdio.h>
int A=5,B=2;
int main ()
{
    printf ("A=%d B=%d\n",A,B);
    A=B;
    B=A;
    printf ("A=%d B=%d\n",A,B);
    getchar();
    return 0;
}