#include <stdio.h>
int main()
{
    int v[20];
    int i = 0, j, cont = 0, k, cont2 = 0, cont3 = 0, distinto[5], aux, ja_foi = 0;
    
    while(i < 20){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
        
        ja_foi = 0;
        for(j=0; j< cont2; j++){
            if(v[i] == distinto[j]){
                ja_foi = 1;
                break;
            }
        }
        if(ja_foi == 0){
            distinto[cont2] = v[i];
            cont2++;
        }
        if(cont2 == 5){
            break;
        }
        i++;
    }
    
    for(i=0; i<cont2; i++){
        for(j=0; j<cont2-1; j++){
            if(distinto[j] > distinto[j+1]){
                aux = distinto[j];
                distinto[j] = distinto[j+1];
                distinto[j+1] = aux;
            }
        }
    }
    
    printf("Os distintos em ordem crescente!!!\n");
    
    for(i=0; i<cont2; i++){
        printf(" %d", distinto[i]);
    }
    
    return 0;
}