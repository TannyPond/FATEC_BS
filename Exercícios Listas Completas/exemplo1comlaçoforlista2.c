#include <stdio.h>
main()
{
    int a=0,k,cont=0;
    system("cls");
   do
    {
        printf("Digite a quantidade de termos da sequencia que dever� ser maior que zero. \n");
        scanf("%d",&k);
        if (k<=0)
        {
            printf("Quantidade Inv�lida.\n");
        }
    }while (k<=0);
    printf("A sequencia ser� exibida:\n");
    for (cont=0;cont<k;cont++)
    {
        a=a+1;
        printf("%d  ",a);

    }
}


