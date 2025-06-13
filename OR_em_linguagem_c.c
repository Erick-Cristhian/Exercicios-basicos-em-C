#include <stdio.h>


// o OR em linguagem C =  Shitf + \ (duas vezes) , ou seja, duas barras  verticais (por alguem motivo não dá pra comentar duas barras verticais
int main(){	
	
	//variavel utilizada no codigo
	int numero_escolhido;
	
	//dita o objetivo do codigo ao usuario e extrai os dados necessarios
	printf("Agora vamos digitar 1 ou 10, caso o numero digitado nao estiver nesses padroes uma mensagem de erro devera ser enviada \n");
	printf("Digite o numero: \n");
	scanf("%d", &numero_escolhido);
	
	//verificar se o numero escolhido é 1 ou 10
	
	//opção caso seja 1 ou 10
	if(numero_escolhido == 1 || numero_escolhido == 10){
		
		printf("Sucesso!! \n voce escolheu um numero dentro das normas!!!");
	}
	
	//opção caso não seja 1 ou 10
	else{
		printf("Errou feio");
	}
}
