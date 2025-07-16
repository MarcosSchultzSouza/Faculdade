#include <stdio.h>
int main()
{
    float v[15];
    int i, cont = 0, ja_eh = 0;
    float soma_media = 0, media = 0, menor_acima_da_media = 0;
    
    for(i=0; i<15; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%f", &v[i]);
    }
    
    for(i=0; i<15; i++){
        soma_media = soma_media + v[i];
        cont++;
    }
    
    media = soma_media / cont;
    printf("A média é de %.2f \n", media);
    
    for(i=0; i<15; i++){
        if(v[i] > media){
            menor_acima_da_media = v[i];
            ja_eh = 1;
        }
        if(v[i] > media && v[i] < menor_acima_da_media){
            menor_acima_da_media = v[i];
        }
    }
    
    printf("O menor valor acima da média é %.2f ", menor_acima_da_media);
    
    return 0;
}