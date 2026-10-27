#include <stdio.h>

int main() {

    while(1) {
        printf("===============================\n   Calculadora Simples\n===============================\nSelecione uma operacao:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao:");
        int N, Um, Dois;
        scanf("%i", &N);

        if( N == 5 ) {
            printf("Obrigado por usar a calculadora! Ate a proxima.");
            return 0;
        }

        printf("Digite o primeiro numero: ");

        scanf("%i", &Um);

        printf("Digite o sugundo numero: ");

        scanf("%i", &Dois);

        if( N == 1 ) {
            printf("Resultado: %i + %i = %i\n", Um, Dois, Um + Dois);
        }

        if( N == 2 ) {
            printf("Resultado: %i - %i = %i\n", Um, Dois, Um - Dois);
        }

        if( N == 3 ) {
            printf("Resultado: %i * %i = %i\n", Um, Dois, Um * Dois);
        }

        if( N == 4 ) {
            if(Dois != 0) { 
                printf("Resultado: %i / %i = %i\n", Um, Dois, Um / Dois);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
        }

        char M;
        int Ver = 1;

        printf("Deseja realizar outra operacao? (s/n): \n");

        while(Ver) {
            scanf(" %c", &M);

            if(M != 's' && M != 'n') {
                printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
            } else {
                Ver = 0;
            }
        }

        if(M == 'n') {
            printf("Obrigado por usar a calculadora! Ate a proxima.");
            return 0;   
        }


    }

    return 0;
}
