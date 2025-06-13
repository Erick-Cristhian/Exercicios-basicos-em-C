/* 1. Solicitar a idade de várias pessoas e imprimir: Total de pessoas com menos de 21 anos. Total de
pessoas com mais de 50 anos. O programa termina quando idade for =-99. */

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade,menor_que_21, maior_que_50;
	
	menor_que_21 = 0;
	maior_que_50 = 0;
	
	
	printf("Nesse programa voce ira inserir varios valores que correspondem a idades.\nPara que o programa termine e os dados coletados sejam mostrados, voce deve inserir ""-99""\nOs dados que serao exebidos sao: Total de Idades [Abaixo de 21 e acima de 50 anos]\n\n ");
	int contador = 1;
	
	do{
		
		printf("Insira a %do idade: ",contador);
		scanf("%d", &idade);
		
		if(idade > 50){
			maior_que_50++;
		}
		
		else if(idade < 21){
			menor_que_21++;
			
		
		}
		
		contador++;
		
		
	}while(idade != -99);
	
	printf("\nPessoas acima dos 50: %d \nPessoas abaixo dos 21: %d", maior_que_50, menor_que_21);
}
