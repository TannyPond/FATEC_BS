#include <stdio.h>
#include <math.h>

/********************* Ex 6 ***********************/

int main()
{
    int a,b,c;
    printf("entre com um numero\n");
    scanf("%d",&a);
    printf("entre com outro numero\n");
    scanf("%d",&b);
    c=a+b;
    if (c>=10)
    {
        c=c+5;
    }
    else
    {
        c=c-7;
    }
    printf("o resuldado e = %d\n",c);
}

