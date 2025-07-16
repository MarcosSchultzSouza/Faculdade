#include <stdio.h>
int main()
{
    int i, mes, soma1 = 0;
    float temperatura;
    float maior_temperatura = 0;
    float menor_temperatura = 100;
    float todas_temperatura = 0;
    float media_temperaturas = 0;
    
    
    printf("Informe quantos dias tem o mes que você quer a temperatura: \n");
    scanf("%d", &mes);
    
    for(i=1; i<=mes; i++){
        printf("Informe a temperatura do dia %d \n",i);
        scanf("%f", &temperatura);
        
        todas_temperatura = todas_temperatura + temperatura;
        soma1 = soma1 + 1;
        
        if(temperatura > maior_temperatura){
            maior_temperatura = temperatura;
        }
        if(temperatura < menor_temperatura){
            menor_temperatura = temperatura;
        }
    }
    
    media_temperaturas = todas_temperatura / soma1;
    
    printf("A maior temperatura deste mês é: %f", maior_temperatura);
    printf("A menor temperatura deste mês é: %f", menor_temperatura);
    printf("A média das temperaturas deste mês é: %f", media_temperaturas);      
    
    return 0;
}