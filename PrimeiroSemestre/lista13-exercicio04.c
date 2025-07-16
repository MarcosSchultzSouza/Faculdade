#include <stdio.h>
int main()
{
    int N, guarda[100];
    int i = 0, j, eh_primo = 0, cont = 0, aux;
    
    while(i < 1){
        printf("Digite o valor de N:\n");
        scanf("%d", &N);
        
        if(N >= 0 && N <= 100){
            i++;
        }else{
            printf("Digite um número válido!!!\n");
        }
    }
    
    for(i=2; i<1000; i++){
        eh_primo = 0;
        for(j=2; j<i; j++){
            if(i % j == 0){
                eh_primo = 1;
            }
        }
        if(eh_primo == 0){
            guarda[cont] = i;
            cont++;
        }
        if(cont == N){
            break;
        }
    }
    
    for(i=0; i<cont; i++){
        for(j=0; j<cont-1; j++){
            if(guarda[j] < guarda[j+1]){
                aux = guarda[j];
                guarda[j] = guarda[j+1];
                guarda[j+1] = aux;
            }
        }
    }
    
    for(i=0; i<cont; i++){
        printf(" %d ", guarda[i]);
    }
    
    return 0;
}