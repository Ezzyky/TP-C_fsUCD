#include <stdio.h>
int A=3,B=5;
char C='9';
int main()
{
    printf("A=%d B=%d\n",A,B);
    A=B;
    printf("A=%d B=%d C=%c\n",A,B,C);
    getchar();
    return 0;
}