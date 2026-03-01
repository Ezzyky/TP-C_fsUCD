#include <stdio.h>
int main()
{
    char A[100],B[100],C[100];
    printf ("Entrez 3 noms:");
    scanf("%S %S %S",&A,&B,&C);
    if (A<B && B<C){
        printf ("s ils sont ranges dans l ordre alphabetique.");
    }
    else printf("s ils sont ranges dans l ordre alphabetique.");

return 0;
}