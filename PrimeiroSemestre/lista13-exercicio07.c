#include <stdio.h>
int main()
{
    int v[10];
    int i, j, distinto[10], cont_distinto = 0, ja_foi = 0, aux = 0, cont3 = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0; i<10; i++){
        ja_foi = 0;
        for(j=0; j<10; j++){
            if(v[i] == distinto[j]){
                ja_foi = 1;
                break;
            }
        }
        if(ja_foi == 0){
            distinto[cont_distinto] = v[i];
            cont_distinto++;
        }
    }
    
    for(i=0; i<cont_distinto; i++){
        for(j=0; j<cont_distinto-1; j++){
            if(distinto[j] > distinto[j+1]){
                aux = distinto[j];
                distinto[j] = distinto[j+1];
                distinto[j+1] = aux;
            }
        }
    }
    
    for(i=0; i<cont_distinto; i++){
        cont3 = 0;
        for(j=0; j<10; j++){
            if(distinto[i] == v[j]){
                cont3++;
            }
        }
        printf("O número %d aparece %d vezes:\n", distinto[i], cont3);
    }
    
    printf("Numeros em ordem crescente:\n");
    
    for(i=0; i<cont_distinto; i++){
        printf(" %d ", distinto[i]);
    }
    
    return 0;
}