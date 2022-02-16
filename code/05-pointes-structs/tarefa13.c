#include <stdio.h>
#include <math.h>

struct Ponto {
    double x;
    double y;
};

double euclidian(struct Ponto p1, struct Ponto p2) {
    return  sqrt(pow(p1.x - p1.y, 2) + pow(p2.x - p2.y, 2));
}

int main() {
    double num1, num2, num3, num4;

    scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);

    struct Ponto p1 = { num1, num2 };
    struct Ponto p2 = { num3, num4 };

    printf("%lf", euclidian(p1, p2));

    return 0;
}