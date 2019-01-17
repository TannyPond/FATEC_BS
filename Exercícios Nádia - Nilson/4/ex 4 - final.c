#include <stdio.h>
#include <math.h>

/********************* Ex 4 ***********************/

int main()
{
    float sal;
    printf("entre com o valor de seu salario\n");
    scanf("%f",&sal);
    if (sal<=0)
    {
        printf("valor incorreto, por favor digite novamente o seu salario\n");
        scanf("%f",&sal);
    }
    sal=sal+sal*0.05-sal*0.07;

    printf("o valor de seu salario a receber e = %f",sal);
}
