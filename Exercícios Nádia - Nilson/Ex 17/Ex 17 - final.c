#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/******************* Ex 17 *******************/

int main()
{
    int a,b,c;

    printf("entre com o valor do lado AB de um triangulo\n");
    scanf("%d",&a);
    while (a<=0)
    {
        printf("valor invalido, o valor nao pode ser negativo e nem igual a zero\n");
        scanf("%d",&a);
    }
    printf("entre com o valor do lado BC de um triangulo\n");
    scanf("%d",&b);
    while (b<=0)
    {
        printf("valor invalido, o valor nao pode ser negativo e nem igual a zero\n");
        scanf("%d",&b);
    }
    printf("entre com o valor do lado AC de um triangulo\n");
    scanf("%d",&c);
    while (c<=0)
    {
        printf("valor invalido, o valor nao pode ser negativo e nem igual a zero\n");
        scanf("%d",&c);
    }
    if ((a<b+c) && (b<a+c) && (c<a+b))
    {
        printf("esses valores formam um triangulo\n");
    if ((a==b)&&(b==c))
    {
        printf("trata-se de um triangulo equilatero");
    }
    if ((b!=c)&&(a==c)||(a!=c)&&(b==a))
    {
        printf("trata-se de um triangulo isosceles\n");
    }
    if ((a!=b) && (b!=c) && (a!=c))
        {
            printf("trata-se de um triangulo escaleno\n");
        }
    }
    else
    {
       printf("esses valores nao formam um triangulo\n");
    }

}
