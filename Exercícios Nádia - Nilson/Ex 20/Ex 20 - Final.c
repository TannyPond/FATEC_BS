float main()
{
    float altura,peso;
    do
    {
        printf("Entre com o valor de seu peso\n");
        scanf("%f",&peso);
        if (peso<=0)
        {
            printf("valor de peso invalido, repita novamente seu peso\n");
        }
    }
    while (peso<=0);
    do
    {
        printf("Entre com o valor de sua altura\n");
        scanf("%f",&altura);
        if (altura<=0)
        {
        printf("valor da altura invalido, repita novamente sua altura\n");
        }
    }
    while (altura <=0);
    if (peso<=60 && altura<1.20)
    {
        printf("Sua classificacao e A\n");
    }
    if (peso>60 && peso<=90 && altura<1.20)
    {
        printf("Sua classificacao e D\n");
    }
    if (peso>90 && altura<1.20)
    {
        printf("Sua classificacao e G\n");
    }
    if (peso<=60 && altura>=1.20 && altura<=1.70)
    {
        printf("Sua classificacao e B\n");
    }
    if (peso>60 && peso<=90 && altura>=1.20 && altura<=1.70)
    {
        printf("Sua classificacao e E\n");
    }
    if (peso>90 && altura>=1.20 && altura<=1.70)
    {
        printf("Sua classificacao e H\n");
    }
     if (peso<=60 && altura>1.70)
    {
        printf("Sua classificacao e C\n");
    }
    if (peso>60 && peso<=90 && altura>1.70)
    {
        printf("Sua classificacao e F\n");
    }
    if (peso>90 && altura>1.70)
    {
        printf("Sua classificacao e I\n");
    }
}
