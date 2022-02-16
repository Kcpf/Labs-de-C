#include <stdio.h>


void sum_sub(int a, int b, int *sum, int *sub) {
    *sum = a + b;
    *sub = a - b;
}

void perimetro_area(int a, int b, int *perimetro, int *area) {
    *perimetro = 2 * (a + b);
    *area = a * b;
}

int main() {
    int num1, num2, sum, sub, area, perimetro;

    scanf("%d %d", &num1, &num2);

    sum_sub(num1, num2, &sum, &sub);
    perimetro_area(num1, num2, &perimetro, &area);

    printf("Soma: %d \nSub: %d\n", sum, sub);
    printf("Perimetro: %d \nArea: %d\n", perimetro, area);

    return 0;
}