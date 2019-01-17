#include<stdio.h>
main()
{
int opcao;


printf ("Faça a sua opção 1 ou 2 ou 3 \n");
scanf ("%d", &opcao);

switch(opcao)
	{
	case 1 :
		{
		printf ("\n Deus ajuda quem cedo madruga");
		break;
		}
	case 2 :
		{
		printf ("\nMais vale um passaro na mao do que dois voando");
		break;
		}
		case 3 :
		{
		printf ("\n Casa de ferreiro  espeto de pau");
		break;
		}

        default:
		{
		printf ("\nA opcao escolhida e' invalida.");
		}
	}
}

