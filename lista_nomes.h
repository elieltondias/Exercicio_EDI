#ifndef LISTA_NOMES_H
#define LISTA_NOMES_H

#define MAX_SIZE 100

typedef struct {
  char nome[50];
} Nome;

extern Nome lista[MAX_SIZE];
extern int n;

void criarLista();
void inserirNome(char nome[]);
void mostrarNomes();
void buscarNomeLinear(char nome[]);
void buscarNomeBinaria(char nome[]);
void apagarNome(char nome[]);

#endif