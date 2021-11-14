#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;
    printf("donner un nombre: \n");
    scanf("%d",&nbr);

    if (nbr<0){
               printf("le nombre %d est : negatif",nbr);
    }
    else if (nbr>0){
         printf("le nombre %d est:positif",nbr);
    }
    else {
         printf("le nombre %d est : nul",nbr);
    }
}
