#include <stdio.h>
#include <stdlib.h>

main()
{
    float produto=1, num=0;
    int x=0;

    while(produto <= 15){
        while(x <= 0){
            printf("Digite quantos termos deseja entrar: ");
            scanf("%d", &x);
            getchar();
        }

        while(x != 0){
            printf("Digite um número: ");
            scanf("%f", &num);
            getchar();
            produto *= num;
            x--;
        }
        printf("\nO valor do produto dos termos é %f", produto);
    }
}
