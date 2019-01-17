include <stdio.h>
include <math.h>

int main(void)
{
int K,NUM=2,CONT=0, DIVS=2, NUM_INT=0;
    do
    {
    printf("Digite numero maior que Zero:\n");
    scanf("%d", &K);
        if(K<=0)
        {
        printf("Numero Invalido. Tente Novamente.");
        }
    } while(K<=0);
    do
        {
        NUM=POW(NUM,2);
        DIVS=DIVS*4;
        printf("%d/%d\n", NUM, DIVS);
        NUM_INT=NUM_INT+1;
        printf("%d\n", NUM_INT);
        CONT=CONT+1;
        } while(CONT!=K);
}
