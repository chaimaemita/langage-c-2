#include <stdio.h>
#include <stdlib.h>

int main()
{
    int an,m,jrs,h,min,sec;

    printf("entrer l'année: \n");
    scanf("%d",&an);
        switch (a){
    case ('1'): printf("12mois");break;
    case ('2'): printf("365JOURS");break;
    case ('3'): printf("8760heurs");break;
    case('4'): printf("525600minutes");break;
    case('5'): printf("31536000SECONDES");break;}
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
