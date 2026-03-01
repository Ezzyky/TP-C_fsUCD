#include <stdio.h>
int A=3,B=10,C;
int main ()
{
    printf ("A=%d B=%d\n",A,B);
    C=A+B;
    B=A+B;
    A=C;
    printf ("A=%d B=%d C=%d\n",A,B,C);
    return 0;
}