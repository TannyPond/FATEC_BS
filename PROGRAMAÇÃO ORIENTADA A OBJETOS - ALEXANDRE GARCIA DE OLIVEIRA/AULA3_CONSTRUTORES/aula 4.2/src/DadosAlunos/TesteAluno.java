package DadosAlunos;

public class TesteAluno {

	public static void main(String[] args) {

		Endereco e = new Endereco("Rua: Teste",  "11111000" , "SANTOS", Estado.SP);
		
		Aluno a = new Aluno("Tanny", e , Curso.ADS);
		
		a.mostrarAluno();

	}

}
