#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,som,tri,sou;
    printf("donner les valeurs de a et b: \n");
    scanf("%d %d",&a,&b);

    som=a+b;
    sou=a-b;
    tri=som*3;

    printf("la somme est: %d \n la soustraction est:%d",som,sou);

    if(sou==0){
        printf("\n les deux nombres sont identiques alors voici le triple de leur somme: %d",tri);
    }

    return 0;
}
