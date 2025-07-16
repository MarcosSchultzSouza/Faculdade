#include <stdio.h>

int main()
{
    int i, num, menor = -15, est_cre = 0, est_dec = 0, cre = 0, dec = 0, maior = 10000;
    
    for(i=1; i<=10; i++){
        printf("Digite um número: \n");
        scanf("%d", &num);
        
        if(menor < num){
            est_cre++;
            menor = num;
        }
        if(maior > num){
            est_dec++;
            maior = num;
        }
        if(menor <= num){
            cre++;
            menor = num;
        }
        if(maior >= num){
            dec++;
            maior = num;
        }
    }
    
    if(est_cre == 10){
        printf("Esta sequencia é estritamente crescente.\n");
    }else if(est_dec == 10){
        printf("Esta sequencia é estritamente decrescente. \n");
    }else if(cre == 10){
        printf("Esta sequencia é crescente. \n");
    }else if(dec == 10){
        printf("Esta sequencia é decrescente. \n");
    }else{
        printf("Esta sequencia é desordenada. \n");
    }

    return 0;
}