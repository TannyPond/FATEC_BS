/*Exercício 1 da Lista*/

#include <stdio.h>
#include <conio.h>

int main(void)

{
    int A, B;

    printf("Digite um numero qualquer \n");
    scanf("%i", &A);
    printf("Digite um outro numero \n");
    scanf("%i", &B);

    if (A==B)
        printf("Os valores digitados sao iguais \n");

    else
        if (A>B)
            printf("A Diferenca e: %d \n", A-B);

        else
            printf("A Diferenca e: %d \n", B-A);

    return(0);
}


