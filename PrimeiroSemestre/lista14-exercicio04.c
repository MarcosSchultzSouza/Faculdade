#include <stdio.h>
int main()
{
    int v1[10], v2[10], v3[20], v4[20];
    int i, ja_foi = 0, j, cont = 0, cont2 = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n",  i+1);
        scanf("%d", &v1[i]);
    }
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v2[i]);
    }
    
    for(i=0; i<10; i++){
        v3[cont] = v1[i];
        cont++;
        v3[cont] = v2[i];
        cont++;
    }
    
    for(i=0; i<20; i++){
        ja_foi = 0;
        for(j=0; j<i; j++){
            if(v3[i] == v3[j]){
                ja_foi = 1;
                break;
            }
        }
        if(ja_foi == 0){
            v4[cont2] = v3[i];
            cont2++;
        }
    }
    
    printf("\nVetor 1:\n");
    
    for(i=0; i<10; i++){
        printf(" %d ", v1[i]);
    }
    
    printf("\nVetor 2:\n");
    
    for(i=0; i<10; i++){
        printf(" %d ", v2[i]);
    }
    
    printf("\nVetor 3:\n");
    
    for(i=0; i<cont2; i++){
        printf(" %d ", v4[i]);
    }
    
    return 0;
}