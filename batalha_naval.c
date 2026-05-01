#include <stdio.h>

int main() {
    int i, j; // Declaramos aqui em cima
    int tabuleiro[3][3] = {
        {0, 1, 0},
        {0, 0, 0},
        {1, 0, 0}
    };
    
    printf("--- BATALHA NAVAL ---\n\n");

    // 2. O "motor" que desenha o tabuleiro com visual melhorado
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
            	if (tabuleiro[i] [j] == 0){
			        printf ("~ "); // Se for 0, desenha onda
					} else {
						printf("N "); // Se nao for 0 (ou seja, 1 ), desenha Navio
				}
			}
            printf ("\n");}
            
            printf("\nLegenda: ~ e Agua | N e Navio\n");
            
            // 3. Hora de Jogar!
            int linha_ataque, coluna_ataque;
            
            printf("\n--- HORA DE ATACAR! ---\n");
            
            printf("Escolha a linha (0 a 2):");
            
            scanf("%d", &linha_ataque);
            printf("Escolha a coluna (0 a 2):");
            
            scanf("%d" , &coluna_ataque);
			
			// 4. Verificar se acertou
			if (tabuleiro[linha_ataque] [coluna_ataque] == 1) {
				printf("\n BOOOOM! Voce acertou um navio! \n");
			} else {
			     printf("\n PLUFT... Acertou apenas a agua. \n");
				 }           
            return 0;
        }
