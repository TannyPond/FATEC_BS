#include <stdio.h>
#include <stdlib.h>

void main()
{
    int opcao = 1;

    while(opcao >= 1){
        system("clear");
        printf("Itens do exercicio 1:\n");
        printf("1 - Item 1\n");
        printf("2 - Item 2\n");
        printf("3 - Item 3\n");
        printf("0 - Sair\n");
        printf("Digite o item do exrcicio que deseja executar: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
            case 1:
                item1();
                break;
            case 2:
                item2();
                break;
            case 3:
                item3();
                break;
            case 0:
                exit(0);
            default:
                printf("Você escolheu uma opção invalida. Tecle qualquer tecla para continuar...");
                getchar();
        }
    }
}

void item1()
{
    int k, count, sequencia;

    do{
        system("clear");
        printf("Digite o número de vezes que você deseja para a sequencia: ");
        scanf("%d", &k);
        getchar();
    } while(k <= 0);

    printf("\nSequencia 1: ");

    sequencia = 0;
    for(count=1; count <= k; count++)
    {
        sequencia += 3;
        printf("%d, ", sequencia);
    }
    printf("\n\n\n\n");
    getchar();
}

void item2()
{
    int num1=0, num2=0, k, cont=0;

    do{
        system("clear");
        printf("Digite quantas vezes quer que repita a contagem: ");
        scanf("%d", &k);
        getchar();

        if(k <= 0){
            printf("\nO número deve ser maior que zero.");
            getchar();
            system("clear");
        }
    } while(k<=0);

    do{
        num1 += 2;
        num2 += 8;
        printf("%d/%d; ", num1, num2);
        cont++;
    } while(cont != k);

    printf("\n\n\n\n");
    getchar();
}

void item3()
{
    int num=0, k=0, cont=0;

    while(k<=0){
        system("clear");
        printf("Digite quantas vezes quer que repita a contagem: ");
        scanf("%d", &k);
        getchar();

        if(k <= 0){
            printf("O número deve ser maior que zero.");
            getchar();
            system("clear");
        }
    }
    printf("\n\n\n");
    while(cont != k){
        num = num+3;
        printf("%d; ", num);
        cont++;
    }
    printf("\n\n\n\n");
    getchar();
}
