#include <stdio.h>
#include <stdlib.h>

main()
{
    int k, idade, somaIdade=0;

    do{
        system("clear");
        printf("Digite a quandidade de pessoas que deseja entrar: ");
        scanf("%d", &k);
    }while(k<=0);

    while(k != 0){
        printf("Digite a idade: ");
        scanf("%d", &idade);
        somaIdade += idade;
        k--;
    }

    printf("\nA soma das idades é %d anos.\n\n\n", somaIdade);
}
