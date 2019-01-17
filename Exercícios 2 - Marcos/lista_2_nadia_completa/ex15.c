#include <stdio.h>
#include <stdlib.h>

main()
{
    int n=0, pessoas75=0, pessoasMedia=0;
    float peso=0, media=0, maiorPeso=-1, menorPeso=-1;

    do{
        system("clear");
        printf("Digite a quantidade de pessoas que você deseja entrar com o peso: ");
        scanf("%d", &n);
        getchar();
    } while(n <= 0);

    while(n != 0){
        printf("Digite o peso: ");
        scanf("%f", &peso);

        if((peso >= 70) && (peso <= 85.5)){
            media += peso;
            pessoasMedia++;
        }

        if(peso > 75)
            pessoas75++;

        if(menorPeso == -1){
            maiorPeso = menorPeso = peso;
        } else if(peso < menorPeso){
            menorPeso = peso;
        } else if(peso > maiorPeso){
            maiorPeso = peso;
        }

        n--;
    }

    media = media/pessoasMedia;

    printf("\n\n\nO maior peso digitado e %.2f e o menor e %.2f", maiorPeso, menorPeso);
    printf("\nA media dos pesos das pessoas entre 70 e 85.5 quilos e de %.2f quilos", media);
    printf("\nForam inseridas %d pessoas com mais que 75 quilos.\n\n\n", pessoas75);
}
