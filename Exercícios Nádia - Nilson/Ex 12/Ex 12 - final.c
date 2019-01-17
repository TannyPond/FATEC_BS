#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/******************* Ex 12 *******************/

float main()
{
    float a,b,c,d,e;
    printf("entre com o valor de seu salario\n");
    scanf("%f",&a);
    while (a<=0)
    {
        printf("valor invalido, repita o valor de seu salario\n");
        scanf("%f",&a);
    }
    b=a;
    printf("salario sem reajuste = %f\n",b);
    if (a<800)
    {
        c=a*1.15;
        printf("salario com reajuste = %f\n",c);
    }
    else;
    if (a>=800 && a<=1000)
    {
        d=a*1.10;
        printf("salario com reajuste = %f\n",d);
    }
    else;
    if (a>1000)
    {
        e=a*1.05;
        printf("salario com reajuste = %f\n",e);
    }
    else;
}
