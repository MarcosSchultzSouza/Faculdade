#include <stdio.h>
int main()
{
    int num_cliente, quantidade, cont1 = 0;
    float valor_produto, valor_total, valor_produto2, valor_todos_clientes = 0;
    float valor_medio = 0, desconto = 0 ,aux = 0;
    float total_de_desconto = 0;
    
    for(;;){
        printf("Informe o seu número cliente: \n");
        scanf("%d", &num_cliente);
        
        if(num_cliente <= 0){
            break;
        }
        cont1++;
        valor_total = 0;
        for(;;){
            valor_produto = 0;
            quantidade = 0;
            valor_produto2 = 0;
            
            printf("Informe o valor de seu produto: cliente %d \n", num_cliente);
            scanf("%f", &valor_produto);
            
            printf("Informe a quantidade comprada: \n");
            scanf("%d", &quantidade);
            
            if(valor_produto <= 0){
                break;
            
            }
            
            valor_produto2 = valor_produto * quantidade;
            valor_total = valor_total + valor_produto2;
            
            if(valor_total >= 1099){
                desconto = valor_total / 100;
            }
            printf("Total cliente %d = %.2f \n", num_cliente, valor_total);
        }
        valor_todos_clientes = valor_todos_clientes + valor_total;
        total_de_desconto = total_de_desconto + desconto;
    }
    
    valor_medio = valor_todos_clientes / cont1;
    printf("O valor gasto por todos os clientes foi= R$ %f \n",valor_todos_clientes);
    printf("O valor médio gasto pelos clientes foi de = R$ %f \n", valor_medio);
    printf("O total de descontos foi de: R$ %f \n", total_de_desconto);
    
    return 0;
}