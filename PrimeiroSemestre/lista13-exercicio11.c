#include <stdio.h>
int main()
{
    int candidato1 = 01, candidato2 = 02, candidato3 = 03, candidato4 = 04;
    int candidato5 = 05, i = 0, v[1000], j, k, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
    int nulo = 0, num =1;
    
    while(i < 1000){
        printf("Digite o número de seu candidato: 01, 02, 03, 04, 05 ou nulo:\n");
        scanf("%d", &v[i]);
        
        if(v[i] == 0){
            break;
        }
        
        i++;
    }
    
    printf(" candidato01 = Numero 01:\n");
    printf(" candidato02 = Numero 02:\n");
    printf(" candidato03 = Numero 03:\n");
    printf(" candidato04 = Numero 04:\n");
    printf(" candidato05 = Numero 05:\n");
    
    for(k=0; k<i; k++){
        if(candidato1 == v[k]){
            cont1++;
        }
        else if(candidato2 == v[k]){
            cont2++;
        }
        else if(candidato3 == v[k]){
            cont3++;
        }
        else if(candidato4 == v[k]){
            cont4++;
        }
        else if(candidato5 == v[k]){
            cont5++;
        }else{
            nulo++;
        }
    }
    
    printf("O candidato %d teve %d votos\n", candidato1, cont1);
    printf("O candidato %d teve %d votos\n", candidato2, cont2);
    printf("O candidato %d teve %d votos\n", candidato3, cont3);
    printf("O candidato %d teve %d votos\n", candidato4, cont4);
    printf("O candidato %d teve %d votos\n", candidato5, cont5);
    printf("Teve %d votos nulos:\n", nulo);
    
    return 0;
}