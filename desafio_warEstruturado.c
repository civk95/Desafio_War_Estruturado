#include <stdio.h>
#include <string.h>

// definição da struct Territorio
struct Territorio {
    char nome[30];      
    char cor[10];       
    int tropas;         
};

int main() {
    // declaração do vetor de structs com capacidade para 5 territórios
    struct Territorio territorios[5];
    
    printf("=== SISTEMA DE CADASTRO DE TERRITORIOS ===\n\n");
    
    // laço para entrada de dados dos 5 territórios
    for(int i = 0; i < 5; i++) {
        printf("Cadastro do Territorio %d:\n", i + 1);
        
        // entrada do nome do território
        printf("Digite o nome do territorio: ");
        scanf("%29s", territorios[i].nome);
        
        // entrada da cor do exército
        printf("Digite a cor do exercito: ");
        scanf("%9s", territorios[i].cor);
        
        // entrada da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        
        printf("\n"); // linha em branco para melhor organização
    }
    
    // exibição dos dados cadastrados
    printf("=== DADOS DOS TERRITORIOS CADASTRADOS ===\n\n");
    
    // laço para percorrer e exibir todos os territórios cadastrados
    for(int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("  Nome: %s\n", territorios[i].nome);
        printf("  Cor do exercito: %s\n", territorios[i].cor);
        printf("  Tropas: %d\n", territorios[i].tropas);
        printf("  --------------------\n");
    }
    
    return 0;
}