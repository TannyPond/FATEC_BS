
public class TesteChurrasco {

	public static void main(String[] args) {

		Pessoa p = new Pessoa();
		p.nome = "Ana";
		p.idade = 100;
		p.sexo = "f";
		p.vegetariana = false;
		Churrasco c = new Churrasco();
		c.verificarConsumo();

	}

}
