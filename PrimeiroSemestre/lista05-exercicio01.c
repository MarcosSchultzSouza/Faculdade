#include <stdio.h>
int main()
{
    int idade, estudante;
    
    printf("Informe sua idade: \n");
    scanf("%d", &idade);
    
    printf("Você é estudante digite 1 para sim e 0 para não\n");
    scanf("%d", &estudante);
    
    if(idade < 12){
        printf("Entrada gratuita");
    }else if(idade >= 12 && idade <= 17){
        if(estudante == 1){
            printf("Entrada com 50 por cento de desconto");
        }else if(estudante == 0){
            printf("Entrada com 25 por cento de desconto");
        }else{
            printf("Informe se você é ou não um estudante");
        }
    }else if(idade >= 18 && idade <= 59){
        if(estudante == 1){
            printf("Entrada com 25 por cento de desconto");
        }else if(estudante == 0){
            printf("Entrada normal");
        }else{
            printf("Informe se você é ou não um estudante");
        }
    }else{
        printf("Entrada gratuita");
    }
    
    
    return 0;
}