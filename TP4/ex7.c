#include <stdio.h>

int main ()
{
    int u[2], v[2];
    int s[2];        // vecteur somme
    int p_s = 0;     // produit scalaire
    int i, j;

    // saisie U
    for (i = 0; i < 2; i++){
        printf("Entrez U[%d] : ", i);
        scanf("%d", &u[i]);
    }

    // saisie V
    for (i = 0; i < 2; i++){
        printf("Entrez V[%d] : ", i);
        scanf("%d", &v[i]);
    }

    // vecteur somme + produit scalaire
    for (i = 0; i < 2; i++){
        s[i] = u[i] + v[i];
        p_s += u[i] * v[i];
    }

    // affichage vecteur somme
    printf("\nVecteur somme : (");
    for (i = 0; i < 2; i++){
        printf("%d ", s[i]);
    }
    printf(")\n");

    // produit cartésien
    printf("Produit cartesien U x V :\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("(%d , %d) ", u[i], v[j]);
        }
        printf("\n");
    }

    // produit scalaire
    printf("Produit scalaire = %d\n", p_s);

    return 0;
}
