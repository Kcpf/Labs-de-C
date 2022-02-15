// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa6.c"

#include <stdio.h>

int fizz(int number) {
    return number % 3;
}

int buzz(int number) {
    return number % 5;
}

char * fizzbuzz(int number) {
    int fizz_number = fizz(number);
    int buzz_number = buzz(number);

    if ((fizz_number + buzz_number) == 0) return "Três e Cinco";
    if (fizz_number == 0) return "Três";
    if (buzz_number == 0) return "Cinco";

    return "Nenhum";
}

// TODO implemente seu programa aqui
int main() {

    int number = 15;

    printf("%s \n", fizzbuzz(number));

    return 0;
}
