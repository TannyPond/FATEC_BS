#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**************** ex2 *******************************/

int main()
{
    int a,b,c,soma;
    printf("entre com um numero entre 0 e 20\n");
    scanf("%d",&a);
    while (a<=0 || a>=20)
    {
        printf("numero invalido, por favor digite novamente\n");
        scanf("%d",&a);
    }
    printf("entre com um numero negativo\n");
    scanf("%d",&b);
    while (b>=0)
    {
        printf("numero invalido, por favor digite novamente\n");
        scanf("%d",&b);
    }
    printf("entre com um qualquer\n");
    scanf("%d",&c);
    soma = pow(a,2) + pow(b,2) + pow(c,2);
    printf("o valor da soma dos quadrados dos numeros e = %d\n", soma);
    while (soma<1000)
    {
        printf("valor menor que 1000, entre com 3 novos numeros\n");
        printf("entre com um numero entre 0 e 20\n");
    scanf("%d",&a);
    while (a<=0 || a>=20)
    {
        printf("numero invalido, por favor digite novamente\n");
        scanf("%d",&a);
    }
    printf("entre com um numero negativo\n");
    scanf("%d",&b);
    while (b>=0)
    {
        printf("numero invalido, por favor digite novamente\n");
        scanf("%d",&b);
    }
    printf("entre com um qualquer\n");
    scanf("%d",&c);
    soma = pow(a,2) + pow(b,2) + pow(c,2);
    printf("o valor da soma dos quadrados dos numeros e = %d\n", soma);
    }
}
