#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define A 12

//Nome: Gustavo Lima de Oliveira Carvalho
//RA: 2216104586
//Nome: Rodrigo de Novaes Santos
//RA: 2216109814

int main(){
	int i, j, n[A], temp, x, Atividades;
	printf("Numero de Atividades Mensal\n ");
	for(x=0; x<A; x++){
		n[A] = rand () % 20;
		printf("\nx[%02d] = %03d \t\t", x, n[A]);
	}
	printf("\n\n-------------------------- \n\n");
	
	printf(" Atividades Mensais por ordem de Urgencia\n");
	
	for(i = 0; i < A; i++){
		for(j = 0; j < A-i; j++){
			if(n[j] > n[j+1]){
				temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
		}
	}
	for(x=0; x<A; x++){
		printf("\nx[%02d] = %03d \t\t", x, n[x]);
	}


getch();
return 0;
}
