//Exercicio sobre primeiros usos do portugol!

programa
{
	
	funcao inicio()
	{
		cadeia nome
		real valor1,valor2,valor3,valor4,soma,media


		escreva("Digite o nome do vendedor: ")
		leia(nome)
		escreva("Digite o valor referente as vendas do mes de janeiro: ")
		leia(valor1)
		escreva("Digite o valor referente as vendas do mes de fevereiro: ")
		leia(valor2)
		escreva("Digite o valor referente as vendas do mes de marco: ")
		leia(valor3)
		escreva("Digite o valor referente as vendas do mes de abril: ")
		leia(valor4)

		soma = (valor1+valor2+valor3+valor4)
		media =  (valor1+valor2+valor3+valor4) / 4
		
		escreva ("\nA soma das vendas totais dos meses de janeiro a abril eh: " + soma + "\nA media eh: " + media + "\nEstas vendas são referentes ao vendedor " + nome )
	
		se (media>=3500){
			escreva("\nParabens, voce bateu a meta!!")
		}
		senao {
			escreva("\nVoce nao bateu a meta! :(")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 910; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */