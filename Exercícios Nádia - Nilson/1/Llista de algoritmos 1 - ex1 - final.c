#include <stdio.h>
#include <stdlib.h>

/**************** Lista 1 Algoritmos *******************************/

int main()
{
    int a,b, diferenca;
    printf("Entre com um numero\n");
    scanf("%d",&a);
    printf("Entre com outro numero\n");
    scanf("%d",&b);
    while (b==a)
    {
        printf ("o segundo numero e igual ao primeiro, por favor digite outro numero\n");
        scanf("%d", &b);
    }
    if (a>b)
    {
        diferenca = a-b;
        printf("o valor da diferenca = %d\n", diferenca);
    }
    else (b>a);
    {
        diferenca = b-a;
        printf("o valor da diferenca = %d\n", diferenca);
    }
    system ("pause");
}
