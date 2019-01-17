#include <stdio.h>
#include <math.h>

/********************* Ex 9 ***********************/

float main()
{
    float a,b,c,d;
    printf("preco de fabrica do carro\n");
    scanf("%f",&a);
    while (a<=0)
    {
        printf("valor invalido, repita o valor\n");
        scanf("%f",&a);
    }
    printf("digite percentual de lucro\n");
    scanf("%f",&b);
    b=a*b/100;
    printf("o lucro e =%f\n",b);
    printf("digite percentual de impostos\n");
    scanf("%f",&c);
    c=a*c/100;
    d=a+b+c;
    printf("o valor final do carro e =%f\n",d);
}
