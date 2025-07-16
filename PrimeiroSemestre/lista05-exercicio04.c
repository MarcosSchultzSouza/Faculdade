#include <stdio.h>
int main()
{
    int i;
    float num_usuario = 0;
    float menor_num = 1000, maior_num = 0;
    for(i=1; i<=10; i++){
        printf("Informe um número: \n");
        scanf("%f", &num_usuario);
        
        if(num_usuario < menor_num){
            menor_num = num_usuario;
        }else if(num_usuario > maior_num){
            maior_num = num_usuario;
        }
    }
    
    printf("O maior número é: %.2f\n", maior_num);
    printf("O menor número é: %.2f\n", menor_num);
    
    return 0;
}