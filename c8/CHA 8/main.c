#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("donner un nombre\n");
    scanf("%d",&a);
    printf("le nombre est: %d",a);

    if (a<0){
        printf("\nle nombre %d est:negatif",a);
    }
    else if(a==0){
            printf("\nle nombre %d est:nul",a);
    }
    else if(a>0){
        printf("\nle nombre %d est:positif",a);
    }
    return 0;
}
