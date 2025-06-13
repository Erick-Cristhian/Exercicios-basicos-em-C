/* Uma grande emissora de televisão quer fazer uma enquete entre os seus telespectadores para saber
qual o melhor jogador após cada jogo. Para isto, faz-se necessário o desenvolvimento de um programa,
que será utilizado pelas telefonistas, para a computação dos votos. Sua equipe foi contratada para
desenvolver este programa. Para computar cada voto, a telefonista digitará um número, entre 1 e 23,
correspondente ao número da camisa do jogador. Um número de jogador igual zero, indica que a
votação foi encerrada. Se um número inválido for digitado, o programa deve ignorá-lo, mostrando uma
breve mensagem de aviso, e voltando a pedir outro número. Após o final da votação, o programa deverá
exibir: O total de votos computados; Os números e respectivos votos de todos os jogadores que
receberam votos; O percentual de votos de cada um destes jogadores; O número do jogador escolhido
como o melhor jogador da partida, juntamente com o número de votos e o percentual de votos dados
a ele. Observe que os votos inválidos e o zero final não devem ser computados como votos. O resultado
aparece ordenado pelo número do jogador. O programa deve fazer uso de arrays. O programa deverá
executar o cálculo do percentual de cada jogador através de uma função. Esta função receberá dois
parâmetros: o número de votos de um jogador e o total de votos. A função calculará o percentual e
retornará o valor calculado.
Exemplo: Enquete: Quem foi o melhor jogador?
Número do jogador (0=fim): 9 Número do jogador (0=fim): 10 Número do jogador (0=fim): 9 Número do
jogador (0=fim): 10 Número do jogador (0=fim): 11 Número do jogador (0=fim): 10 Número do jogador
(0=fim): 50 Informe um valor entre 1 e 23 ou 0 para sair! Número do jogador (0=fim): 9 Número do
jogador (0=fim): 9 Número do jogador (0=fim): 0
Resultado da votação:
Foram computados 8 votos.
Jogador Votos % 9 4 50,0% 10 3 37,5% 11 1 12,5% O melhor jogador foi o número 9, com 4 votos,
correspondendo a 50% do total de votos. */


#include <stdio.h>
#include <stdlib.h>


float calcularPercentual(int votos, int total) {
    if (total == 0) return 0.0;
    return ((float)votos / total) * 100;
}

int main() {
    int votos[24] = {0}; 
    int voto, total_votos = 0;
    int melhor_jogador = 0, max_votos = 0;
    int i;

    printf("Enquete: Quem foi o melhor jogador?\n");

    while (1) {
        printf("Número do jogador (0=fim): ");
        scanf("%d", &voto);

        if (voto == 0) {
            break; 
        }
        else if (voto < 1 || voto > 23) {
            printf("Informe um valor entre 1 e 23 ou 0 para sair!\n");
            continue;
        }

        votos[voto]++;
        total_votos++;

        
        if (votos[voto] > max_votos) {
            max_votos = votos[voto];
            melhor_jogador = voto;
        }
    }

    
    printf("\nResultado da votacao:\n");
    printf("Foram computados %d votos.\n", total_votos);
    printf("Jogador\tVotos\t%%\n");

    
    for(i = 1; i <= 23; i++) {
        if (votos[i] > 0) {
            printf("%d\t%d\t%.1f%%\n", i, votos[i], calcularPercentual(votos[i], total_votos));
        }
    }

    
    if (total_votos > 0) {
        printf("\nO melhor jogador foi o numero %d, com %d votos, ", melhor_jogador, max_votos);
        printf("[%.1f%% do total de votos.]\n", 
               calcularPercentual(max_votos, total_votos));
    } else {
        printf("\nNenhum voto foi computado.\n");
    }

    return 0;
}
