#include <stdio.h>
#include <stdlib.h>

main()
{
    int k=0, numPar=0;

    while(k<=0){
        system("clear");
        printf("Digite com quantos números você deseja a sequência: ");
        scanf("%d", &k);
    }

    while (k != 0){
        numPar += 2;
        k--;
        printf("%d, ", numPar);
    }
}
