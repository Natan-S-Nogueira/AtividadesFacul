#include <stdio.h>

int potencia(int base, int expoente) {
    int potencia = base;
    for (int i = 1; i<=(expoente-1); i++) { 
        potencia *= base; 
    } 
    return printf("%d", potencia);
}

int main () {
    int base, expoente;

    printf("Digite o valor da base: ");
    scanf("%d", &base);
    printf("\nDigite o valor do expoente: ");
    scanf("%d\n", &expoente);

    printf("O valor da potência é: %d", potencia(base, expoente));

}