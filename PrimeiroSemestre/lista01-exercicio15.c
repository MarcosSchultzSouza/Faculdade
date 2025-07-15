#include <stdio.h>

int main()
{
    float lado1;
    float lado2;
    float lado3;
    float semiperimetro;
    
    printf("Digite um numero: \n");
    scanf("%f", &lado1);
    
    printf("Digite outro numero: \n");
    scanf("%f", &lado2);
    
    printf("Digite outro numero: \n");
    scanf("%f", &lado3);
    
    semiperimetro = (lado1 + lado2 + lado3) / 2;
    
    printf("O semiperímetro de um triângulo é de: %0.2f\n", semiperimetro);
    
    return 0;
}
