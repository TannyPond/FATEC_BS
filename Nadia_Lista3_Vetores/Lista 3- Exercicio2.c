#include<stdio.h>

main()
{
    int A[12],x;
    int cont=0;

        for(x=0;x<12;x++)
        {
            do
            {
            printf("Digite 12 numeros positivos: \n");
            scanf("%d", &A[x]);

                if(A[x]<=0)
                {
                printf("Numero invalido \n");
                }

            }
            while(A[x]<=0);
        }
            printf("Os valores maiores que 121 sao: \n");

            for(x=0;x<12;x++)
            {
                if (A[x]>=121)
                {
                printf("%d \n", A[x]);
                }

            }
}

