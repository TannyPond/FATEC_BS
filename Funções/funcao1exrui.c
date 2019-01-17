float soma(float x,float y);

main()
{
float a,b,c;
//float soma(); /* declara que a funcao "soma" retornara' um valor do tipo float*/

a = 3957.779;
b = 43558.357;


printf("chama a funcao soma(). \n");
printf("A funcao soma() retorna o resultado que e' atribuido a variavel c\n\n");

c = soma(a,b);   /* chama a funcao "soma" e passa como informacao uma copia dos
                    valores de "a" e "b" e espera o retorno de um valor do
                    tipo "float" */

printf("soma de a + b e': %.3f + %.3f = %.3f \n",a,b,c);
}

/* funcao "soma" que recebe 2 valores por passagem de informacoes por "valor",
soma estes valores e retorna o resultado como "float" pois o "tipo_de_retorno"
desta funcao esta declarado como "float" */

float soma(float x,float y) /* na frente do <nome_da_funcao> esta' declarado o
                   <tipo_de_retorno> ou o tipo de valor que o comando "return"
                   vai retornar */
{
float z;

printf("\tfuncao soma() \n");
printf("\ta funcao soma os valores x e y \n");
printf("\tretorna o resultado com o comando return\n\n");

z = x + y;

return(z); /* retorna o resultado da soma dos valores de guardados em "z" neste
              caso "float" */
}

