/* Solicitar um n�mero entre 1 e 4. Se a pessoas digitar um n�mero diferente, mostrar a mensagem
&quot;entrada inv�lida&quot; e solicitar o n�mero novamente. Se digitar correto mostrar o n�mero digitado. */

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero;
	int contador = 1;
	
	printf("Esse e um codigo bem simples, os unicos numeros que podem ser inseridos s�o entre 1 e 4\nQualquer coisa alem disso devolvera um erro\n\n");
	
	while(1){
		
		printf("Digite o %do numero: ",contador);
		scanf("%d", &numero);
		
		if(numero > 0 && numero < 5){
			printf("O numero digitado foi: %d\n\n", numero);
		}	
		
		else{
			printf("&quot;entrada inv�lida&quot\n\n");
		}
		
		contador++;
		
	}
}
