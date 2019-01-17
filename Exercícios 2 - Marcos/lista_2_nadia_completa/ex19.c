#include <stdio.h>
#include <stdlib.h>

main()
{
    int k=0, cont, fat=1;

    do{
        system("clear");
        printf("Digite um numero maior ou igual a zero para calcular o fatorial: ");
        scanf("%d", &k);
        getchar();
    } while(k <= 0);

    if((k == 0) || (k == 1)){
        fat = 1;
    } else{
        for (cont=1; cont <= k; cont++){
            fat *= cont;
        }
    }

    printf("\n\nO fatorial de %d e %d\n\n", k, fat);
}
