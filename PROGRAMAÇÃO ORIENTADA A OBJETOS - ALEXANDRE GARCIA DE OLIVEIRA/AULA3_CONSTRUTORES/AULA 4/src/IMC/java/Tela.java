package IMC.java;

import java.util.Scanner;

public class Tela {
	Scanner s;			// atributo para todos os m�todos
	
	public Tela() {
		s = new Scanner(System.in); // construtor de instancia
	}
	
	public void menu() {
		int opt = 0;
		while(opt != 2) {
			System.out.println("**** IMC PROGRAM ****");
			System.out.println("1.Calcular");
			System.out.println("2.Sair");
			System.out.println("Digite a op��o: ");
			opt = s.nextInt();
			
				switch(opt) {
				case 1: this.principal();
						break;
				case 2: this.sair();
						break;
				default: this.erro();
				}
		}
	}
	
	public void erro() {
		System.out.println("Op��o Inv�lida!");
	}
		
	public void sair() {
		System.out.println("Fim do Programa");
		s.close();
	}
		
	public void principal() {
		//Scanner s = new Scanner(System.in);
		System.out.println("Digite o peso: ");
		double peso = s.nextDouble();
			
		System.out.println("Digite a altura: ");
		double altura = s.nextDouble();
			
		IMC imc = new IMC();
		System.out.println("O IMC �: " + imc.calcular(peso,altura)) ;
		//s.close();
		}

}
