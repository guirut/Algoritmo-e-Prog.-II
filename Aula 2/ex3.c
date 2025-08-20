#include <stdio.h>

int main() {
    float C;
    float F;

    printf("°C: \n");
    scanf("%f", &C);

    F = (C * 9 / 5  )+ 32;

    printf("Uma temperatura de %f graus Celsius equivale a %f graus Fahrenheit. \n", C , F);
    
    return 0;
}