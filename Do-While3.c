#include <stdio.h>

int main() {
    int lado, i, j;

  
    printf("Digite o tamanho do lado do quadrado (1-20): ");
    scanf("%d", &lado);

  
    if (lado < 1 || lado > 20) {
        printf("Tamanho invalido! O lado deve estar entre 1 e 20.\n");
        return 1;
    }

 
    for (i = 1; i <= lado; i++) {
        for (j = 1; j <= lado; j++) {
            
            if (i == 1 || i == lado || j == 1 || j == lado) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }

    return 0;
}
