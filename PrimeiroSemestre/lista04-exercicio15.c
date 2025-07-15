#include <stdio.h>
int main()
{
    int i, codigo_curso = 0, idade = 0;
    
    int engenharia = 0, computacao = 0, administracao = 0;
    int idade_soma_um = 0;
    int soma_idade_engenharia = 0;
    int soma_idade_computacao = 0;
    int soma_idade_administracao = 0;
    for(i=1; i<=15; i++){
        printf("Informe o código do seu curso: (1, 2, 3) \n");
        scanf("%d", &codigo_curso);
        
        printf("Informe sua idade:  \n");
        scanf("%d", &idade);
        
        if(codigo_curso == 1){
            engenharia = engenharia + 1;
            soma_idade_engenharia = soma_idade_engenharia + idade;
        }else if(codigo_curso == 2){
            computacao = computacao + 1;
            soma_idade_computacao = soma_idade_computacao + idade;
        }else if(codigo_curso == 3){
            administracao = administracao + 1;
            soma_idade_administracao = soma_idade_administracao + idade;
        }else{
            printf("Não foi digitado nenhum numero correto:");
        }
        if(idade >= 20 && idade <= 25){
            idade_soma_um = idade_soma_um + 1;
        }
    }
    
    int div_idade_engenharia = 0;
    int div_idade_computacao = 0;
    int div_idade_administracao = 0;
    
    div_idade_engenharia = soma_idade_engenharia / engenharia;
    div_idade_computacao = soma_idade_computacao / computacao;
    div_idade_administracao = soma_idade_administracao / administracao;
    
    printf("Número de alunos matriculados em engenharia: %d \n", engenharia);
    printf("Número de alunos matriculados em computação: %d \n", computacao);
    printf("Número de alunos matriculados em administração: %d \n", administracao);
    
    if(div_idade_engenharia < div_idade_computacao && div_idade_engenharia < div_idade_administracao){
        printf("Código do curso com a menor média de idade: 1");
    }else if(div_idade_computacao < div_idade_engenharia && div_idade_computacao < div_idade_administracao){
        printf("Código do curso com a menor média de idade: 2");
    }else{
        printf("Código do curso com a menor média de idade: 3");
    }
    
    return 0;
}