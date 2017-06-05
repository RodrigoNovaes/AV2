#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Nome: Gustavo Lima de Oliveira Carvalho
//RA: 2216104586
//Nome: Rodrigo de Novaes Santos
//RA: 2216109814

int opcao; 

int main(){
	
	puts("\n\t\t Bem vindo.");
	
	puts("\n\n\t Neste programa iremos explicar sobre a tecnica Feynman.");
	
	puts("\n Richard Feynman foi um dos maiores fisicos do seculo XX \n ele recebeu o premio nobel da fisica em 1965 \n ao apresentar o conceito sobre eletrodinamica quantica. \n E apesar de ter se tornado um grande fisico de ter contribuido para a ciencia \n e de ter se tornado um dos professores mais renomados sobre o assunto nos EUA \n Feynman era muito admirado por sua habilidade unica de conseguir dominar assuntos muito complexos e principalmente \n pela sua capacidade de apresentar de uma forma tao simples que a grande maioria das pessoas consigam entender.");
			
	puts("\n E foi dessa habilidade especial de dominar e explicar coisas complexas que surgiu a tecnica Faynman \n A tecnica feynman pode ser util caso voce queira\n Aprender algo novo. \n Apronfundar seus conhecimentos em um determinado assunto. \n Para voce aprender de forma rapida e eficaz.");
		
	puts("\n Abaixo teremos um menu com 5 etapas para voce dominar a tecnica, nas quais voce pode selecionar a qual desejar.");

	menu();

	return 0;
}

menu(){
	
	puts("\n\n\n\t\t Bem vindo ao menu de opcoes.");
	puts("\n\n Selecione a opcao de 1 a 5 ou 0 caso deseja encerrar.");
	puts("\n\t 1- Etapa Escolher o assunto.");
	puts("\n\t 2- Etapa Explique.");
	puts("\n\t 3- Etapa Escreva e fale.");
	puts("\n\t 4- Etapa Domine o assunto.");
	puts("\n\t 5- Etapa Simplifique.");
	printf("\n informe qual opcao voce deseja:");
	scanf("%d",&opcao);
	
	switch(opcao){
		
		
		
		case 1: etapa1();
			break;
		
		case 2: etapa2();
			break;
		
		case 3: etapa3();
			break;
			
		case 4: etapa4();
			break;
			
		case 5: etapa5();
			break;
			
		case 0: system("pause>>null");
		break;
		
		default: printf("\n opcao invalida");
		break;
	
	}

}


etapa1(){
	
	puts("\n\n\n\t Etapa 1: escolher o assunto.");
	puts("\n Escolher o assunto que deseja estudar.");
	puts("\n Assim que tiver escolhido o assunto\n voce devera buscar das melhores fontes e os melhores livros para dominar o assunto.");
	puts("\n E entao comecar a estudar como de costume.");
	puts("\n essa foi a primeira etapa."); 
	
}

etapa2(){
	
	puts("\n\n\n\t Etapa 2: Explique.");
	puts("\n Assim que voce ja tiver escolhido o assunto.");
	puts("\n E estiver entendo do que se trata, pegue uma folha de caderno \n E comece a escrever sobre o tema, escreva como se voce estiver explicando as ideias para uma outra pessoa \n De uma forma que ela pudesse entender sem problemas.");
	puts("\n Essa foi a segunda etapa.");	
}

etapa3(){
	
	puts("\n\n\n\t Etapa 3: Escreva e fale.");
	puts("\n Escreva e fale em voz alta.");
	puts("\n Assim como um professor ensina uma materia para um aluno em sala de aula \n Isso vai ajudar a ficar mais claro o assunto \n e vai potencializar a memoriacao da ideia.");
	puts("\n Essa foi a terceira etapa.");
}

etapa4(){
	
	puts("\n\n\n\t Etapa 4: Domine o assunto");
	puts("\n Assim que voce terminar a sua explicacao.");
	puts("\n Voce vai perceber quais pontos voce vai estar domindo e quais voce ainda nao entendeu bem \n Se voce ficar preso em algum topico \n volte e estude ate que voce o domine.");
	puts("\n Repita o processo quantas vezes forem necessarias \n Ate que voce esteja domindo todos os pontos do assunto.");
	puts("\n essa foi a quarta etapa.");
}

etapa5(){
	
	puts("\n\n\n\t Etapa 5: Simplifique.");
	puts("\n Quando voce terminar e estiver dominando tudo.");
	puts("\n Repita o processo, mas, dessa vez tente simplificar o maximo possivel sua explicacao.");
	puts("\n Faça como Faynman, de forma que qualquer pessoa consiga entender as ideias que voce ta passando.");
	puts("\n Para isso uma boa dica eh inserir algumas analogias graficas, ou algumas imagens para tornar o material mais visual \n Dessa forma fica muito mais facil fixar as ideias na mente. "); 
	puts("\n Mas se ainda sim, a sua explicacao ainda estiver um pouco confusa \n eh muito provavel que voce ainda nao tenha entendido o assunto \n e por isso deve comecar novamente  \n Pensar sobre uma ideia explicando ela, torna esse metodo de aprendizado muito mais eficaz. \n Uma vez que voce consiga explicar uma ideia de forma simples e clara \n voce tera compreendido completamente o assunto.");
	puts("\n E ira se lembrar da materia por muito mais tempo \n A final, isso eh tudo que queremos quando estudamos um assunto.");
	puts("\n essa foi a quinta e ultima etapa, espero ter ajudado da melhor forma.");
}

