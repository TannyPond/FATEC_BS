#include <stdio.h>
#define ex04

#ifdef ex0
/* Exemplo: Faça um programa em C que receba as notas de um grupo de dez alunos.
Exiba a média das notas.
Obs.: As notas deverão ser maiores ou iguais a zero e menores ou iguais a 10.*/
main()
{
    float soma=0;
    int x;
    float notas[5];
    int nmat[5];
    char nome[5][20];
    for (x=0; x<5; x++)
    {
        printf("Digite o nome \n");
        scanf("%s",nome[x]);
        printf("Digite o numero de matricula \n");
        scanf("%d",&nmat[x]);
        do
        {
            printf("Digite a nota \n");
            scanf("%f",&notas[x]);
            getchar();

            if (notas[x]<0 || notas[x] >10)
                printf("Nota Invalida \n");
        }
        while (notas[x]<0 || notas[x] >10);
        soma=soma+notas[x];

    }
    printf("A media das notas e' %.2f \n",soma/5);
    printf("Exibicao dos dados \n");
    for (x=0; x<5; x++)

        printf("No.Mat %d  Nota: %.2f \n",nmat[x],notas[x]);


}
#endif // ex0

#ifdef ex01
/*Leia quinze elementos de um vetor. Após a alimentação mostre todos os elementos armazenados no vetor. */

main()
{
printf("*********************************************************\n");
printf("***         LEIA QUINZE ELEMENTOS DE UM VETOR         ***\n");
printf("*********************************************************\n\n");

int vetor15[15], x;

for(x=0;x<15;x++)
    {
        printf("\nDigite um numero para ser armazenado no vetor.\n");
        scanf("%d", &vetor15[x]);
    }

printf("Os elementos armazenados sao:\n");

for(x=0;x<15;x++)
    {
        printf("%d, ", vetor15[x]);
    }
}
#endif // ex01


#ifdef ex02
/*Receba doze números positivos e armazene no vetor A.
Após a alimentação de todos os números mostre apenas os números maiores que 121 que estão armazenados no vetor. */

main()
{
printf("*********************************************************\n");
printf("***       RECEBA 12 NUMEROS POSITIVOS NO VETOR        ***\n");
printf("*********************************************************\n\n");

int a[12],x;

for(x=0;x<12;x++)
    {
        do
        {
            printf("\nDigite um numero positivo.\n");
            scanf("%d", &a[x]);
            if(a[x]<0)
            {
                printf("Numero invalido.Digite novamente.\n");
            }
        }while(a[x]<0);
    }

printf("Os numeros armazenados maiores que 121 sao:\n");
for(x=0;x<12;x++)
{
    if(a[x]>121)
    {
        printf("%d\n ", a[x]);
    }
}
}
#endif // ex02

#ifdef ex03
/*Armazene num vetor dez números positivos.
Exiba o conteúdo do vetor.
Mostre o menor número, quantas vezes ele foi digitado e em que posições ele apareceu dentro do vetor. */

main()
{
printf("******************************************************************\n");
printf("***       ARMAZENE 10 NUMEROS NO VETOR E MOSTRE O MENOR        ***\n");
printf("******************************************************************\n\n");

int vetor10[10],x,menor=0,pos=0;

for(x=0;x<10;x++)
    {
        printf("\nDigite um numero positivo qualquer.\n");
        do
        {
            scanf("%d", &vetor10[x]);
                if(vetor10[x]<0)
                    printf("\nNumero invalido. Digite novamente.\n");
        }while(vetor10[x]<0);

        if(x==0||vetor10[x]<menor)
        {
            menor=vetor10[x];
        }
    }
    printf("\nO menor numero encontrado foi: %d\n", menor);

    for(x=0;x<10;x++)
        {
            if(vetor10[x]==menor)
            {
                printf("A posicao do menor numero e': %d\n", x);
            }
        }
}
#endif // ex03

#ifdef ex04
/*Armazene num vetor no máximo dez números quaisquer.
Exiba o conteúdo do vetor.
Mostre o menor número par, quantas vezes ele foi digitado e em que posições ele apareceu dentro do vetor. */
main()
{
printf("**********************************************************************\n");
printf("***       ARMAZENE 10 NUMEROS NO VETOR E MOSTRE O MENOR PAR        ***\n");
printf("**********************************************************************\n\n");

int vetor10[10],menorpar,contpar=0,contmenorpar=0,pospar=0,x,vetorPos[10],y=0;

for(x=0;x<10;x++)
{
    printf("\nDigite um numero qualquer.\n");
    scanf("%d", &vetor10[x]);
        if(vetor10[x]%2==0)
            {
                contpar++;

            if(contpar==1 || vetor10[x]<menorpar)

                menorpar=vetor10[x];
            }
}

printf("\nOs numeros armazenados sao:\n");

for(x=0;x<10;x++)
{
    if(x<8)
    printf("%d, ", vetor10[x]);
    else if(x<9)
        printf("%d e ", vetor10[x]);
    else
        printf("%d.", vetor10[x]);
}

for(x=0;x<10;x++)
{
    if(vetor10[x]==menorpar)
    {
        contmenorpar=contmenorpar+1;
        vetorPos[y]=x;
        y++;
    }
}
printf("\n\nO menor numero par encontrado no vetor e': %d\n", menorpar);
printf("\nO menor numero par aparece %d vezes no vetor.\n", contmenorpar);
printf("\nAs posicoes em que ele aparece sao:\n");

for(x=0;x<y;x++)
{
    if(x<y-2)
    printf("%d, ", vetorPos[x]);
    else if(x<y-1)
        printf("%d e ", vetorPos[x]);
    else
        printf("%d.", vetorPos[x]);
}
}
#endif // ex04

#ifdef ex05
/*Armazene no vetor A 10 elementos positivos.
Construa o vetor B do mesmo tipo e dimensão.
Cada elemento do vetor B deve ser o valor negativo do elemento correspondente do vetor A.
Desta forma, se em A [1] estiver armazenado o elemento 8 deve estar em B [1] o valor –8,
e assim por diante. Apresentar o conteúdo dos dois vetores.*/
main()
{
printf("********************************************************************************************\n");
printf("***       ARMAZENE 10 NUMEROS NO VETOR A E OS MESMOS VALORES NEGATIVOS NO VETOR B        ***\n");
printf("********************************************************************************************\n\n");

int A[10], B[10],x, y;

for(x=0;x<10;x++)
{
    printf("\nDigite um numero positivo qualquer.\n");
        do
        {
            scanf("%d", &A[x]);
                if(A[x]<0)
                    printf("\nNumero invalido. Digite novamente.\n");
        }while(A[x]<0);
    B[x]=A[x]*-1;
}

printf("\nOs numeros armazenados no vetor A sao:\n");
for(x=0;x<10;x++)
    {
        if(x<8)
        printf("%d, ", A[x]);
        else if(x<9)
            printf("%d e ", A[x]);
        else
            printf("%d.\n", A[x]);
    }

printf("\nOs numeros armazenados no vetor B sao:\n");
for(x=0;x<10;x++)
    {
        if(x<8)
        printf("%d, ", B[x]);
        else if(x<9)
            printf("%d e ", B[x]);
        else
            printf("%d.\n", B[x]);
    }
}
#endif // ex05


