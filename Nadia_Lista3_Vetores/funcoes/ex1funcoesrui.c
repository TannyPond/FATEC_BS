float soma(float x,float y);

main()
{
float a,b,c;
a = 3957.779;
b = 43558.357;
c = soma(a,b);
printf("soma de a + b e': %.3f + %.3f = %.3f \n",a,b,c);
}


float soma(float x,float y) /*passagem de parametros*/
{
float z; /* z só existe na função soma*/

z = x + y;

return(z);
}

