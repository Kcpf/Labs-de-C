#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

int modulo(int number) {
    if (number < 0) return -number;

    return number;
}

int manhattan(struct Ponto p1, struct Ponto p2) {
    return modulo(p1.x - p1.y) + modulo(p2.x - p2.y);
}

int main() {
    int num1, num2, num3, num4;

    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    struct Ponto p1 = { num1, num2 };
    struct Ponto p2 = { num3, num4 };

    printf("%d", manhattan(p1, p2));

    return 0;
}