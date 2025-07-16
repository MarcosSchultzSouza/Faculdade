#include <stdio.h>
int main()
{
    int num, num_usuario, nao_pode = 0, menor = - 1000;
    
    printf("Quantos números você quer digitar: \n");
    scanf("%d", &num);
    
    while(num != 0){
        num = num - 1;
        printf("Digite um número: \n");
        scanf("%d", &num_usuario);
        
        if(num_usuario > menor){
            menor = num_usuario;
        }else{
            nao_pode = 1;
        }
    }
    
    if(nao_pode == 1){
        printf("Essa sequencia não é estritamente crescente. \n");
    }else{
        printf("Essa é uma sequencia estritamente crescente. \n");
    }
    
    return 0;
}