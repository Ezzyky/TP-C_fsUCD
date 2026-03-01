#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char n[20];
int s,d=0;
int main() {
    while (1) {
        printf("donner un nombre ('Non' ou 'non' pour s'arrete) : ");
        scanf("%s", n);
        if (strcmp(n, "non") == 0 || strcmp(n, "Non") == 0)
        break;
        d=d+ atoi(n);
        s=s+1;
    }
printf("%d %d",s,d);
    return 0;
}
