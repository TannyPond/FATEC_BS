/*Exercício 4*/

#include <stdio.h>
#include <conio.h>

main()

{
    float SB, B, D, SL;

    printf("Digite o Salario Base: \n",SB);
    scanf("%f",&SB);

    if (SB<=0)
        {
            printf("Nem relogio trabalha de graca \n",SB);
            scanf("%f",&SB);
        }

        else
                {
                    printf ("Digite Salario base positivo \n %2f",SB);
                    scanf("%f", &SB);
                    B=(SB*0.05);
                    D=(SB*0.07);
                    SL=(SB+B-D);
                }

            printf ("O Salario Liquido e: \n %f",&SL);

}
