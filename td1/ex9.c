#include <stdio.h>
#include <stdbool.h>
int A=30;
float C,B;
char D[]="Amine";
bool E;
int main (){
    B=A*2;
    printf("B=%f\n",B);
    C=(B+A)/4;
    E=(A>40 || C<B);
    printf("les valeurs obtenues sont : A=%d B=%F C=%f D=%s E=%d ",A,B,C,D,E);

    getchar ();
    return 0;
}