#include <stdio.h>
#include <math.h>

int main(){
    float r;
    float area;

    printf("Raio: \n");
    scanf("%f", &r);

    area = M_PI * (r * r);
                        
    printf("Um crirculo com raio %f tem área igual a %f\n", r, area);
    
    return 0;
}