#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
ÉcriRE un programme C qui permet de calculer les solutions possibles d’une équation 2ème degré.
 ax²+bx+c=0
*/
int main()
{
    int a,b,c;
    float delta,s,x1,x2;
    printf("entrer les valeurs de a,b et c :\n");
    scanf("%d %d %d",&a,&b,&c);

    delta=pow(b,2)-4*a*c;
    s=(-1*b)/2*a;
    x1=(-1*b)-(delta/(2*a));
    x2=(-1*b)+(delta/(2*a));

    printf("delta est: %f\n",delta);
    if (delta==0)
        printf("on a une seule solution",s);
    else if(delta <0)
        printf("cette equation n'a pas de solution");
    else if(delta>0)
        printf("on trouve deux solutions: %f et %f",x1,x2);
    return 0;
}
