#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;
    float A;

    printf("donner un nombre: \n");
    scanf("%d",&nbr);

    A=nbr%2;

    if(A==0)
        printf("le nombre est pair");
    else if(A!=0)
        printf("le nombre est impair");


    return 0;
}
