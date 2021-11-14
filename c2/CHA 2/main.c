#include <stdio.h>
#include <stdlib.h>

int main()

{
    float T,F;

    printf("donner la valeur de F : \n");
    scanf("%f",&F);

     T = (F-32)/1.8;

    printf("la temperature en C est: %f\n",T);

    if(T<0)
        printf("la sensation est: tres froide \n");

    else if (T<20)
        printf("la sensation est:  froide \n");

    else if(T>20)
        printf("la sensation est: chadude \n");

    else if(T>30)
        printf("la sensation est: tres chaude \n");

return 0;
}
