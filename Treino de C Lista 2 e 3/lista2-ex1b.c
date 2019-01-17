#include<stdio.h>

main()
{
int k=0, x=1;

while(k<=0)
{
printf("Digite a quantidade de numeros a ser exibida \n");
scanf("%d", &k);

if (k<=0)
printf("Numero Invalido. Tente novamente. \n");
}

printf("\n A sequencia de numeros digitadas foi: \n");

for(x=1;x<=k;x++)
{
printf("1/%d\n", x*4);
}
}
