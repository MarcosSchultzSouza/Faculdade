#include <stdio.h>
int main()
{
    int primeiro_termo, ultimo_termo, razao;
    int numero_de_termos, soma_dos_termos;
    
    printf("Digite o primeiro termo: ");
    scanf("%d", &primeiro_termo);
    
    printf("Digite o ultimo termo: ");
    scanf("%d", &ultimo_termo);
    
    printf("Digite a razão: ");
    scanf("%d", &razao);
    
    numero_de_termos = (ultimo_termo - primeiro_termo)/ razao;
    
    soma_dos_termos = ((primeiro_termo + ultimo_termo)/2)*numero_de_termos;
    
    printf("A soma dos termos da PA é %d", soma_dos_termos);
    
   return 0;
}
