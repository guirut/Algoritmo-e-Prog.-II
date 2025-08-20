#include <stdio.h>
#include <math.h>

int main() {

    float a;
    float b;
    float h;

    printf("Cateto 1: \n");
    scanf("%f", &a);
    printf("Cateto 2: \n");
    scanf("%f", &b);
    
    h = sqrt((a * a) + (b * b));

    printf("Um triângulo retângulo com lados %f e %f tem uma hipotenusa igual a %f.", a,b,h);

    return 0;
}