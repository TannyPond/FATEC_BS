#include <stdio.h>
#include <stdlib.h>

main()
{
    int k=0, numAnt=1, num=1, soma=0, aux=0;

    do{
        system("clear");
        printf("Digite a quantidade de termos que deseja entrar: ");
        scanf("%d", &k);
        getchar();
    } while(k <= 0);

    printf("\n%d, %d, ", numAnt, num);

    while(k != 0){
        aux = num;
        num += numAnt;
        numAnt = aux;

        printf("%d, ", num);

        if((num%3) == 0)
            soma += num;

        k--;
    }

    printf("\nA somatoria dos numeros divisiveis por tres e %d.\n\n\n", soma);
}
