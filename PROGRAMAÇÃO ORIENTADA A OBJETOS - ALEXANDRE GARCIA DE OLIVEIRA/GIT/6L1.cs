using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Eq2grau
{
    class Eq2Grau
    {
        static void Main(string[] args)
        {
            double a;
            double b;
            double c;
            double delta;
            double x1;
            double x2;

            Console.WriteLine("Equação de Segundo Grau\n\n");

            Console.Write("Entre com um numero diferente de zero para o coeficiente 'a' de uma equacao \nde segundo grau: ");
            a = Convert.ToDouble(Console.ReadLine());
            Console.Read();

            while (a == 0)
            {
                Console.Write("Voce digitou zero, por favor digite um número diferente de zero\n: ");
                a = Convert.ToDouble(Console.ReadLine());
                Console.Read();
            }

            Console.Write("Entre com o valor de b: ");
            b = Convert.ToDouble(Console.ReadLine());
            Console.Read();

            Console.Write("Entre com o valor de c: ");
            c = Convert.ToDouble(Console.ReadLine());
            Console.Read();

            delta = ((b * b) - (4 * a * c));
                
            if (delta < 0)
            {
                Console.Write("A equação não possui raízes reais\n ");
                Console.Read();
            }
            else
            {
                if (delta == 0)
                {
                    Console.Write("Delta igual a Zero possui uma unica raiz. O Delta é:  \n" + delta + "\n\n");
                    x1 = ((-b + Math.Sqrt(delta)) / (2 * a));
                    Console.WriteLine("Raiz é igual a:" + x1 + "\n\n");
                    Console.Read();
                }
                else
                {
                    Console.WriteLine("Delta maior que Zero possui duas raizes reais. O Delta é: \n" + delta);
                    x1 = ((-b + Math.Sqrt(delta)) / (2 * a));
                    Console.WriteLine("Raiz 1 é: \n" + x1);
                    x2 = ((-b - Math.Sqrt(delta)) / (2 * a));
                    Console.WriteLine("Raiz 2 é: \n" + x2);
                    Console.Read();
                }
            }
        }
    }
}
