#include <stdio.h>

int main() {

    int a, b , soma, sub, mult, div;
    
    printf("Digite um número: \n");
    scanf("%d", &a);

    printf("Digite o outro número: \n");
    scanf("%d", & b);

    soma = a + b ;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("A soma é: %d | A subtração é: %d \nA multiplicação é: %d | A divisão é: %d \n", soma , sub , mult , div);

    return 0;
}
