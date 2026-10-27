#include <stdio.h>

int main() {

    while(1) {
        printf("===============================\n   Calculadora Simples\n===============================\nSelecione uma operacao:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao:");
        double Um, Dois;
        char N;
        scanf(" %c", &N);

        if( N == '5' ) {
            printf("Obrigado por usar a calculadora! Ate a proxima.");
            return 0;
        }

        if(N != '1' && N != '2' && N != '3' && N != '4' && N != '5') {
            printf("Erro: A opcao informada deve estar entre 1 e 5 e nao deve ser uma letra.\n");
            continue;
        }

        printf("Digite o primeiro numero: ");

        scanf("%lf", &Um);

        printf("Digite o sugundo numero: ");

        scanf("%lf", &Dois);

        if( N == '1' ) {
            printf("Resultado: %g + %g = %g\n", Um, Dois, Um + Dois);
        }

        if( N == '2' ) {
            printf("Resultado: %g - %g = %g\n", Um, Dois, Um - Dois);
        }

        if( N == '3' ) {
            printf("Resultado: %g * %g = %g\n", Um, Dois, Um * Dois);
        }

        if( N == '4' ) {
            if(Dois != 0) { 
                printf("Resultado: %g / %g = %g\n", Um, Dois, Um / Dois);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
        }

        char M;
        int Ver = 1;

        printf("Deseja realizar outra operacao? (s/n): \n");

        while(Ver) {
            scanf(" %c", &M);

            if(M != 's' && M != 'n' && M != 'N' && M != 'S') {
                printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
            } else {
                Ver = 0;
            }
        }

        if(M == 'n' || M == 'N') {
            printf("Obrigado por usar a calculadora! Ate a proxima.");
            return 0;   
        }


    }

    return 0;
}
