using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _6L1
{
        class Program
        {
            static void Main(string[] args)
            {

                double a, b, c, x1, x2, delta, q;

                Console.WriteLine("Equa��o de Segundo Grau\n\n");

                Console.Write("Entre com um numero diferente de zero para o coeficiente 'a' de uma equacao \n de segundo grau\n: ");
    
                a = Convert.ToDouble(Console.ReadLine());
                Console.Read();

                while (a == 0)
                {
                    Console.Write("Voce digitou zero, por favor digite um n�mero diferente de zero\n: ");
        
                    a = Convert.ToDouble(Console.ReadLine());
                    Console.Read();
                }

                Console.Write("Entre com o valor de b: ");
                b = Convert.ToDouble(Console.ReadLine());
                Console.Read();

                Console.Write("Entre com o valor de c: ");
                c = Convert.ToDouble(Console.ReadLine());
                Console.Read();

                Console.Write("\n\n");
                q = 2;
                delta = (Math.Pow(b, q) - (4 * a * c));

                if (delta < 0)
                {
                    Console.Write("A equa��o n�o possui ra�zes reais\n ");
                }
                else
                {
                    if (delta == 0)
                    {
                        Console.Write("Delta igual a Zero possui uma unica raiz.O Delta �:  \n" + delta + "\n\n");
    
                        x1 = ((-b + Math.Sqrt(delta)) / (q * a));
                        Console.WriteLine("Raiz � igual a:"+ x1 + "\n\n");
                    }
                    else
                    {
                        Console.WriteLine("Delta maior que Zero possui duas raizes reais. O Delta �: \n" + delta);
                        x1 = ((-b + Math.Sqrt(delta)) / (q * a));
                        Console.WriteLine("Raiz 1 �: \n" + x1);

                        x2 = ((-b - Math.Sqrt(delta)) / (q * a));
                        Console.WriteLine("Raiz 2 �: \n" + x2);

                        }
                }
            }
        }
    }