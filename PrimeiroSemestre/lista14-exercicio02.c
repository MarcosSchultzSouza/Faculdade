#include <stdio.h>
int main()
{
    int v[30];
    int i, j, aux, num = 0;
    
    for(i=0; i<20; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0; i<20; i++){
        for(j=0; j<19; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    
    printf("Os 20 Digitos em ordem crescente:\n");
    
    for(i=0; i<20; i++){
        printf(" %d ", v[i]);
    }
    
    printf("\n");
    
    for(i=20; i<30; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &num);
        
        j = i -1;
        while(j>=0 && v[j] > num){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = num;
        
        printf("Vetor depois do número %d adicionado:", num);
        
        for(j=0; j<=i; j++){
            printf(" %d", v[j]);
        }
        printf("\n");
    }
    
    
    printf("\nOs 30 Digitos ordenados em ordem crescente:\n");
    
    for(i=0; i<30; i++){
        printf(" %d ", v[i]);
    }
    
    return 0;
}
