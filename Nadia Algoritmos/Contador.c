include <stdio.h>

int main(void)
{
int K,NUM=0,CONT=0;
    do
    {
    printf("Digite numero maior que Zero: ");
    scanf("%d", &K);
        if(K<=0)
        {
        printf("Numero Invalido. Tente Novamente.");
        }
    }
    while(K<=0);
    do
        {
        NUM=NUM+3;
        printf("%d", NUM);
        CONT=CONT+1;
        }
    while(CONT!=K);
}
