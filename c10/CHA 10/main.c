#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp;
    printf("entrer la temperature de l'eau \n");
    scanf("%f",&temp);
    printf("la temperature de l'eau est: %f\n",temp);

    if(temp<=0){
        printf("\n glace");
    }
    else if(0<temp && temp<=100){
        printf("eau");
    }
    else if(100<temp){
        printf("vapeur");
    }

    return 0;
}
