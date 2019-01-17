package Calc;
//SERÁ QUE ESSES ATRIBUITOS n1 e n2 DEVERIAM ESTAR AQUI?
public class Calculadora {

	double n1, n2, n3; // atributos
	
	// O ESTADO INICIAL DA CALCULADORAEH
	//DEFINIDO AQUI
	
	Calculadora(double n1, double n2, double n3) {
		this.n1 = n1; //chamar como método ou instanciar
		this.n2 = n2;
		this.n3 = n3;
		
	}

	public void somar() {
		System.out.println(n1+n2+n3);
	}
}
