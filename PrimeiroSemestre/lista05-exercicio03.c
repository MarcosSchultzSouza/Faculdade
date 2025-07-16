#include <stdio.h>
int main()
{
    int i, jurado;
    float nota;
    
    int soma1 = 0, soma_notas = 0;
    float media_notas = 0;
    float maior_nota = 0;
    float menor_nota = 11;
    for(i=1; i<=7; i++){
        printf("Informe sua nota do concurso: \n");
        scanf("%f",&nota);
        
        if(nota > maior_nota){
            maior_nota = nota;
        }
        if(nota < menor_nota){
            menor_nota = nota;
            jurado = i;
        }
        
        soma1 = soma1 + 1;
        soma_notas = soma_notas + nota;
        
    }
    
    media_notas = soma_notas / soma1;
    
    printf("A média das notas é: %.2f", media_notas);
    printf("A maior nota é: %.2f",maior_nota);
    printf("A menor nota é: %.2f e o jurado é: %d", menor_nota, jurado);
    
    return 0;
}