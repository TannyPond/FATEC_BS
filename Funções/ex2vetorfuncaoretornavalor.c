#include <stdio.h>
float notas[5];
int x;
int nmat[5];
float media();
cadastro()
{
    for (x=0; x<5; x++)
    {
        printf("Digite o número de matrícula \n");
        scanf("%d",&nmat[x]);
        do
        {
            printf("Digite a nota \n");
            scanf("%f",&notas[x]);
            if (notas[x]<0 || notas[x] >10)
                printf("Nota Inválida \n");
        }
        while (notas[x]<0 || notas[x] >10);


    }
}
float media()
{
    float soma;
    soma=0;
    for (x=0; x<5; x++)
    {
        soma=soma+notas[x];
    }
    return(soma);
}
main()
{
    float somaf;

    cadastro();
media(somaf);
    printf("soma: %f \n");
    printf("\n");

}
