#include <stdio.h>
int main()
{
    float numero1, numero2;
    
    printf("Digite o primeiro numero real: \n");
    scanf("%f", &numero1);
    
    printf("Digite o segundo numero real: \n");
    scanf("%f", &numero2);
    
    if(numero1 < numero2){
        printf("Valores em ordem crescente: %0.2f e %0.2f\n", numero1, numero2);
    }
    if(numero2 < numero1){
        printf("Valores em ordem crescente: %0.2f e %0.2f\n", numero2, numero1);   
    }
    if(numero1 == numero2){
        printf("Os valores %0.2f e %0.2f são iguais\n",numero1, numero2);
    }
    
    return 0;
}