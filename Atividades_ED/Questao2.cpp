#include <stdio.h>
#include <locale.h>

int retorna_valor_absoluto(int valor) {
    if (valor > 0) return printf("O valor absoluto é: [%d]", valor);
    else return printf("O valor absoluto é: [%d]", (valor * -1));
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int valor;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    retorna_valor_absoluto(valor);

}