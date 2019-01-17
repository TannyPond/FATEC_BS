#include <stdio.h>
#include <math.h>

/********************* Ex 5 ***********************/

float main()
{
    float a,b,c,r,t;
    printf("valor do deposito\n");
    scanf("%f",&a);
    while (a<=0)
    {
        printf("valor invalido, digite novamente\n");
        scanf("%f",&a);
    }
    printf("valor da taxa de juros\n");
    scanf("%f",&b);
    while (b<0)
    {
        printf("valor invalido, digite novamente\n");
        scanf("%f",&b);
    }
    printf("valor do periodo de aplicacao em mes\n");
    scanf("%f",&c);
    while (c<0)
    {
        printf("valor invalido, digite novamente\n");
        scanf("%f",&c);
    }
    r=a*b*c/100;
    printf("o valor do rendimento e = %f",r);
    t=a+r;
    printf("o valor total depois do rendimento e = %f",t);
}
