#include <stdio.h>
int main()
{
    int num_cpf = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0;
    int soma = 0, resto_divisão = 0, d10 = 0, soma2 = 0, d11;
    
    printf("Informe os 9 primeiros digitos de seu cpf: \n");
    scanf("%d", &num_cpf);
    
    if(num_cpf >= 10000000 && num_cpf < 1000000000 ){
        d9 = num_cpf % 10;
        num_cpf = num_cpf / 10;
        d8 = num_cpf % 10;
        num_cpf = num_cpf / 10;
        d7 = num_cpf % 10;
        num_cpf = num_cpf / 10;
        d6 = num_cpf % 10;
        num_cpf = num_cpf / 10;
        d5 = num_cpf % 10;
        num_cpf = num_cpf / 10;
        d4 = num_cpf % 10;
        num_cpf = num_cpf /10;
        d3 = num_cpf % 10;
        num_cpf = num_cpf / 10;
        d2 = num_cpf % 10;
        num_cpf = num_cpf / 10;
        d1 = num_cpf % 10;
        
        soma = 10 * d1 + 9 * d2 + 8 * d3 + 7 * d4 + 6 * d5 + 5 * d6 + 4 * d7 + 3 * d8 + 2 * d9;
        resto_divisão = soma % 11;
        
        if(resto_divisão == 0 || resto_divisão == 1){
            d10 = 0;
        }else{
            d10 = 11 - resto_divisão;
        }
        resto_divisão = 0;
        soma2 = 11 * d1 + 10 * d2 + 9 * d3 + 8 * d4 + 7 * d5 + 6 * d6 + 5 * d7 + 4 * d8 + 3 * d9 + 2 * d10;
        
        resto_divisão = soma2 % 11;
        
        if(resto_divisão == 0 || resto_divisão == 1){
            d11 = 0;
        }else{
            d11 = 11 - resto_divisão;
        }
        
        printf("Os digitos verificadores são %d e %d", d10, d11);
        
    }else{
        printf("Digite De forma valida: \n");
    }
    
    return 0;
}
