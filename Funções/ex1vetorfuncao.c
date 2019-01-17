#include <stdio.h>
float notas[5],soma;
int x;
int nmat[5];

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
  media()
{
    soma=0;
    for (x=0;x<5;x++)
    {
        soma=soma+notas[x];
}
     printf("soma: %f \n",soma);


}
exiba()
{
    printf("Exibição dos dados \n");
    for (x=0; x<5; x++)
    {
        printf("No.Mat %d  Nota: %.2f \n",nmat[x],notas[x]);
    }
}
main()
{
    cadastro();
     media();
    exiba();
}
