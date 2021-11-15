#include <stdio.h>
#include <stdlib.h>

int main()
{
    int an,m,jrs,h,min,sec;

    printf("entrer l'année: \n");
    scanf("%d",&an);
    if(an%4==0){
        m=12;
        jrs=365;
        h=24*jrs;
        min=60*h;
        sec=60*min;
        printf("l'année est normale: \n 1- %d mois\n 2- %d jours\n 3- %d heurs\n 4- %d minutes\n 5- %d secondes",m,jrs,h,min,sec);
    }
    else if(an%4!=0){

        m=12;
        jrs=366;
        h=24*jrs;
        min=60*h;
        sec=60*min;

        printf("l'année est bissextile : \n 1- %d mois\n 2- %d jours\n 3- %d heurs\n 4- %d minutes\n 5- %d secondes",m,jrs,h,min,sec);
    }
    return 0;
}
