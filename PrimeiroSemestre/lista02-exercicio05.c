#include <stdio.h>
int main()
{
    int numero; 
    int contador_impar = 0;
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);
    
    if(numero % 2 != 0){
        contador_impar++;
    }
    
    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &numero);
    
    if (numero % 2 != 0){
        contador_impar++;
    }

    printf("Digite o terceiro numero inteiro: \n");
    scanf("%d", &numero);
    
    if (numero % 2 != 0){
        contador_impar++;
    }
    
    printf("Digite o quarto numero inteiro: \n");
    scanf("%d", &numero);
    
    if (numero % 2 != 0){
        contador_impar++;
    }
    
    printf("Digite o quinto numero inteiro: \n");
    scanf("%d", &numero);
    
    if(numero % 2 != 0){
        contador_impar++;
    }
    
    printf("Digite o sexto numero inteiro: \n");
    scanf("%d", &numero);
    
    if(numero % 2 != 0){
        contador_impar++;
    }
    
    printf("Foram informados %d numeros impares: \n", contador_impar);
    
    return 0;
}
