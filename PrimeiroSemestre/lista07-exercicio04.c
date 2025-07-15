#include <stdio.h>
int main()
{
    int i, num_usuario;
    int sim_primo = 1;
    
    printf("Digite um número e verificarei se é primo: \n");
    scanf("%d", &num_usuario);
    
    for(i=2; i<num_usuario; i++){
        
        if(num_usuario % i == 0){
            sim_primo = 0;
            break;
        }
    }
    
    if(sim_primo == 1){
        printf("É um número primo. \n");
    }else{
        printf("Não é um número primo. \n");
    }
    
    return 0;
}