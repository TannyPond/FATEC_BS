#include <stdio.h>
#include <stdlib.h>

main()
{
    int k=0, n=0, maior=0;
    do{
        system("clear");
        printf("Digite a quantidade de termos que você deseja entrar: ");
        scanf("%d", &k);
        getchar();
    } while(k <= 0);

    while(k != 0){
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n > maior)
            maior = n;
        k--;
    }
    printf("O maior numero e %d\n\n\n", maior);
    getchar();
}
