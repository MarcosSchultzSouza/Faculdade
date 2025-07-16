#include <stdio.h>
int main()
{
    int n1, n2, n3, n4;
    int maior1, maior2, maior3, maior4;
    
    printf("Digite quatro numeros inteiros: \n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    maior1 = n1;
    maior2 = n2;
    maior3 = n3;
    maior4 = n4;
    
    if(maior2 > maior1 && maior2 > maior3 && maior2 > maior4){
        int temp = maior1;
        maior1 = maior2;
        maior2 = temp;
    }
    else if(maior3 > maior1 && maior3 > maior2 && maior3 > maior4){
        int temp = maior1;
        maior1 = maior3;
        maior3 = temp;
    }
    else if(maior4 > maior1 && maior4 > maior2 && maior4 > maior3){
        int temp = maior1;
        maior1 = maior4;
        maior4 = temp;
    }
    else{
        maior1 = maior1;
    }
    
    if(maior3 > maior2 && maior3 > maior4){
        int temp1 = maior2;
        maior2 = maior3;
        maior3 = temp1;
    }
    else if(maior4 > maior2 && maior4 > maior3){
        int temp1 = maior2;
        maior2 = maior4;
        maior4 = temp1;
    }
    else{
        maior2 = maior2;
    }
    
    if(maior4 > maior3){
        int temp2 = maior3;
        maior3 = maior4;
        maior4 = temp2;
    }
    else{
        maior4 = maior4;
    }
    
    printf("A sequencia em forma decrescente e: %d, %d, %d, %d", maior1, maior2, maior3, maior4);              
    
    return 0;
}