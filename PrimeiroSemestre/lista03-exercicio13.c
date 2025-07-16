#include <stdio.h>
int main()
{
    int matricula;
    float prova1, prova2, prova3, prova4, media_arit;
    
    printf("Informe o seu numero da matricula: \n");
    scanf("%d", &matricula);
    
    printf("Informe o valor de sua primeira, segunda, terceira e quarta prova: \n");
    scanf("%f %f %f %f", &prova1, &prova2, &prova3, &prova4);
    
    int menor_nota = prova1;
    if(prova2 < menor_nota){
        menor_nota = prova2;
    }
    if(prova3 < menor_nota){
        menor_nota = prova3;
    }
    if(prova4 < menor_nota){
        menor_nota = prova4;
    }
    
    media_arit = (prova1 + prova2 + prova3 + prova4 - menor_nota)/ 3;
    
    printf("Código do aluno: %d \n", matricula);
    printf("Média: %.2f \n", media_arit);
    
    if(media_arit >= 6){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
    
    return 0;
    
    }