#include <stdio.h>
main()
{
    int k,cont=0,num=0;
    do
    {
        printf("Digite a quantidade de termos da sequencia ");
        scanf("%d",&k);
        if (k<=0)
        {
            printf("Quantidade Inválida \n");
        }
    }while (k<=0);
    do
    {
        num=num+2;
        cont=cont+1;
        printf("%d  \n",num);
    }while(cont!=k);
}
