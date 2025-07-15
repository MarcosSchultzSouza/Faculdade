#include <stdio.h>

int main()
{
    int v[10], w[10], z[20];
    int i, j, aux = 0, cont = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &w[i]);
    }
    
    for(i=0; i<10; i++){
        for(j=0; j<9; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
            if(w[j] > w[j+1]){
                aux = w[j];
                w[j] = w[j+1];
                w[j+1] = aux;
            }
        }
    }
    printf("vetor V ordenado!!!\n");
    
    for(i=0; i<10; i++){
        printf(" %d ", v[i]);
    }
    
    printf("\nvetor W ordenado!!!\n");
    
    for(i=0; i<10; i++){
        printf(" %d ", w[i]);
    }
    
    for(i=0; i<10; i++){
        z[cont] = v[i];
        cont++;
        z[cont] = w[i];
        cont++;
    }
    
    for(i=0; i<20; i++){
        for(j=0; j<19; j++){
            if(z[j] > z[j+1]){
                aux = z[j];
                z[j] = z[j+1];
                z[j+1] = aux;
            }
        }
    }
    
    printf("\nVetor de 20\n");
    
    for(i=0; i<20; i++){
        printf(" %d ", z[i]);
    }

    return 0;
}
