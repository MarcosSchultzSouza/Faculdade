#include <stdio.h>
int main()
{
    float v[10], soma_tudo = 0, media = 0;
    int i, j, k, l;
    
    for(i=0; i<9; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%f", &v[i]);
    }
    
    while(i < 1000){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%f", &v[9]);
        
        if(v[9] < 0){
            break;
        }
        else{
            i++;
        }
        soma_tudo = 0;
        for(l=0; l<10; l++){
            soma_tudo = soma_tudo + v[l];
        }
        media = soma_tudo / 10;
        
        printf("A media aritmetica é de %.1f \n", media);
        
        for(k=0; k<9; k++){
            v[k] = v[k+1];
        }
    }
    
    return 0;
}
