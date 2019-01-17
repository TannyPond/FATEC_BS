#include<stdio.h>

main()
{
int k, x=0, y=0;
int A[x], B[x];

    do
    {
        printf("Digite o numero de termos:  \n");
        scanf("%d", &k);
    }
    while(k<4 || k>20);


    for(x=0;x<k;x++)
        {
            printf("Digite valores quaisquer: \n");
            scanf("%d", &A[x]);
        }
            y=k-1;
            for(x=0;x<k;x++)
            {
                B[x]=A[y];
                y--;
            }
                for(x=0; x<k; x++)
                {
                    printf("%d\n", A[x]);
                }
                    for(x=0; x<k; x++)
                    {
                        printf("%d\n", B[x]);
                    }
}
