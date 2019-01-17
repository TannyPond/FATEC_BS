#include <stdio.h>
#include <math.h>

/********************* Ex 10 ***********************/

float main()
{
    float a,b,c,d;
    printf("com um numero maior que 100\n");
    scanf("%f",&a);
    while (a<100)
    {
        printf("numero menor que 100, repita um numero maior ou igual a 100\n");
        scanf("%f",&a);
    }
    printf("com um outro numero maior que 100\n");
    scanf("%f",&b);
    while (b<100)
    {
        printf("numero menor que 100, repita um numero maior ou igual a 100\n");
        scanf("%f",&b);
    }
    printf("entre com um numero qualaquer\n");
    scanf("%f",&c);
    d=pow(a,2)*pow(b,2)*pow(c,2);
    printf("o produto de seus quadrados e =%f\n",d);
}
