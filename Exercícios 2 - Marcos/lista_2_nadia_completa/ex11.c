#include <stdio.h>
#include <stdlib.h>

main()
{
    int k=0, n=0, positivos=0;
    float somaImpares=0, quantidadeImpares=0;

    while(k<=0){
        system("clear");
        printf("Digite a quantidade de termos com a qual deseja entrar: ");
        scanf("%d", &k);
    }

    while (k != 0){
        printf("Digite um numero: ");
        scanf("%d", &n);
        if((n%2)!=0){
            somaImpares += n;
            quantidadeImpares++;
        }
        if(n>0)
            positivos++;
        k--;
    }

    printf("A quantidade de nnumeros positivos foi %d. E a media dos numeros impares e %f",
            positivos, somaImpares/quantidadeImpares);
}
