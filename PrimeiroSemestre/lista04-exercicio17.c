#include <stdio.h>
int main()
{
    int i;
    int num_usuario = 0;
    int fatorial = 1;
    
    for(i=1; i<=10; i++){
        printf("Informe um número para calcular seu fatorial: \n");
        scanf("%d", &num_usuario);
        
        int fatorial = 1;
        
        if(num_usuario < 20){
            int soma1 = 1;
            int j;
            for(j= 1;j<=num_usuario;j++){
                fatorial = fatorial * soma1;
                soma1 = soma1 + 1;
            }
            printf("O fatorial de %d é %d.\n", num_usuario, fatorial);
        }
        
        else{
            printf("Este número é maior que 20\n");
        }
    }
    
    return 0;
}