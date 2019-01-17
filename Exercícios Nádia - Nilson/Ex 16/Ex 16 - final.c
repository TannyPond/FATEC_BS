#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/******************* Ex 16 *******************/

float main()
{
    float a,b,c,x1,x2,delta;

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
        printf("a equacao nao possui raizes reais\n");
    }
    else
    {
        printf("delta = %f\n",delta);
        x1=(-b+sqrt(delta))/(2*a);
        printf("x1 = %f\n",x1);
        x2=(-b-sqrt(delta))/(2*a);
        printf("x2 = %f\n",x2);
    }
}
