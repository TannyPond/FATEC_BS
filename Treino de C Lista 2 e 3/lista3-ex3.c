
#include<stdio.h>

main()
{
    int x, y, k[10];

    printf("Digite 12 numeros quaisquer: \n");

    for(y=0;y<10;y++)
    {
        scanf("%d", &x);
        k[y]=x;
    }

    printf("Os valores maiores que 121 sao: \n");

    for(y=0;y<10;y++)
    {
        if(k[y]>121&&k[y]<200)
        {
            printf("%d\n", k[y]);
        }
    }
}
