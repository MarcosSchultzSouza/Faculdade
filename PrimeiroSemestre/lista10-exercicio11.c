#include <stdio.h>

int main()
{
    int v[10];
    int i;
    float soma_media = 0, media = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0; i<10; i++){
        soma_media = soma_media + v[i];
    }
    
    media = soma_media / 10;
    
    printf("A média é de %.2f \n", media);
    printf("Números acima da media:\n");
    
    for(i=0; i<10; i++){
        if(v[i] > media){
            printf(" %d ", v[i]);
        }
    }

    return 0;
}