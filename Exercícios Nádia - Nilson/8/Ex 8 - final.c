#include <stdio.h>
#include <math.h>

/********************* Ex 8 ***********************/

int main()
{
    int a,b,c;
    printf("entre com um numero maior que zero\n");
    scanf("%d",&a);
    while (a<=0)
    {
        printf("numero invalido, por favor digite numero maior que zero\n");
        scanf("%d",&a);
    }
    printf("entre com um numero menor que zero\n");
    scanf("%d",&b);
    while (b>=0)
    {
        printf("numero invalido, por favor digite numero maior que zero\n");
        scanf("%d",&b);
    }
    c=a*b;
    printf("o produto dos dois numeros e =%d\n",c);

}
