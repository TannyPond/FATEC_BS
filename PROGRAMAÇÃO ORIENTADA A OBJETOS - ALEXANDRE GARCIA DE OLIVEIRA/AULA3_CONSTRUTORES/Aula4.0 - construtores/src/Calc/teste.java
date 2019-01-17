package Calc;

import java.util.Scanner;

public class teste {

	public static void main(String[] args) {
		
		//BufferedReader br = new BufferedReader(new In);
		
		Scanner s = new Scanner(System.in); // objeto Scanner, receber dados , Import Java Until Scanner
		System.out.println("Digite um numero:  ");
		double x = s.nextDouble(); // recebe do teclado e joga na varíavel x
		
		System.out.println("Digite um numero:  ");
		double y = s.nextDouble(); // recebe do teclado e joga na varíavel x
		
		
		Kalculadora k = new Kalculadora();
		System.out.println("O Valor da soma é: "+ k.somar(x,y));
		
		s.close(); // necessita fechar 
		
		
		//Calculadora antiga
		
		//Calculadora c = new Calculadora (14,15,3); //criar objeto
		//Calculadora d = new Calculadora (6,2,6);
		//c.somar();    	//void , já é uma ação
		//d.somar();		//void			
	}
}
