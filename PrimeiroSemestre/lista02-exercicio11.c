#include <stdio.h>
int main()
{
    float numero1, numero2;
    
    printf("Digite o primeiro numero real: \n");
    scanf("%f", &numero1);
    
    printf("Digite o segundo numero real: \n");
    scanf("%f", &numero2);
    
    if(numero1 > numero2){
        printf("%.2f - %.2f = %.2f.", numero1, numero2, numero1 - numero2);
    }
    if(numero2 > numero1){
        printf("%.2f - %.2f = %.2f.", numero2, numero1, numero2 - numero1);
    }
    if(numero1 == numero2){
        printf("Os dois numeros reais são iguais");
    }
    
    return 0;
}