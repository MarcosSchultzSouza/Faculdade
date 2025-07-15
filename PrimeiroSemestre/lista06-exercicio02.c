#include <stdio.h>
int main()
{
    int codigo = 1;
    int votos = 0;
    int maior =0;
    int cod1 =0;
    int medio = 0;
    int cod2 = 0;
    
    while(codigo != 0){
        printf("Digite o codigo de seu candidato: \n");
        scanf("%d", &codigo);
        
        printf("Digite o número de votos que ele fez: \n");
        scanf("%d", &votos);
        
        if(votos > maior){
            maior = votos;
            cod1 = codigo;
        }else if(votos > medio){
            medio = votos;
            cod2 = codigo;
        }
    }
    
    printf("O maior votado foi %d e teve %d votos.\n", cod1, maior);
    printf("O segundo maior votado foi %d e teve %d votos.\n", cod2, medio);
    
    return 0;
}