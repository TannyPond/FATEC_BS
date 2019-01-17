#include <stdio.h>

#define ex4

#ifdef ex1

/*1 - Escreva um programa e inicialize as variaveis do tipo char, int, short,
    long, unsigned(char, int, short, long), float e double com seus valores
    limites e imprima-os no video. Utilize variaveis globais para os valores
    positivos e locais para os negativos.*/

int charpos = 127;
int intpos = 32767;
short int shortpos = 32767;
long int longpos = 2147483647;
float floatpos = 3.4E+38;
double doublepos = 1.7E+308;

unsigned char unchar = 255;
unsigned short unshort = 65535;
unsigned int unint = 65535;
unsigned long unlong = 4294967295;

main (void)
{
    int charneg = -128;
    printf("\nOs valores limites da variavel char sao:..%d a %d\n", charneg, charpos);

    int intneg = -32768;
    printf("\nOs valores limites da variavel int sao:..%d a %d\n", intneg, intpos);

    short int shortneg = -32768;
    printf("\nOs valores limites da variavel short sao:..%d a %d\n", shortneg, shortpos);

    long int longneg = -2147483648;
    printf("\nOs valores limites da variavel long sao:..%d a %d\n", longneg, longpos);

    float floatneg = -3.4E-38;
    printf("\nOs valores limites da variavel float sao:..%e a %e\n", floatneg, floatpos);

    double doubleneg = -1.7E-307;
    printf("\nOs valores limites da variavel double sao:..%e a %e\n", doubleneg, doublepos);

    printf("\nOs valores limites da variavel unsigned char sao:..0 a %d\n", unchar);
    printf("\nOs valores limites da variavel unsigned short sao:..0 a %d\n", unshort);
    printf("\nOs valores limites da variavel unsigned long sao:..0 a %d\n", unlong);
    printf("\nOs valores limites da variavel unsigned int sao:..0 a %d\n", unint);

    return 0;
}
#endif // ex1

#ifdef ex2

/*2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:
alinhado a esquerda
             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int

                   float               double              char*/
main (void)
{

short int a;
printf("\nDigite um numero short\n");
scanf("%d", &a);

float b;
printf("\nDigite um numero float\n");
scanf("%f", &b);

long c;
printf("\nDigite um numero long\n");
scanf("%d", &c);

double d;
printf("\nDigite um numero double\n");
scanf("%e", &d);

int e;
printf("\nDigite um numero int\n");
scanf("%d", &e);

char f;
printf("\nDigite um caracter qualquer\n");
f = getchar();

printf("*******************\n");

printf("\n        10        20        30        40        50        60");
printf("\n12345678901234567890123456789012345678901234567890123456789012345\n");

printf("%5hd",a);/*short*/
printf("%28d", c);/*long*/
printf("%38d", e);/*int*/

printf("\n%18.2f",b); /*float*/
printf("%28e", d);/*double*/
printf("%38e", c);/*char*/
putchar(f);

return 0;
}
#endif // ex2

#ifdef ex3
/*3 - Acrescente ao exercicio anterior mais uma linha. Receba via teclado os valores
    sem sinal char, int e long int e escrevendo nas coluna 10, 30 e 50.*/

#endif // ex3

#ifdef ex4
/*4 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.*/


#endif // ex4

#ifdef ex5

/*Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.
*/

main ()
{
    int num1;
    int limnum;
    int multiplo;
    int i=1;

    printf("\nDigite um numero inteiro do qual se deseja achar o minimo multiplo\n");
    scanf("%d", &num1);

    printf("\nDigite um limite minimo para o multiplo\n");
    scanf("%d", &limnum);

    do {
        multiplo = num1*i;
        i++;
    } while (multiplo<limnum);

    printf("\nO minimo multiplo acima do limite de %d e':....%d\n", limnum, multiplo);
}

#endif // ex5

#ifdef ex6

main ()
{
/*6 - Escreva um programa que receba via teclado um tempo em segundos e converta
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/

    int segundosinput;
    int horas;
    int minutos;
    int segundos;
    int SegPorHora = 3600;
    int segundosrest;

    printf("\nDigite o tempo em segundos que deseja converter\n");
    scanf("%d", &segundosinput);

    horas = segundosinput/SegPorHora;
    segundosrest = segundosinput%SegPorHora;
    minutos = segundosrest/60;
    segundos = segundosrest%60;

    printf("\nEm %d segundos temos %d hora(s), %d minuto(s) e %d segundo(s)\n", segundosinput, horas, minutos, segundos);

}
#endif // ex6

#ifdef ex7

/*7 - Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
    outro número formado pelos dígitos invertidos do número lido.
    Ex: NúmeroLido = 123
        NúmeroGerado = 321*/

int main ()
{
    int num;
    int inverso = 0;
    int resto;

    printf("\nDigite um numero inteiro positivo de tres digitos\n");
    do{
        scanf("%d", &num);
        if(num<100 && num>999){
            printf("\nNumero Invalido.\n");
        }
    }while (num<100 && num>999);

    for (num; num!=0; num=num/10){
        resto = num%10;
        inverso = inverso*10 + resto;
    }

    /*do{
        resto = num%10;
        inverso = inverso*10 + resto;
        num /= 10;
    } while (num!=0);*/

    printf("\nO numero invertido e':...%d\n", inverso);
}

#endif // ex7

#ifdef ex8

/*8 - O coração humano bate em media uma vez por segundo. Escrever um programa para
     calcular quantas vezes o coracao de uma pessoa baterá se viver X anos.
     Imprimir o resultado na tela.*/

int main()
{
    int anos;
    long int batidas;
    long int batporano = 31536000;

    printf("\nDigite a quantidade de anos\n");
    scanf("%d", &anos);

    batidas = batporano*anos;

    printf("\nA quantidade de batidas do coracao em %d anos e':....%ld\n", anos, batidas);

}
#endif // ex8
