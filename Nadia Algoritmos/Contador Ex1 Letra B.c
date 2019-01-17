#define Ex1b
#include <stdio.h>

/*Contador 1 Letra 2*/

#ifdef Ex1b

int main (void)
{
    int NUM=0, CONT=0, x=1, k;

    do
        {
            printf("Digite um numero maior que Zero:  \n");
            scanf("%d", &k);
            if(k<=0)
                {
                    printf("Numero Invalido \n");
                }
        }
    while(k<=0);

        do
        {
            NUM=NUM+4;
            printf("%d/%d\n", x,NUM);
            CONT=CONT+1;
        }
        while(CONT!=k);
}
#endif

/*Contador Ex 1c*/

#ifdef Ex1c

int main(void)



#endif
