#include <stdio.h>
main()
{
    int k=0,cont=0,num=0;
    while (k<=0)
    {
        printf("Digite a quantidade de termos da sequencia ");
        scanf("%d",&k);
        if (k<=0)
        {
            printf("Quantidade Inválida \n");
        }
    }
    for(cont=1;cont<=k; cont++)
    {
        num=num+2;
        printf("%d  \n",num);
    }
}
