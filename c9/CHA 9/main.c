#include <stdio.h>


int main()
{
    float moy;
    printf("entre la moyenne:\n");
    scanf("%f",&moy);

    printf("la moyenne est: %f\n",moy);

    if(10<=moy && moy<12){
        printf("\n la mention est: passable");
    }
    else if(12<=moy  && moy<14){
            printf("\n la mention est: assez bien");
    }
    else if(14<=moy && moy<16){
            printf("\n la mention est: bien");
    }
    else if(moy>=16){
        printf("\n la mention est: tres bien");
    }

    return 0;
}
