#include <stdio.h>
int main()
{
    float n1, n2, n3;
    char calcule;
    
    printf("Digite sua primeira, segunda e terceira notas:");
    scanf("%f %f %f",&n1 ,&n2 ,&n3);
    
    printf("Digite 'a' ou 'A' para media aritmetica: \n");
    printf("Digite 'h' ou 'H' para media harmonica: \n");
    scanf("%s", &calcule);
    
    if(calcule == 'a' || calcule == 'A'){
        float media_aritmetica = (n1 + n2 + n3)/3;
        printf("A media aritmetica é: %0.2f ",media_aritmetica);
    }
    else if(calcule == 'h' || calcule == 'H'){
        float media_harmonica = 3/(1/n1 + 1/n2 + 1/n3);
        printf("A media harmonica é: %0.2f ",media_harmonica);
    }
    else{
        printf("Digite conforme o descrito!!!");
    }
    
    return 0;
}