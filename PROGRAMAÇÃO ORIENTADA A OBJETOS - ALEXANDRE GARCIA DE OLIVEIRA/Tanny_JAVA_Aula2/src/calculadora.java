
public class calculadora {

	public static void main(String[] args) {
		double n1, n2;
		
		void somar() {
			double res = n1+n2;
			System.out.println(res);;
		}
		void subtrair() {
			System.out.println(n1-n2);
		}
		void multiplicar() {
			System.out.println(n1*n2);
		}
		void dividir() {
			if(n2==0)
				System.out.println("ERRO...");
			else
				Sytem.out.println(n1/n2);
		}

}
