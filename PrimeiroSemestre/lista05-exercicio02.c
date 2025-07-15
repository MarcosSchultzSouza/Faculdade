#include <stdio.h>
int main()
{
    int nota1, nota2;
    float media_aritmetica;
    int trabalhos_extras;
    
    printf("Informe sua primeira nota:\n");
    scanf("%d", &nota1);
    
    printf("Informe sua segunda nota:\n");
    scanf("%d", &nota2);
    
    printf("Informe quantos trabalhos extras \n");
    scanf("%d", &trabalhos_extras);
    
    media_aritmetica = (nota1 + nota2) / 2;
    
    if(media_aritmetica >= 6){
        if(trabalhos_extras >=5){
            printf("Aprovado com bônus");
        }else{
            printf("Aprovado");
        }
    }else{
        printf("Reprovado");
    }
    
    return 0;
}