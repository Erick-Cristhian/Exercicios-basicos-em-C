/*Fa�a um programa que leia n�meros reais maiores que zero. Quando for entrado o n�mero zero, o
programa dever� apresentar quantos n�meros foram entrados e a m�dia destes.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int numero_escolhido,qtd,soma,media;
	qtd = 0;
	numero_escolhido = 1;
	
	printf("Insira a quantidade de numeros desejada, quanto zero for inserido, a media entre eles sera mostrada.\n\n");
	
	while(numero_escolhido != 0){
		printf("\nescolha o %do numero: ", qtd + 1);
		scanf("%d", &numero_escolhido);
		if(numero_escolhido != 0){
			soma= soma + numero_escolhido;
			qtd++;
		}
		
	}
	
	media = soma / qtd;
	
	printf("\nVoce Inseriu %d numeros e a media entre ele e equivalente a %d",qtd, media);
	
	
}
