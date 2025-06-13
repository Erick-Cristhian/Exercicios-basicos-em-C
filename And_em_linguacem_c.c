#include <stdio.h>

//&& == AND de python

//numero de 1 a 10 

int main(){
	
	//variavel utilizada durante o codigo
	int numero_escolhido;
	
	//esclarecer o objetivo do codigo e extrair dados
	printf("Agora vamos digitar um numero de 1 a 10,  \n caso o numero digitado nao estiver nesses padroes uma mensagem de erro devera ser enviada \n");
	printf("Digite o numero: \n");
	scanf("%d", &numero_escolhido);
	
	//opção caso o dado esteja dentro das normas (entre 1 e 10)
	if(numero_escolhido >= 1 && numero_escolhido <=10){
		
		printf("Sucesso!! \n voce escolheu um numero dentro das normas!!!");
	}
	
	//opção caso o dado não esteja dentro das normas (diferente de numero entre 1 ou 10)
	else{
		printf("Errou feio, o numero escolhido nao esta entre 1 e 10");
	}
}
