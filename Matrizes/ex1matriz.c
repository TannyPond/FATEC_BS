#define e1
#include<stdio.h>
#include<locale.h>
#ifdef e1
int kill[3][3],l,c;
main()
{
    setlocale(LC_ALL,"portuguese");
    for(l=0;l<3;l++)
    {
        for(c=0;c<3;c++)
        {
            printf("Digite um número: ");
            scanf("%d",&kill[l][c]);
        }
    }
    Exiba();
    printf("%d",pequeno_menor());
}
Exiba()
{
    for(l=0;l<3;l++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ",kill[l][c]);
        }
    }
}
int pequeno_menor(int menor)
{
    for(l=0;l<3;l++)
    {
        for(c=0;c<3;c++)
        {
            if(l==0&&c==0||kill[l][c]<menor)
            {
                menor=kill[l][c];
            }
        }
    }
    return(menor);
}
#endif // e1
