#include <stdio.h>
int main()
{
    float valor1, valor2, area;
    
    printf("Digite um valor: ");
    scanf("%f", &valor1);
    
    printf("Digite um valor: ");
    scanf("%f", &valor2);
    
    area = valor1 * valor2;
    
    printf("A area deste retangulo é de: %0.2f ", area);
    
    return 0;
}
