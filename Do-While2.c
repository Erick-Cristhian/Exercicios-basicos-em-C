/* Crie um programa que leia um n�mero do teclado at� que encontre um n�mero igual a zero. No final,
mostre a soma dos n�meros digitados. */

#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int numero,soma;
	numero = 2;
	while(numero != 0){
		printf("Escolha seu numero(o programa acabara quando ele for igual a 0): ");
		scanf("%d", &numero);
		soma = soma + numero;
		printf("Numero: %d escolhido!\n\n",numero);
		system("pause");
		system("cls");

	}
		
	printf("A soma dos numeros inseridos eh: [%d]", soma);
}
