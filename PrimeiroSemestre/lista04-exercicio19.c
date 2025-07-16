#include <stdio.h>
int main()
{
    int i;
    float peso, altura, maior_altura = 0, maior_peso;
    
    for(i=1; i<=10; i++){
        printf("Informe o seu peso: \n");
        scanf("%f", &peso);
        
        printf("Informe a sua altura: \n");
        scanf("%f", &altura);
        
        if(altura > maior_altura){
            maior_altura = altura;
            maior_peso = peso;
        }
    }
    
    printf("A pessoa mais alta mede %.2f metros e pesa %.2f kg", maior_altura, maior_peso);
    
    return 0;
}