#include <stdio.h>
#include <math.h>

/********************* Ex 7 ***********************/

int main()
{
    int a,b,c;
    printf("entre com o ano de seu nascimento\n");
    scanf("%d",&a);
    printf("entre com o ano atual\n");
    scanf("%d",&b);
    while (b<a)
    {
        printf("ano atual invalido, digite novamente o ano atual\n");
        scanf("%d",&b);
    }
    c=b-a;
    printf("sua idade atual e =%d\n",c);
    a=2020-a;
    printf("sua idade em 2020 sera =%d\n",a);
}
