/* Ex2*/

#include <stdio.h>
#include <conio.h>

int main(void)

{
    float A, B, S;

        printf("Digite um numero qualquer  \n");
        scanf("%f", &A);

        do
            {
                printf("Digite um numero maior que Zero  \n");
                scanf("%f", &B);
                if(B==0)
                printf("Numero Invalido \n \n");
            }
        while (B==0);
            S=A/B;
            printf("O resultado %f \n", S);
            scanf("%f", &S);
            printf("Aperte qualquer tecla para sair");
            return(0);
            getch();
}
