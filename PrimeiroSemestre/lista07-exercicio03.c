#include <stdio.h>
int main()
{
    int i, mes = 0, soma1 = 0;
    float temperatura = 0, maior = 0, menor = 1000, media = 0, total = 0;
    
    printf("Digite o número do mês que você quer medir a temperatura: \n");
    scanf("%d", &mes);
    
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        mes = 31;
    }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        mes = 30;
    }else if(mes == 2){
        mes = 28;
    }else{
        printf("Digite um número de mes valido \n");
    }
    
    for(i=1; i<=mes; i++){
        printf("Informe a temperatura do dia %d\n", i);
        scanf("%f", &temperatura);
        
        soma1++;
        if(temperatura > maior){
            maior = temperatura;
        }
        if(temperatura < menor){
            menor = temperatura;
        }
        total = total + temperatura;
    }
    
    media = total / soma1;
    
    printf("A maior temperatura registrada neste mês foi de %.2f graus\n", maior);
    printf("A menor temperatura registrada neste mês foi de %.2f graus\n", menor);
    printf("A media de temperatura neste mês é de: %.2f graus\n", media);
    
    return 0;
}