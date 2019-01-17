#include <stdio.h>
#include <stdlib.h>
/*
Leia quinze elementos de um vetor. Após a alimentação mostre todos os elementos
armazenados no vetor.
*/
int main()
{
    int vetor[15];
    int i;

    for(i=0;i<15;i++)
    {
        printf("Digite o %do numero ",i+1);
        scanf("%d",&vetor[i]);
    }

    for(i=0;i<15;i++)
    {
        printf("O %do numero digitado foi: %d \n",i+1,vetor[i]);
    }

    return 0;
}
