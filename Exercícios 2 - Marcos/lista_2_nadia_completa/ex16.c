#include <stdio.h>
#include <stdlib.h>

main()
{
    int k=0, num, quantImpares=0;
    float somaPares=0, quantPares=0;

    do{
        system("clear");
        printf("Digite a quantidade de numeros que deseja entrar: ");
        scanf("%d", &k);
        getchar();
    } while(k <= 0);

    while(k != 0){
        printf("Digite um numero: ");
        scanf("%d", &num);
        getchar();
        if((num%2) != 0){
            quantImpares++;
        } else{
            somaPares += num;
            quantPares++;
        }
        k--;
    }
    printf("\n\nA quantidade de numeros impares degitados e %d\n", quantImpares);
    printf("A media dos pares e %f\n\n\n", somaPares/quantPares);
}
