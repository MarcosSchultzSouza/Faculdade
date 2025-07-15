#include <stdio.h>
int main()
{
    float raio, pi, area_do_circulo;
    
    printf("Digite o valor do raio de um circulo: \n");
    scanf("%f", &raio);
    
    pi = 3.14159;
    area_do_circulo = pi * (raio *raio);
    
    printf("A area do circulo e de: %0.2f\n", area_do_circulo);
    
    return 0;
}
