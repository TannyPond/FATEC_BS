#include<stdio.h>

main()
{
    int k, Num;
    long Fatorial=1;

    printf("\nPrograma Fatorial\n");

    do
    {
    printf("Fatorial de qual numero? \n");
    scanf("%d", &Num);

        if (Num==0)
        printf("\nO fatorial de Zero eh 1\n");
    }
    while (Num<0);

    for(k=1; k<=Num; k++)
        Fatorial *= k;

    printf("\n Fatorial de %d equivale a %d \n", Num, Fatorial);

}
