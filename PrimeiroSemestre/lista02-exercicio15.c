#include <stdio.h>
int main()
{
    float operando1, operando2, resultado;
    char operador;
    
    printf("Informe o primeiro numero de sua conta: \n");
    scanf("%f", &operando1);
    
    printf("Informe o operador (+),(-),(/),(*). \n");
    scanf(" %c", &operador);
    
    printf("Informe o segundo numero de sua conta: \n");
    scanf("%f", &operando2);
    
    if(operador == '/' && operando2 == 0){
        printf("Divisão por zero!!\n");
    }
    
    if(operador == '+' ){
        resultado = operando1 + operando2;
        printf("A soma foi de: %.2f e %.2f = %.2f \n", operando1, operando2, resultado);
    }else if (operador == '-'){
        resultado = operando1 - operando2;
        printf("A subtração foi de: %.2f e %.2f = %.2f \n", operando1, operando2, resultado);
    }else if(operador == '/'){
        resultado = operando1 / operando2;
        printf("A divisão foi de: %.2f e %.2f = %.2f \n", operando1, operando2, resultado);
    }else if(operador == '*'){
        resultado = operando1 * operando2;
        printf("A multiplicação foi de: %.2f e %2.f = %2.f \n", operando1, operando2, resultado);
    }else if(operador  != '+','-','/','*'){
        printf("Operador invalido:");
    }else if(operando2 == 0.00 ){
        printf("Divisão por zero");
    }
    
    return 0;
}