#include <stdio.h>

//If Basico

int main(){
	
	//dados utilisados
	int idade;
	
	//falar pro cliente o objetivo do codigo e extrair dados
	printf("Por favor nos informe a sua idade \n");
	scanf("%d",&idade);
	
	//checar se o dado "idade" � suficiente para entrar na balada
	
	//op��o caso a idade n�o seja suficiente
	if(idade < 18){
		
		printf("Voce e muito novo \n nao entrara na balada");
	}
	
	//op��o caso a idade seja suficiente 
	if(idade >= 18){
		
		printf("Voce e maior de idade \n pode entrar na balada.");
	}
		
	return 0;
	
}


