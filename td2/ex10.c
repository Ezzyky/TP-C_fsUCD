#include <stdio.h>
#include <string.h>

int main ()
{
    int a,b,s,m,sou;
    float d;
    char op[20];
    while(1)
    {
        //a
            printf ("entrez deux valeur .\na= ");
            scanf("%d",&a);
        //b
            printf ("b= ");
            scanf("%d",&b);
        // op
            printf("choasier un operation (+ * - /).");
            scanf("%s",op);
        //analyse
        if (strcmp(op,"+") ==0)
        {
            s=a+b;
            printf("somme=%d\n",s);
        }

        else if (strcmp(op,"-") ==0)
        {
        sou=a-b;
        printf("soustraction=%d\n",sou);
        }

        else if (strcmp(op,"*") ==0)
        {
            m=a*b;
            printf("multiplication=%d\n",m);
        }
        else if (strcmp(op,"/") ==0)
        {
            if(b!=0)
            {
                d=(float)a/b;
                printf("division=%.2f\n",d);
            }
            else
            {
                printf("NAN");
            }

            

        }
        else
        {
            printf("Opération non reconnue\n");
        }
        
        printf("\n");
    }
    
    return 0;
}