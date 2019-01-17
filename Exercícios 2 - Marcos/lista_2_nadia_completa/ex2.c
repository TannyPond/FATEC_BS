#include <stdio.h>
#include <stdlib.h>

main()
{
    int k, num, positivo=0;

    do{
        system("clear");
        printf("Digite a quandidade de numeros que você deseja entrar: ");
        scanf("%d", &k);
    }while(k<=0);

    while(k != 0){
        printf("Digite um número qualquer: ");
        scanf("%d", &num);
        if(num >= 0)
            positivo++;
        k--;
    }

    printf("\nForam inseridos %d números positivos.\n\n\n", positivo);
}
