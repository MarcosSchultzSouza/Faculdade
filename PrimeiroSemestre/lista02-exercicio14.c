#include <stdio.h>
int main()
{
    float altura, peso_ideal;
    char sexo;
    
    printf("Qual é sua altura em metros: \n");
    scanf("%f", &altura);
    
    printf("Digite seu sexo M|m para masculino e F|f para feminino: \n");
    scanf(" %c", &sexo);
    
    if(sexo == 'M' || sexo == 'm'){
        peso_ideal = (72.7 * altura ) - 58;
        printf("Peso ideal %.2f.", peso_ideal);
    }
    else if(sexo == 'F' || sexo == 'f'){
        peso_ideal = ( 62.1 * altura) - 44.7;
        printf("Peso ideal %.2f.", peso_ideal);
    }
    else{
        printf("Não foi digitado nem M|m nem F|f digite corretamente:");
    }
    
    return 0;
}