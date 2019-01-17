#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    int k=0, gerador=2, numerador, denominador=0;
    do{
        system("clear");
        printf("Digite a quantidade de termos que deseja na sequencia: ");
        scanf("%d", &k);
        getchar();
    } while(k <= 0);

    while(k != 0){
        numerador = pow(gerador, 2);
        denominador += 8;
        gerador += 2;

        if((numerador % denominador) == 0){
            printf("%d, ", numerador/denominador);
        } else{
            printf("%d/%d, ", numerador, denominador);
        }

        k--;
    }
    printf("\n\n\n");
}
