#include <stdio.h>
int main ()
{
    int Age;
    printf ("doner la age d un enfent\nAge= ");
    scanf("%d",&Age);
   
    if (6>=Age>8){
        printf ("categorie d un enfent a %d est 'puossin'",Age);
    }
    else if (8>=Age>10){
        printf ("categorie d un enfent a %d est 'Pupille'",Age);
    }
    else if (10>=Age>12){
        printf ("categorie d un enfent a %d est 'Minime'",Age);
    }
    else if (Age>=12){
        printf ("categorie d un enfent a %d est 'Cadet'",Age);
    }
    else printf("n pas un categorie");


    return 0;
}