/*Escreva um algoritmo que leia um n�mero do teclado at� que encontre um n�mero menor ou igual a
1.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int numero;
	numero = 2;
	while(numero > 1){
		printf("Escolha seu numero(o programa acabara quando ele for menor ou igual a 1): ");
	scanf("%d", &numero);
	printf("Numero: %d escolhido!\n\n",numero);
	system("pause");
	system("cls");

	}
	
	printf("O PROGRAMA ACABOU!!!!");
}
