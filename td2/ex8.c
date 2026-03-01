#include <stdio.h>
int main ()
{
    int h,m;
    printf ("Entrez l heure et les minutes.\nl heure= ");
    scanf("%d",&h);
    printf ("les minutes= ");
    scanf("%d",&m);
    
    if (h>24 || m>60) printf ("erreur");
    printf("(%d:%d)\n",h,m);
    if (h<24 && m<58){
        m+=1;
        printf(" l heure qu il sera une minute plus tard.(%d:%d)",h,m);
    }
    
    else if (m==59)
    {
        h+=1;
            printf(" l heure qu il sera une minute plus tard.(%d:00)",h);
            if (h==24 && m==59)
            {
                printf(" l heure qu il sera une minute plus tard.(00:00)");
            }
    }


    return 0;
}