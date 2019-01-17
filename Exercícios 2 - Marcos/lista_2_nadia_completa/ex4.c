#include <stdio.h>
#include <stdlib.h>

main()
{
    int k, num, zeros=0, paresNegativos=0;

    do{
        system("clear");
        printf("Digite a quandidade de numeros que você deseja entrar: ");
        scanf("%d", &k);
    }while(k<=0);

    while(k != 0){
        printf("Digite um número qualquer: ");
        scanf("%d", &num);
        if(((num%2)==0) && (num<0))
            paresNegativos++;
        if(num == 0)
            zeros++;
        k--;
    }

    printf("\nForam inseridos %d números negativos pares.\n\n\n", paresNegativos);
    printf("\nForam inseridos %d zeros.\n\n\n", zeros);
}
