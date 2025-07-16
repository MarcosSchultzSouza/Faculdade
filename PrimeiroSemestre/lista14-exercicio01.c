#include <stdio.h>
int main()
{
    float marco[31], menor = 1000, maior = -1000, soma_total = 0, media = 0;
    int i, total_dias = 0, guarda_dias[31];
    
    for(i=0; i<31; i++){
        printf("Digite a temperatura do dia %d/03 \n", i+1);
        scanf("%f", &marco[i]);
    }
    
    for(i=0; i<31; i++){
        if(marco[i] < menor){
            menor = marco[i];
        }
        if(marco[i] > maior){
            maior = marco[i];
        }
        soma_total = soma_total + marco[i];
    }
    
    media = soma_total / 31;
    
    printf("A menor temperatura do mes de março foi %.2f\n", menor);
    printf("A maior temperatura do mes de marco foi %.2f\n", maior);
    printf("A média de temperatura do mes de março foi %.2f\n", media);
    
    for(i=0; i<31; i++){
        if(marco[i] < media){
            guarda_dias[total_dias] =  i+1;
            total_dias++;
        }
    }
    
    printf("Quantidade de dias que a temperatura foi inferior a média: %d\n", total_dias);
    
    for(i=0; i<total_dias; i++){
        printf(" %d ", guarda_dias[i]);
    }
    
    return 0;
}