
#include<stdio.h>

main()
{
    int x, y, k[15];

    printf("Digite 15 numeros quaisquer: \n");

    for(y=0;y<15;y++)
    {
        scanf("%d", &x);
        k[y]=x;
    }

    printf("Os valores digitados sao: \n");
    for(y=0;y<15;y++)
    {
        printf("%d\n", k[y]);
    }
}
