#define ex2
#include <stdio.h>

#ifdef ex1
#endif

#ifdef ex2
int main (void)
{
int k, cont, num, media, soma, qtd;
qtd=0;
cont=0;
media=0;
soma=0;
num=0;

do
{
    printf("Digite o numero de termos desejados\n");
    scanf("%d",&k);
    if (k<=0)
    {
        printf("Numero invalido\n");
    }
} while (k<=0);

do
{
  num=num+2;
  printf("%d\n", num);
  if (num%2==0 && num%5==0)
  {
      soma=soma+num;
      qtd=qtd+1;
  }
  cont=cont+1;
} while (cont!=k);

media=soma/qtd;
printf("A media dos %d termos pares e multiplos de 5 eh %d \n", k, media);
}

#endif

#ifdef ex3
main ()
{
    int n, cont, qtdum, qtddois;
    float peso, media, menor, maior, soma;

    /* somaum: variavel para pesos superiores ou iguais a 70kg e inferiores ou iguais a 85,5kg */
    /* somadois: variavel para quantidade de pessoas com mais de 75kg */

    cont=0;
    soma=0;
    maior=0;
    menor=0;
    qtdum=0;
    qtddois=0;

    do {
        printf("Digite o numero de pessoas\n");
        scanf(" %d", &n);
        if (n<=0)
        {
            printf("Numero invalido. Digite numero acima de 0\n");
        }
    } while (n<=0);

    do {
        printf("Digite o peso\n");
        scanf(" %f", &peso);
        if (peso>=70 && peso<=85.5)
        {
            soma=soma+peso;
            qtdum=qtdum+1;
        }
        if (peso>75)
        {
            qtddois=qtddois+1;
        }
        if (peso>maior)
        {
            maior=peso;
        }
        if (peso<menor);
        {
            menor=peso;
        }
        cont=cont+1;
    } while (cont!=n);

    media=soma/qtdum;
    printf("A media dos pesos superiores ou iguais a 70kg e inferiores ou iguais a 85,5kg eh de %.2f\n", media);
    printf("A quantidade de pessoas com pesos acima de 75kg eh de %d\n", qtddois);
    printf("O maior peso eh %.2f\n", maior);
    printf("O menor peso eh %.2f\n", menor);
}

#endif

#ifdef ex4

int main (void)
{
  int k, cont, primeiro, segundo, proximo, soma;
  primeiro=0;
  segundo=1;
  cont=0;
  soma=0;

  do{
    printf("Digite o numero de termos\n");
    scanf("%d", &k);
    if (k<0)
    {
        printf("Numero invalido\n");
    }
  } while (k<0);

  printf("Os primeiros %d termos serao:\n", k);
  printf("%d", primeiro);
  do
  {
      proximo=primeiro+segundo;
      printf("%d\n", proximo);
      primeiro=segundo;
      segundo=proximo;
      cont=cont+1;
      if (proximo%3==0)
      {
          soma=soma+proximo;
      }
  } while (cont!=k);

  printf("A soma de numeros multiplos de 3 e %d", soma);
}

#endif

#ifdef ex5
int main (void)
{
    int counter=0, num;
    long fatorial=1;

    printf("\nPrograma Fatorial\n");

    do {
        printf("Digite um número maior ou igual a 0\n");
        scanf("%d", &num);
        if (num==0)
        {
            printf("O fatorial e 1\n");
        }
    } while (num<=0);

    for (counter=1; counter<=num; counter++)
        fatorial*=counter;
    /*outra possivel solucao: do while*/
    /*do {
        fatorial=fatorial*num;
        num=num-1;
        counter++;
    } while (counter!=num);*/
    printf("\nFatorial de %d equivale a %d", num, fatorial);
}

#endif
