#include <stdio.h>
int main()
{
    int i, num, j, digito = 0, soma = 0;
    
    for(i=1; i<=10; i++){
        printf("Informe um número: \n");
        scanf("%d", &num);
        
        soma = 0;
        while(num != 0){
            digito = num % 10;
            num = num / 10;
            
            soma = soma + digito;
        }
        printf("A soma dos digitos é = %d \n", soma);
    }
    
    return 0;
}
