#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/******************* Ex 13 *******************/

float main()
{
    float a,b,c,d,med;
    printf("insira as notas do aluno\n");
    printf("insira a primeira nota\n");
    scanf("%f",&a);
    while (a<0 || a>10)
    {
        printf("nota invalida, repita o valor da nota de 0 a 10\n");
        scanf("%f",&a);
    }
    printf("insira a segunda nota\n");
    scanf("%f",&b);
    while (b<0 || b>10)
    {
        printf("nota invalida, repita o valor da nota de 0 a 10\n");
        scanf("%f",&b);
    }
    printf("insira a terceira nota\n");
    scanf("%f",&c);
    while (c<0 || c>10)
    {
        printf("nota invalida, repita o valor da nota de 0 a 10\n");
        scanf("%f",&c);
    }
    printf("insira a quarta nota\n");
    scanf("%f",&d);
    while (d<0 || d>10)
    {
        printf("nota invalida, repita o valor da nota de 0 a 10\n");
        scanf("%f",&d);
    }
    med=(a+b+c+d)/4;
    if (med>=5)
    {
        printf("o aluno foi aprovado com media =%f\n",med);
    }
    else
    {
        printf("o aluno foi reprovado com media =%f\n",med);
    }
}
