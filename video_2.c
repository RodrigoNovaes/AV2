#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Nome: Gustavo Lima de Oliveira Carvalho
//RA: 2216104586
//Nome: Rodrigo de Novaes Santos
//RA: 2216109814

int opcao;

int main(){
	
	puts("\n\t\tBem vindo.");
	
	puts("\n Neste programa iremos apresentar a tecnica Pomodoro.");
	
	puts("\n ela serve para voce ter mais foco em suas atividades do dia\n e pode aumentar muito a sua produtividade.");
	
	puts("\n Abaixo teremos um menu com 4 pontos muito importante para voce dominar a tecnica. \n Nas quais voce pode selecionar a qual desejar.");
	
	menu();
	
	return 0; 
}

menu(){
	
	puts("\n\n\n\t\t Bem vindo ao menu de opcoes.");
	puts("\n\n Selecione a opcao de 1 a 4 ou 0 caso deseja encerrar.");
	puts("\n\t 1- Etapa Tempo.");
	puts("\n\t 2- Etapa Pausas.");
	puts("\n\t 3- Etapa Ferramentas.");
	puts("\n\t 4- Etapa Interrupcoes.");
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
			
		case 0: system("pause>>null");
		break;
		
		default: printf("\n opcao invalida");
		break;
	
	}

}

etapa1(){
	
	puts("\n\n\t\t Etapa 1 - Tempo");
	
	puts("\n A ideia eh pegar um cronometro e programalo para ele tocar em 25 minutos \n nesse periodo de 25 minutos eh chamado de pomodori \n e durante o pomodori voce deve ficar focado apenas em uma tarefa.");
	puts("\n Vale resaltar que nao existe meio pomodori, pomodori de 10 minutos ou mesmo faltando 1 minuto\n tem que ser os 25 minutos completos.");
	puts("\n E voce deve focar 100% do tempo em apenas uma tarefa \n como pomodori eh curto, voce vai acabar focando apenas em terminar a sua tarefa.");
	puts("\n Essa foi a primeira etapa.");
}

etapa2(){
	
	puts("\n\n\t\t Etapa 2 - Pausas");
	
	puts("\n As pausas sao obrigatorias sempre, voce nao deve pular elas.");
	puts("\n Sempre que voce terminar um pomodori, pare por 5 minutos \n procure algo para distrair sua cabeca, voce pode descancar, dar um volta etc...");
	puts("\n Esse descanco de 5 minutos serve para relaxar a sua mente \n e te preparar para a proxima tarefa.");
	puts("\n Vale lembrar que a cada 4 pomodoris completos voce deve dar um descanco maior \n algo entre 15 a 30 minutos.");
	puts("\n Essa foi a segunda etapa.");
}

etapa3(){
	
	puts("\n\n\t\t Etapa 3 - Ferramentas");
	
	puts("\n Alem do cornometro voce vai precisar de duas listas");
	puts("\n A primeira lista eh a de inventario, nela voce podera anotar todas as suas tarefas \n seja uma tarefa que voce fara atualmente  ou futuramente.");
	puts("\n A segunda lista eh a de tarefas do dia, nela voce anotara as taferas que ira fazer naquele dia \n terefas que voce tira da primeira lista e outras que surgem ao longo do dia.");
	puts("\n Voce deve colocar uma estimativa de quantos pomodoris voce ira utilizar para realizar cada tarefa \n ");
	puts("\n Caso a tarefa seja muito comprida e exija muitos pomodoris \n voce pode dividir essa tarefa grande em partes e cada parte voce pode determinar quantos pomodoris sera utilizado para cada uma.");
	puts("\n Essa foi a terceira etapa");
}

etapa4(){
	
	puts("\n\n\t\t Etapa 4 - Interrupcoes");
	
	puts("\n Essa eh bem simples, voce apenas deve se livrar de interrupcoes enquanto estiver realizando alguma tarefa.");
	puts("\n Evite o maximo possivel de interrupcoes e fique focado apenas em suas tarefas.");
	puts("\n Essa foi a quarta e ultima etapa, espero ter ajudado da melhor forma.");
}
