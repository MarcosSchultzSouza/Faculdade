#include <stdio.h>
int main()
{
    int i = 1;
    int num_usuario = 0;
    int menor_num = 1000;
    int soma1 = 0;
    
    while(i <= 20){
        printf("Informe um número inteiro: \n");
        scanf("%d", &num_usuario);
        
        if(num_usuario < menor_num){
            menor_num = num_usuario;
            if(menor_num = num_usuario){
                soma1 = soma1 + 1;
            }
        }
        
        i++;
    }
    
    printf("O menor número digitado foi %d.\n", menor_num);
    printf("E ele foi digitado %d vezes.\n", soma1);
    
    return 0;
}