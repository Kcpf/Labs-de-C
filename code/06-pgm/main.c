#include <stdio.h>

struct imagem {
    int largura;
    int altura;
    int max_pixel;
    int matrix[640][480];
};

void le_imagem(struct imagem *imagem) {
    char str[100];

    fgets(str, 100, stdin);
    scanf("%d", &imagem->largura);
    scanf("%d", &imagem->altura);
    scanf("%d", &imagem->max_pixel);
    
    for (int i = 0; i < imagem->largura; i++) {
        for (int j = 0; j < imagem->altura; j++) {
            scanf("%d", &imagem->matrix[i][j]);     
        }
    }
}

int limiar(int level, int limiar) {
    if (level < limiar) return 0;

    return 255;
}

void escreve_imagem(struct imagem *imagem) {
    for (int i = 0; i < imagem->largura; i++) {
        for (int j = 0; j < imagem->altura; j++) {
            imagem->matrix[i][j] = limiar(imagem->matrix[i][j], 120);   
        }
    }
}

void print_imagem(struct imagem *imagem) {
    for (int i = 0; i < imagem->largura; i++) {
        for (int j = 0; j < imagem->altura; j++) {
            printf("%d ", imagem->matrix[i][j]);
        }
    }
}

int main() {

    struct imagem imagem;
    le_imagem(&imagem);

    escreve_imagem(&imagem);

    print_imagem(&imagem);    

    return 0;
}
