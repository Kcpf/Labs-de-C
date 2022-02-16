#include <stdio.h>

char * verifica(int number1, int number2) {
    if (number2 == 0) return "Número 2 não pode ser 0";

    if (number1 % number2 == 0) return "É múltiplo";

    return "Não é múltiplo"; 
}

int main(int argc, char *argv[]) {
    int number1, number2 = 1;

    while (number1 != 0 || number2 != 0) {
        scanf("%d ", &number1);
        scanf("%d", &number2);

        printf("%s \n", verifica(number1, number2));
    } 

    return 0;
}
