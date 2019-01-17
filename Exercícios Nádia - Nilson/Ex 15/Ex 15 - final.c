#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/******************* Ex 15 *******************/

float main()
{
    float num1,num2,num3,num4,soma;

    do
    {
    printf("entre com um numero maior que 10 e menor 25\n");
    scanf("%f",&num1);
    while (num1<=10 || num1>=25)
    {
        printf("numero invalido, repita um numero maior que 10 e menor que 25\n");
        scanf("%f",&num1);
    }
    printf("entre com outro numero maior ou igual a zero\n");
    scanf("%f",&num2);
    while (num2<0)
    {
        printf("numero invalido, repita um valor maior ou igual a zero\n");
        scanf("%f",&num2);
    }
    num3=num1+num2;
    printf("a soma dos dois primeiros numeros e = %f\n",num3);
    num4=num1*num2*num3;
    printf("o produto dos tres numeros e = %f\n",num4);
    soma=pow(num1,2)+pow(num2,2)+pow(num3,2)+pow(num4,2);
    printf("a soma dos quadrados dos quatro numeros e = %f\n",soma);
    if (soma<50000)
    {
        printf("valor inferior a 50000, insira novos dados\n");
    }
    else
    {
    printf("parabens resultado superior a 50000\n");
    }
    }
    while (soma<50000);

}
