#include<stdio.h>

main()
{
    int x, k[15];

            for(x=0;x<15;x++)
            do
            {
                printf("Digite 15 numeros quaisquer: \n");
                scanf("%d", &k[x]);
            }
            while (x>=15);

        for(x=0;x<15;x++)
        {
        printf("Os valores digitados sao: %d \n", k[x]);
        }
}
