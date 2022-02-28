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

int crop(int altura, int largura, struct imagem *imagem_original, struct imagem *imagem_cortada) {
    if (altura > imagem_original->altura || largura > imagem_original->largura) return 1; 

    imagem_cortada->altura = altura;
    imagem_cortada->largura = largura;
    imagem_cortada->max_pixel = imagem_original->max_pixel;

    for (int i = 0; i < largura; i++) {
        for (int j = 0; j < altura; j++) {
            imagem_cortada->matrix[i][j] = imagem_original->matrix[i][j];   
        }
    }

    return 0;
}

int blur(struct imagem *imagem_original, struct imagem *imagem_blur) {
    imagem_blur->altura = imagem_original->altura;
    imagem_blur->largura = imagem_original->largura;
    imagem_blur->max_pixel = imagem_original->max_pixel;

    for (int i = 0; i < imagem_original->largura; i++) {
        for (int j = 0; j < imagem_original->altura; j++) {
            if ()
            imagem_cortada->matrix[i][j] = imagem_original->matrix[i][j];   
        }
    }

    return 0;
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
    struct imagem imagem_cortada;
    le_imagem(&imagem);

    escreve_imagem(&imagem);

    // print_imagem(&imagem);

    crop(20, 20, &imagem, &imagem_cortada);

    print_imagem(&imagem_cortada);

    return 0;
}
