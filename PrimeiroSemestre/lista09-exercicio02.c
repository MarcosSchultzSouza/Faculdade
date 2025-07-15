#include <stdio.h>

int main()
{
    int num, i, num_usuario, maior = 10000, nao_estrita_decres = 0;
    
    printf("Quantos números deseja digitar: \n");
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
        printf("Digite um número: \n");
        scanf("%d", &num_usuario);
        
        if(maior > num_usuario){
            maior = num_usuario;
        }else{
            nao_estrita_decres = 1;
        }
    }
    
    if(nao_estrita_decres == 1){
        printf("Esta sequencia não é estritamente decrescente.\n");
    }else{
        printf("Esta sequencia é estritamente decrescente.\n");
    }
    
    return 0;
}