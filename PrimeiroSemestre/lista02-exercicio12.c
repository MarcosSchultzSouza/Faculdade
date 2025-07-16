#include <stdio.h>
int main()
{
    int idade;
    
    printf("Informe a idade correspondente do nadador. \n");
    scanf("%d", &idade);
    
    if(idade >= 5 && idade <= 7 ){
        printf("O nadador é infantil A");   
    }
    if(idade >= 8 && idade <= 10){
        printf("O nadador é infantil B");
    }
    if(idade >= 11 && idade <= 13){
        printf("O nadador é juvenil A");
    }
    if(idade >= 14 && idade <= 17){
        printf("O nadador é juvenil B");
    }
    if(idade >= 18){
        printf("O nadador é senior");
    }
    else{
        printf("A idade informada não corresponde a nenhuma informada.");
    }
    
    return 0;
}
