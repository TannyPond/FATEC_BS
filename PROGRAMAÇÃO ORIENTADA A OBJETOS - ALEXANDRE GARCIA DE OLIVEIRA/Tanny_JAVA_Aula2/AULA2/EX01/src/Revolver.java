
public class Revolver {

		int municao, max;
		
		void recarregar() {
			if (municao < max) {
				municao++;
				mostrar();	
		}
			else 
				System.out.println("Não dá...");
		}
		
		void atirar() {
			if (municao > 0)
				municao--;
			else
				System.out.println("ERRO..");
		}
		void mostrar() {
			System.out.println(municao);
		}
}
