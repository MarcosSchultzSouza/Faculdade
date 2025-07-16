#include <stdio.h>
int main()
{
    int i;
    
    int num_usuario = 0;
    int soma_impar = 0;
    int soma1 = 0;
    float div_num_impar = 0;
    for(i=1; i<=15; i++){
        printf("Digite um número: \n");
        scanf("%d", &num_usuario);
        
        if(num_usuario %2 != 0){
            soma1 = soma1 + 1;
            soma_impar = soma_impar + num_usuario;
        }
    }

    if( soma1 > 0){
        div_num_impar = soma_impar / soma1;
        printf("A média dos números impares informados é: %.2f", div_num_impar);
    }else{
        printf("Não foram digitados numeros impares:");
    }
    
    return 0;
}
