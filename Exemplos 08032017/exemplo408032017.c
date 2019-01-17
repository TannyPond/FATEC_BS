#include <stdio.h>
main()
{
    int k=0,cont=0,num,soma=0;
    while (k<=0)
    {
        printf("Digite a quantidade de termos da sequencia ");
        scanf("%d",&k);
        if (k<=0)
        {
            printf("Quantidade Inválida \n");
        }
    }
    while (cont!=k)
    {
        printf("Digite um número qualquer \n");
        scanf("%d",&num);
        soma=soma+num;
        cont=cont+1;
    }
printf("A soma dos numeros digitados e %d \n",soma);
}

