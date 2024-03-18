#include "lista_nomes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Nome lista[MAX_SIZE];

int n = 0;

void criarLista() {
  n = 0;
}


void inserirNome(char nome[]) {
  int i, pos;

  for (i = 0; i < n && strcmp(nome, lista[i].nome) > 0; i++);

  for (pos = n; pos > i; pos--) {
    lista[pos] = lista[pos - 1];
  }

  strcpy(lista[i].nome, nome);
  n++;
}


void mostrarNomes() {
  int i;

  for (i = 0; i < n; i++) {
    printf("%s\n", lista[i].nome);
  }
}


void buscarNomeLinear(char nome[]) {
  int i;

  for (i = 0; i < n && strcmp(nome, lista[i].nome) != 0; i++);

  if (i < n) {
    printf("Nome encontrado na posicao %d.\n", i + 1);
  } else {
    printf("Nome nao encontrado.\n");
  }
}


void buscarNomeBinaria(char nome[]) {
  int inicio = 0, fim = n - 1, meio;

  while (inicio <= fim) {
    meio = (inicio + fim) / 2;

    if (strcmp(nome, lista[meio].nome) == 0) {
      printf("Nome encontrado na posicao %d.\n", meio + 1);
      return;
    } else if (strcmp(nome, lista[meio].nome) < 0) {
      fim = meio - 1;
    } else {
      inicio = meio + 1;
    }
  }

  printf("Nome nao encontrado.\n");
}


void apagarNome(char nome[]) {
  int i, pos;

  for (i = 0; i < n && strcmp(nome, lista[i].nome) != 0; i++);

  if (i < n) {
    for (pos = i; pos < n - 1; pos++) {
      lista[pos] = lista[pos + 1];
    }

    n--;
    printf("Nome apagado.\n");
  } else {
    printf("Nome nao encontrado.\n");
  }
}