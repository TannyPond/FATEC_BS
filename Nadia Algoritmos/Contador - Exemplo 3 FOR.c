#include <stdio.h>

main()
{
int K=0, NUM=0, CONT;
    while (K<=0)
    {
    printf("Digite numero maior que Zero: ");
    scanf("%d", &K);
        if(K<=0)
        {
        printf("Numero Invalido. Tente Novamente.");
        }
    }
    for(CONT=0; CONT<K; CONT ++)
        {
        NUM=NUM+3;
        printf("%d\n", NUM);
        CONT=CONT+1;
        }
}
