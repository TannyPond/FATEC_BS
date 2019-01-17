#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/******************* Ex 18 *******************/

float main()
{
    float a,b,c,x1,x2,delta;

    do
    {
    printf("entre com um numero diferente de zero para o coeficiente 'a' de uma equacao \nde segundo grau\n");
    scanf("%f",&a);
    while (a==0)
    {
        printf("voce digitou zero, por favor digite um numero diferente de zero\n");
        scanf("%f",&a);
    }
    printf("entre com um numrero para o coeficente 'b' da equacao de segundo grau\n");
    scanf("%f",&b);
    printf("entre com um numrero para o coeficente 'c' da equacao de segundo grau\n");
    scanf("%f",&c);
    delta=pow(b,2)-4*a*c;
    if (delta<0)
    {
        printf("a equacao nao possui raizes reais DELTA menor que ZERO, entre com novos dados\n");
    }
    else
    {
        printf("delta = %f\n",delta);
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
    }

        if (x1==x2)
        {
            printf("as raizes reais x1 e x2 sao iguais = %f\n",x1);
        }
        else
        {
                printf("as raizes reais sao diferentes\n");
                printf("x1 = %f\n",x1);
                printf("x2 = %f\n",x2);
        }
    }
    while (delta<0);
}
