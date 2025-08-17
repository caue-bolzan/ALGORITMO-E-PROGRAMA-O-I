#include <stdio.h>

int main() {
    int n1;
    int n2;
    int n3;

    // Entrada dos números
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    printf("\nOrdem crescente: ");
    // Verificando todas as combinações possíveis
    if (n1 <= n2 && n2 <= n3) {
        printf("%d %d %d", n1, n2, n3);
    } else if (n1 <= n3 && n3 <= n2) {
        printf("%d %d %d", n1, n3, n2);
    } else if (n2 <= n1 && n1 <= n3) {
        printf("%d %d %d", n2, n1, n3);
    } else if (n2 <= n3 && n3 <= n1) {
        printf("%d %d %d", n2, n3, n1);
    } else if (n3 <= n1 && n1 <= n2) {
        printf("%d %d %d", n3, n1, n2);
    } else { // n3 <= n2 && n2 <= n1
        printf("%d %d %d", n3, n2, n1);
    }

    printf("\nOrdem decrescente: ");
    // Mesma lógica invertida
    if (n1 >= n2 && n2 >= n3) {
        printf("%d %d %d", n1, n2, n3);
    } else if (n1 >= n3 && n3 >= n2) {
        printf("%d %d %d", n1, n3, n2);
    } else if (n2 >= n1 && n1 >= n3) {
        printf("%d %d %d", n2, n1, n3);
    } else if (n2 >= n3 && n3 >= n1) {
        printf("%d %d %d", n2, n3, n1);
    } else if (n3 >= n1 && n1 >= n2) {
        printf("%d %d %d", n3, n1, n2);
    } else { // n3 >= n2 && n2 >= n1
        printf("%d %d %d", n3, n2, n1);
    }

    return 0;
}
