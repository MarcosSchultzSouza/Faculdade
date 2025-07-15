#include <stdio.h>
int main()
{
    float base;
    float altura;
    float area;
    
    printf("Digite um numero que sera a base de seu triângulo: \n");
    scanf("%f", &base);
    
    printf("Digite outro numero que sera a altura do triângulo \n");
    scanf("%f", &altura);
    
    area = (base * altura) / 2;
    
    printf("A area de seu triangulo é de: %0.2f\n", area);
    
    
    return 0;
}
