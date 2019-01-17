#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/******************* Ex 19 *******************/

float main()
{
    float alt,peso,h,m;
    char sexo;

    do
    {
    printf("entre com a altura\n");
    scanf("%f",&alt);
        if (alt<=0)
        {
            printf("altura invalida, digite novamente sua altura\n");
        }
    }
    while (alt<=0);
    printf("digite a tecla H se voce for homem ou M se for mulher\n");
    scanf("%s",&sexo);
    if (sexo == 'h')
    {
        printf("Voce escolheu a opcao para o sexo masculino\n");
        peso=((72*alt)-58);
        printf("O seu peso ideal e= %f\n",peso);
    }
    if (sexo=='m')
    {
        printf("Voce escolheu a opcao para o sexo feminino\n");
        peso=(62.1*alt)-44.7;
        printf("O seu peso ideal e= %f\n",peso);
    }
    getch();
}
