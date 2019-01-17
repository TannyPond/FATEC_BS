#include <stdio.h>
#include <stdlib.h>

main()
{
    int k=0, num=0, div=0;

    do{
        system("clear");
        printf("Digite a quandidade de numeros que você deseja entrar: ");
        scanf("%d", &k);
    }while(k<=0);

    while(k != 0){
        printf("Digite um número: ");
        scanf("%f", &num);

        if(((num%2)==0) && ((num%3)==0))
            div++;
        k--;
    }
    printf("Foram digitados %d números divisiveis por 2 e 3 ao mesmo tempo.", div);
}
