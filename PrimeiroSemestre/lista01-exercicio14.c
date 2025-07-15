#include <stdio.h>
int main()
{
    float lado1;
    float lado2;
    float altura;
    float area;
    
    printf("Digite um numero: \n");
    scanf("%f", &lado1);
    
    printf("Digite outro numero: \n");
    scanf("%f", &lado2);
    
    printf("Digite só mais este numero: \n");
    scanf("%f", &altura);
    
    area = ((lado1 + lado2) * altura) /2;
    
    printf("A area do trapézio é de: %0.2f", area);
    
    return 0;
}
