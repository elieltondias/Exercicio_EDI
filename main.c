#include "lista_nomes.h"
#include <stdio.h>

int main() {
  int opcao;
  char nome[50];

  while(1) {

    printf("\n LISTA \n");
    printf("1. Criar lista\n");
    printf("2. Inserir item\n");
    printf("3. Mostrar itens\n");
    printf("4. Buscar item\n");
    printf("5. Apagar item\n");
    printf("6. Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
      case 1:
        criarLista();
        printf("Lista criada.\n");
        break;
      
      case 2:
        printf("Digite o item: ");
        scanf(" %[^\n]s", nome);
        inserirNome(nome);
        break;
      
      case 3:
        mostrarNomes();
        break;
      
      case 4:
        printf("Digite o item a ser buscado: ");
        scanf(" %[^\n]s", nome);

        printf("\n**Pesquisa linear:**\n");
        buscarNomeLinear(nome);

        printf("\n**Pesquisa binária:**\n");
        buscarNomeBinaria(nome);
        break;
      
      case 5:
        printf("Digite o item a ser apagado: ");
        scanf(" %[^\n]s", nome);

        apagarNome(nome);
        break;
      
      case 6:
        printf("Saindo...\n");
        return 0;
      default:
        printf("Opção não válida!\n");
    } // Fim do swith
  } // Fim do While

  return 0;
}