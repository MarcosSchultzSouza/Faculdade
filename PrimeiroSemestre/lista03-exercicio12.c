#include <stdio.h>
int main()
{
    int matricula;
    float prova1, prova2, prova3, media_pond;
    
    printf("Informe o seu número de matricula: \n");
    scanf("%d", &matricula);
    
    printf("Informe as sua primeira, segunda e terceira notas: \n");
    scanf("%f %f %f", &prova1, &prova2, &prova3);
    
    int maior_nota;
    maior_nota = prova3;
    if(prova1 > maior_nota){
        int aux = maior_nota;
        maior_nota = prova1;
        prova1 = aux;
    }else if(prova2 > maior_nota){
        int aux = maior_nota;
        maior_nota = prova2;
        prova2 = aux;
    }
    
    // A maior_nota tambem é a nota 3: só fiz assim por fazer mesmo:
    
    media_pond =  (prova1 * 3 + prova2 * 3 + maior_nota * 4)/ 10;
    
    printf("Código do aluno: %d \n", matricula);
    printf("A média é: %.2f \n", media_pond);
    
    if(media_pond >= 6){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
    
    return 0;
}