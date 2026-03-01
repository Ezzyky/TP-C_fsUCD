#include <stdio.h>
int A=5,B;
int main() {
    B=A+4;
    printf("A=%d B=%d\n",A,B);
    A+=1;
    B=A-4;
    printf("A=%d B=%d\n",A,B);
    getchar();
    return 0;
}
