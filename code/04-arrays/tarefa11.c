#include <stdio.h>
#define LINES 5
#define COLUMNS 4


int main(int argc, char *argv[]) {

    double matrix[LINES][COLUMNS];

    for (int i = 0; i < LINES; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    double soma_colunas[COLUMNS];
    int soma;

    for (int i = 0; i < COLUMNS; i++) {
        soma = 0;

        for (int j = 0; j < LINES; j++) {
            soma += matrix[j][i];
        }

        soma_colunas[i] = soma;
    }

    int maior_col = 0;

    for (int j = 0; j < COLUMNS; j++) {
        printf("%f \n", soma_colunas[j]);

        if (soma_colunas[j] > soma_colunas[maior_col]) {
            maior_col = j;
        }
    }

    printf("Maior coluna: %d", maior_col);

	return 0;
}