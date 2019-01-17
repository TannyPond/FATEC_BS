#include <stdio.h>

/****************** Ex3 ********************/

int main ()
{
    int a, b=-1;
    printf("entre com um numero qualquer\n");
    scanf("%d",&a);
    if (a<=0)
    {
        a=a*b;
    }
    printf("o modulo de seu numero e = %d",a);
}
