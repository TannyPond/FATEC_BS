#include <stdio.h>
#include <stdlib.h>

main()
{
    int k=0, quantPositivosDiv3=0;
    int maiorNum=0, num, quantApareceMaiorNum=0;
    float somaPositivos=0, quantPositivos=0;

    do{
        system("clear");
        printf("Digite o numero de termos que deseja entrar: ");
        scanf("%d", &k);
        getchar();
    } while(k <= 0);

    while(k != 0){
        printf("Digite um numero: ");
        scanf("%d", &num);
        getchar();

        if(num > 0){
            somaPositivos += num;
            quantPositivos++;
            if((num%3) == 0){
                quantPositivosDiv3++;
            }
        }

        if(maiorNum < num){
            maiorNum = num;
            quantApareceMaiorNum = 1;
        } else if(maiorNum == num){
            quantApareceMaiorNum++;
        }

        k--;
    }
    printf("\n\n\nForam digitados %d numeros positivos divisiveis por 3\n", quantPositivosDiv3);
    printf("A media dos numeros positivos e: %.2f\n", (somaPositivos/quantPositivos));
    printf("O maior numero digitado foi %d, esse numero foi digitado %d vezes.\n\n", maiorNum, quantApareceMaiorNum);
}
