#include <stdio.h>
#include <math.h>

int main()
{
    float lado1, lado2, lado3;
    float area, semiperimetro;
    
    printf("Digite um numero que vai representar um lado: \n");
    scanf("%f", &lado1);
    
    printf("Digite outro numero que sera outro lado: \n");
    scanf("%f", &lado2);
    
    printf("Digite um numero que sera o ultimo lado: \n");
    scanf("%f", &lado3);
    
    semiperimetro = (lado1 + lado2 + lado3)/2;
    
    area = sqrt(semiperimetro *(semiperimetro - lado1 ) * (semiperimetro - lado2) * (semiperimetro - lado3));                    
    
    printf("A area di triangulo formado é de: %f", area);
    
    return 0;
}
