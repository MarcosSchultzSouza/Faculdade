#include <stdio.h>
int main()
{
    float nota1, nota2, nota3, exercicio, media;
    int matricula;
    
    printf("Informe sua primeira, segunda e terceira nota: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    printf("Informe a nota de seu exercicio: \n");
    scanf("%f", &exercicio);
    
    printf("informe seu número de matricula: \n");
    scanf("%d", &matricula);
    
    media = (nota1 + 2 * nota2 + 2 * nota3 + 4 * exercicio) / 10.0 ;
    
    char conceito;
    if(media < 4){
        conceito = 'E';
    }else if(media >= 4 && media < 6){
        conceito = 'D';
    }else if(media >= 6 && media < 7.5){
        conceito = 'C';
    }else if(media >= 7.5 && media < 9 ){
        conceito = 'B';
    }else if(media >= 9){
        conceito = 'A';
    }
    
    printf("Notas do aluno: %.2f, %.2f, %.2f  e  %.2f \n", nota1, nota2, nota3, exercicio);
    printf("Média: %.2f \n", media);
    printf("Conceito: %c \n", conceito);
    
    if(conceito == 'E' || conceito == 'D'){
        printf("Você foi Reprovado ");
    }else{
        printf("Você foi aprovado ");
    }
    
    
    return 0;
}