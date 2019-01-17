#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/******************* Ex 14 *******************/

int main()
{
    int num1,num2,num3,prod;
    printf("entre com um numero maior que 100\n");
    scanf("%d",&num1);
    while (num1<=100)
    {
        printf("digitou um numero invalido, repita um numero maior que 100\n");
        scanf("%d",&num1);
    }
    printf("entre com um numero menor que 50\n");
    scanf("%d",&num2);
    while (num2>=50)
    {
        printf("digitou um numero invalido, repita um numero menor que 50\n");
        scanf("%d",&num2);
    }
    num3=num1+num2;
    printf("a soma dos dois primeiros numeros e = %d\n",num3);
    prod=num1*num2*num3;
    printf("e o produto dos tres numeros e =%d",prod);
}

