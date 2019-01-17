#include <stdio.h>
#include <stdlib.h>

const float sal_minimo=980.00;

void main()
{
    int k=0;
    float sal, soma_salario=0, maior_sal=-1, menor_sal=-1;
    do{
        system("clear");
        printf("Digite a quantidade de salarios que deseja entrar: ");
        scanf("%d", &k);
        getchar();
    } while(k <= 0);

    while(k != 0)
    {
        printf("Digite o valor do salario: ");
        scanf("%f", &sal);
        getchar();

        if(maior_sal == -1){
            maior_sal = sal;
            menor_sal = sal;
        }

        if((sal >= (sal_minimo*3)) && (sal <= (sal_minimo*7)))
            soma_salario += sal;

        if(sal < menor_sal)
            menor_sal = sal;
        else if(sal > maior_sal)
            maior_sal = sal;

        k--;
    }

    printf("\n\n\nA somatoria os salarios entre 3 e 7 minimos e: %.2f\n", soma_salario);
    printf("O menor salario e %.2f", menor_sal);
    printf("O maior salario e %.2f", maior_sal);
    printf("\n\n\n\n");
}
