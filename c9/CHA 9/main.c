#include <stdio.h>


int main()
{
    float moy;
    printf("entre la moyenne:\n");
    scanf("%f",&moy);

    printf("la moyenne est: %f\n",moy);

    if(moy>=10 && 12<moy){
        printf("\n la mention est: passable",moy);
    }
    else if(moy>=12  && moy<14){
            printf("\n la mention est: assez bien",moy);
    }
    else if(moy>=14 && moy<16){
            printf("\n la mention est: bien",moy);
    }
    else if(moy>=16){
        printf("\n la mention est: tres bien",moy);
    }

    return 0;
}
