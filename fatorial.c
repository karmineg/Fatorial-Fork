#include <stdio.h>

int main() {
    system ("color 05");
    int number;
    printf("Digite um numero inteiro: ");
    scanf("%d", &number);

    int result = 1;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }

    printf("Fatorial de %d: %d\n", number, result);
    return 0;
}
