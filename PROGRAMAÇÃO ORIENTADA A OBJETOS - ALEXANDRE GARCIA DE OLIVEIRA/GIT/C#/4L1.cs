using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Triangulo
{
    public class Program
    {

        public static void Main(String[] Args)
        {
            //Declaração de Variáveis
            double ladoTri=0;
            double perimetroTri, areaTri;

            // Nome do programa
            Console.WriteLine("Trianguglo Equilatero");

            //Pedindo as entradas
            Console.WriteLine();
			Console.Write("Informe o valor dos lados do triangulo: ");
			ladoTri = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine();
			
			//Cálculo de área
			areaTri = ladoTri * (Math.Sqrt(3)/2);
			Console.WriteLine("A área do triangulo (cm²) é = " + areaTri);
            Console.WriteLine();
			
			//Calculo do Perimetro = 3*lado
			perimetroTri = ladoTri * 3;
			Console.WriteLine("O perímetro do triangulo é (cm³) = " + perimetroTri);
            Console.WriteLine();
			
			Console.WriteLine("Pressione qualquer tecla para sair!");
			Console.ReadKey();
            Console.Read();
        }
    }
}