#include <stdio.h>
#include <stdlib.h>

main()
{
    int k=0, N=0, contador;

    while(k<=0){
        system("clear");
        printf("Digite com quantos números você deseja a sequência: ");
        scanf("%d", &k);
    }

    for (k=k; k>0; k--){
        printf("%d, ", N);
        N += 1;
    }
}
