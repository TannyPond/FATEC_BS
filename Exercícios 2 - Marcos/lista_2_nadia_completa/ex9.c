#include <stdio.h>
#include <stdlib.h>

main()
{
    int k=0, quant=0;
    float num;

    while(k<=0){
        system("clear");
        printf("Digite com quantos números você deseja a sequência: ");
        scanf("%d", &k);
    }

    while (k != 0){
        printf("Digite um numero: ");
        scanf("%f", &num);
        if((num >= (float)-23) && (num <= (float)-16)){
            quant++;
        }
        k--;
    }

    printf("Foram digitados %d numeros negativos entre -23 e -16", quant);
}
