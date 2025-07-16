#include <stdio.h>
int main()
{
    int valor1, valor2;
    
    printf("Digite o primeiro valor inteiro: \n");
    scanf("%d", &valor1);
    
    printf("Digite o segundo valor inteiro: \n");
    scanf("%d", &valor2);
    
    if(valor1 % valor2 == 0 || valor2 % valor1 == 0){
        printf("São multiplos: %d e %d", valor1, valor2);
    }
    else{
        printf("Não são multiplos: %d e %d", valor1, valor2);
    }
    
    return 0;
}
