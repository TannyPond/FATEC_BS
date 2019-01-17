#include <stdio.h>

main()
{
int K, NUM=0, CONT=0;
    while (K<=0)
    {
    printf("Digite numero maior que Zero: ");
    scanf("%d", &K);
        if(K<=0)
        {
        printf("Numero Invalido. Tente Novamente.");
        }
    }
    while(CONT!=K);
        {NUM=NUM+3;
        printf("%d", NUM);
        CONT=CONT+1;
        }
    while(CONT!=K);
}
