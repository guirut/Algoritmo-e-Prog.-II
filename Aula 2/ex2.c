#include <stdio.h>

int main() {
    int peso;
    float altura;
    float imc;

    printf("Peso em kg: \n");
    scanf("%d", &peso);

    printf("Altura em metros: \n");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("Seu IMC é: %f \n", imc);

    return 0;
}