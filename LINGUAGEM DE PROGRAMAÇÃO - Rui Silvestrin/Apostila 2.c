#include <stdio.h>

#define ex5

#ifdef ex1

main()
{
    int num;
    int cont;
    int total;
    float media;

    printf("\nDigite numeros inteiros positivos\n");

    for (cont=0;num<0;cont++){
        scanf("%d", &num);
        total+=cont;
    }

    media = total/cont;
    printf=("\nA media dos numeros digitados e':...%f\n", media);
}

#endif // ex1

#ifdef ex2

    /*Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
        pensou. Digite via teclado os simbolos =,> ou < a cada pergunta. Utilize o
    comando if-else.EM 5 TENTATIVAS*/

    /*PESQUISA BINARIA: Dividir em tres colunas: LiminteInf, Media e LimSup
                                                    1           50      99
    Se numero for 87 p.ex. entao 50 vai para LimInf, e 99 para superior. Media entre 50 e 99 e' 75.
    LiminteInf, Media e LimSup
    1           50      99
    50          75      99
    75          87      99

    */

 main ()
 {
     int numero;
     int escolhido;
     int tentativa;
     int LimInf=1;
     int Media;
     int LimSup=99;
     char input;

     Media = (LimInf+LimSup)/2;

     printf("\n********Jogo Adivinhe o Numero********\n");

     printf("\nEscolha um numero inteiro entre 1 e 99\n");
     scanf("%d", &escolhido);

     printf("\nO numero e' menor (<), igual(=) ou maior(<) que %d?\n", Media);
     input = getchar();

     do{
        if(input == ">"){
            LimInf=Media;
            Media = (LimInf+LimSup)/2;
        }
        else if(input == "<"){
            LimSup=Media;
            Media = (LimInf+LimSup)/2;
        }
         tentativa++;
     }while();


 }

        /*

     if(escolhido>Media){
        LimInf=Media;
        Media = (LimInf+LimSup)/2;

     }
     else if(escolhido<Media){
        LimSup=Media;
        Media = (LimInf+LimSup)/2;
     }
*/


#endif // ex2

#ifdef ex4

/*4 - De um modo geral, as ligações telefônicas são cobradas pelas suas durações.
    O sistema registra os instantes em que a ligação foi iniciada e concluída e
    é executado um programa que determina o intervalo de tempo decorrido entre
    aqueles dois instantes dados. Escreva um programa que recebe dois instantes
    dados em horas, minutos e segundo e determina o intervalo de tempo (em
    horas, minutos e segundos) decorrido entre eles.*/

main()
{
    int horas, minutos, segundos, horasf, minutosf, segundosf, totalh, totalmin, totalseg;

    printf("\n*****Programa Duracao Ligacoes*****\n");

    printf("\nDigite a hora, segundos e minutos em que a ligacao foi iniciada\n");
    do{
        scanf("%d%d%d", &horas, &minutos, &segundos);
        if(minutos>59 || segundos>59){
            printf("\nInvalido. Minutos e segundos tem como maximo 60. Digite novamente.\n");
        }
    }while(minutos>59 || segundos>59);

    printf("\nDigite a hora, segundos e minutos em que a ligacao foi finalizada\n");
    do{
        scanf("%d%d%d", &horasf, &minutosf, &segundosf);
        if(minutosf>59 || segundosf>59){
            printf("\nInvalido. Minutos e segundos tem como maximo 60. Digite novamente.\n");
        }
    }while(minutosf>59 || segundosf>59);

    totalseg = (60-segundos)+segundosf;
    totalmin = (60-minutos)+minutosf-1;
    totalh = horasf-horas-1;

    if(totalseg>60){
        totalseg-=60;
        totalmin+=1;
    }
    if(totalmin>60){
        totalmin-=60;
        totalh=totalh-1;
    }

     printf("\nA duracao da ligacao foi de %d hora(s), %d minuto(s) e %d segundo(s).\n", totalh, totalmin, totalseg);

}

#endif // ex4

#ifdef ex5

main(){

    float num;

    printf("\n*****Programa Arredondamento*****\n");

    printf("\nDigite o numero a ser arredondado\n");
    scanf("%f", &num);

    if(num<0,24){
        printf("\nO numero arrendonado e':...%.0f\n", num);
    }
    if else (num>=0,25 && num<=0,74){
        printf("\nO numero arredondado e':...0.5\n", num);
    }
    else {
        printf("\nO numero arredondado e'...%f\n", num);
    }
}

#endif // ex5

#ifdef ex6

/*6 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
     gasolina é R$ 3,88 e o preço do litro do álcool é R$ 3,18.*/

main ()
{
    float total, desconto, litros, gasolina=3.88, alcool=3.18;
    char combustivel;

    printf("\n*****Programa Combustivel*****\n");

    printf("\nQuantos litros foram vendidos?\n");
    scanf("%d", &litros);

    printf("\nQual o tipo de combustivel? Digite A (Alcool) ou G (Gasolina)\n");
    scanf("%c", &combustivel);

    if(combustivel=='A'&&litros<=20){
            desconto = gasolina*0.03*litros;
            total = litros*gasolina-desconto;
    }
    else if(combustivel=='A'&&litros>20){
            desconto = gasolina*0.05*litros;
            total = litros*gasolina-desconto;
    }

    if(combustivel=='G'&&litros<=20){
            desconto = gasolina*0.04*litros;
            total = litros*gasolina-desconto;
    }
    else if(combustivel=='G'&&litros>20){
            desconto = gasolina*0.06*litros;
            total = litros*gasolina-desconto;
    }

    printf("\nO total a ser pago e':....%.2f\n", total);

}

#endif // ex6

#ifdef ex7

 main (){

     int km;
     int gas;
     float consumo;

     printf("\n******Programa Consumo Km/L*****\n");

     printf("\nDigite a distancia percorrida em Km\n");
     do{
     scanf("%d", &km);
     if(km<1){
        printf("\nDistancia nao pode ser igual ou menor que 0\n");
     }
     }while(km<1);

     printf("\nDigite a quantidade de gasolina consumida\n");
     do{
     scanf("%d", &gas);
     if(gas<1){
        printf("\nAndou mas nao consumiu nada de gasolina? Digite o valor correto\n");
     }
     }while(gas<1);

     consumo = km/gas;

     if(consumo<8){
        printf("\nVenda o carro, ele bebe muito!\n");
     }
     else if(8<consumo>14){
        printf("\nSeu carro e' economico!\n");
     }
     else
        printf("\nParabens, seu carro e' super economico!\n");

 }

#endif // ex7

#ifdef ex8

/*8 - Faca um programa que receba a altura e o sexo de uma pessoa, calcule e
    mostre seu peso ideal, utilizando as seguintes formulas (onde h corresponde
    a altura):
    Homens: (72.7 * h) - 58
    Mulheres: (62,1 * h) - 44,7*/

main ()
{

    char sexo;
    float h;
    float homens;
    float mulheres;

    printf("\n*****Programa Descubra seu Peso Ideal******\n");

    printf("\nQual seu sexo biologico? M ou F\n");
    sexo = getchar();

    printf("\nSexo biologico:...");
    putchar(sexo);

    printf("\n\nQual sua altura? Exemplo: 1.75\n");
    scanf("%f", &h);

    if(sexo=='M'){
        homens = (72.7*h)-58;
        printf("\nSeu peso ideal e'...:%.2f\n", homens);
    }
    else if(sexo=='F'){
        mulheres = (62.1*h)-44.7;
        printf("\nSeu peso ideal e'...:%.2f\n", mulheres);
    }
}

#endif // ex8
