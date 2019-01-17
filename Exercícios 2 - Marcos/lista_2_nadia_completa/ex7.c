#include <stdio.h>
#include <stdlib.h>

main()
{
    int n=0, pessoas=0;
    float peso=0, media=0, somaPeso=0;

    do{
        system("clear");
        printf("Digite a quandidade de pessoas que você deseja entrar com o peso: ");
        scanf("%d", &n);
    }while(n<=0);

    pessoas = n;

    do{
        printf("Digite o peso da pessoa:");
        scanf("%f", &peso);
        somaPeso += peso;
        n--;
    }while(n != 0);

    media = somaPeso/(float)pessoas;

    printf("A media de peso das %d pessoas que foram informadas para o sistema e %f quilos.", pessoas, media);
}
