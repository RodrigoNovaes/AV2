// O poder do hábito

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

//Nome: Gustavo Lima de Oliveira Carvalho
//RA: 2216104586
//Nome: Rodrigo de Novaes Santos
//RA: 2216109814

int main(){
	
	int j;
	printf("Objetivo do Treino: Perca de 8000 Calorias em 4 Semanas\n\n");
	printf("1 Semana\n");
	printf("Meta do dia: Correr 10 KM\n");
	for(j = 0; j <= 100; j++){
		if (j == 10){
		printf("\n%dKM: ",j = rand () % 100); printf("Parabens !!! Perca de Calorias = 2000\n\n");
		break;
	}
		else{
		printf("\n%dKM: ",j); printf("Meta Nao Atingida\n");
		 
	}
}
printf("2 Semana");
printf("\nMeta do dia: Correr 20 KM\n");
for(j = 0; j <= 100; j++){
		if (j == 20){
		printf("\n%dKM: ",j); printf("Parabens !!! Perca de Calorias = 4000\n");
		break;
	}
		else{
		printf("\n%dKM: ",j); printf("Meta Nao Atingida\n");
	}
}
printf("\n3 Semana");
printf("\nMeta do dia: Correr 40 KM\n");
for(j = 0; j <= 100; j++){
		if (j == 40){
		printf("\n%dKM: ",j); printf("Parabens !!! Perca de Calorias = 6000\n");
		break;
	}
		else{
		printf("\n%dKM: ",j); printf("Meta Nao Atingida\n");
	}
}
printf("\n4 Semana");
printf("\nMeta do dia: Correr 60 KM\n");
for(j = 0; j <= 100; j++){
		if (j == 60){
		printf("\n%dKM: ",j); printf("Parabens !!! Perca de Calorias = 8000\n");
		printf("\nParabens Voce Conseguiu!!!");
		break;
	}
		else{
		printf("\n%dKM: ",j); printf("Meta Nao Atingida\n");
	}
}
	

getch();
return 0;
}
