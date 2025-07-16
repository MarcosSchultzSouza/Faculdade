#include <stdio.h>

int main()
{
    float v[31];
    float menor = 1000, soma_media = 0, maior = 0, media = 0;
    int i, num_dias = 0, cont = 0, guarda_dias[31];
    
    for(i=0; i<31; i++){
        printf("Digite a temperatura do dia %d/03 \n", i+1);
        scanf("%f", &v[i]);
    
        if(v[i] < menor){
            menor = v[i];
        }
        if(v[i] > maior){
            maior = v[i];
        }
        
        soma_media = soma_media + v[i];
    }
    
    media = soma_media / 31;
    
    for(i=0; i<31; i++){
        if(v[i] < media){
            num_dias++;
            guarda_dias[cont] = i+1;
            cont++;
        }
    }
    
    printf("A media de temperatura é de %.2f \n", media);
    printf("A maior temperatura é de %.2f \n", maior);
    printf("A menor temperatura é de %.2f \n", menor);
    printf("foram em %d dias que a temperatura foi menor que a média \n", num_dias);
    printf("foram neste dias que a temperatura foi menor que a média abaixo:\n");
    for(i=0; i<cont; i++){
        printf("- %d ", guarda_dias[i]);
    }
    

    return 0;
}
