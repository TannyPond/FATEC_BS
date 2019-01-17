#include<stdio.h>

main()
{
    int k, idade, cont=0, total=0;

    do
    {
        printf("Digite o numero de pessoas \n");
        scanf("%d", &k);
        if (k<=0)
        {
        printf("Numero Invalido \n");
        }
    }
    while (k<=0);

    do
    {
    printf("Digite a idade \n");
    scanf("%d", &idade);
    total=total+idade;
    cont=cont+1;
    }
    while(cont!=k);

     cprintf("O total da idade eh %d \n", total);
}
