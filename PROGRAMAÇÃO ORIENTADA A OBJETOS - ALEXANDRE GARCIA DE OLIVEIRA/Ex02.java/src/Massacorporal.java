
public class Massacorporal {

	
	double peso, altura, massac;
	
	void Massacorporal1() {
		massac = (peso/(altura*altura));
		if (massac < 18) {
			System.out.println("MAGRA");{
				if (massac >= 18 && massac <25)
					System.out.println("SAUDÁVEL");
				else
					System.out.println("SOBREPESO");
			}
			
		}
	}

}

public class IMC {
	
	double altura, peso;
	
	double calcular() {
		return peso/(altura*altura);
		
		void classificar() {
			double imc = calcular();
			if (imc <18)
				System.out.println("MAGRA");{
				else if (imc <25)
					System.out.println("SAUDÁVEL");{
					else
						System.out.println("SOBREPESO");{
					}
				}
		}
	}
}
}
