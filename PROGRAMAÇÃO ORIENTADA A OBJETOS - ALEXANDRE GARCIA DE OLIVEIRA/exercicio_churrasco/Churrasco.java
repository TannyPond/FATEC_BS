
public class Churrasco {	
	
	double qtdCarne;
	int idade;
	boolean vegetariana;	
	
	void verificarConsumo() {
		
			if((vegetariana == true) || ((idade >= 0) && (idade < 4))) 
				System.out.println("Nao consome");
			else
				if((idade >3) && (idade <13)) 
					System.out.println("Consome 1 kg de carne");
				else 
					System.out.println("Consome 2 kg de carne");
	}
}