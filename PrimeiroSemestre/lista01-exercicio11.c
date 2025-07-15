#include <stdio.h>
int main()
{
    float aresta, area, volume;
    
    printf("Digite a aresta do cubo: \n");
    scanf("%f", &aresta);
    
    volume = aresta * aresta * aresta;
    area = 6 * aresta * aresta;
    
    printf("O volume do cubo é: %0.2f e a area é: %0.2f", volume, area);
    
    return 0;
}
