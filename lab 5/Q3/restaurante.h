/*

  restaurante.h - implementação de operadores sobre o tipo
            para armazenamento de filas
  
  Autor: Matheus Cerqueira
  
  MC202G+H - 2 semestre de 2022.
  
  Última alteração: 25/10/2022.
  
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM_MAX_NOME 50

/*
  No de um elemento da fila
*/
typedef struct NoFila{
  char snome[TAM_MAX_NOME];
  int qtd, hora, min;
  struct NoFila *prox;
} NoFila;

/* Ponteiro para elemento de fila */
typedef struct NoFila * p_fila;

/* Cria fila vazia */
p_fila cria_fila();

/* destroi fila, inclusive elementos internos */
void destroi_fila(p_fila fila);

/*
  Lê elemento via entrada padrão, salvando-o em ponteiro de fila
  Retorna ponteiro com elementos lidos
*/
p_fila le_no_fila();

/*
  Adiciona elemento na fila
  Recebe uma fila e um elemento
  Retorna fila atualizada
*/
p_fila adiciona_fila(p_fila fila, p_fila entrada);

/*
  Retorna ponteiro para ultimo elemento da fila (sem retira-lo da fila!!)
*/
p_fila ultimo_fila(p_fila fila);

/*
  Remove elemento da fila
  Recebe fila e retorna a fila atualizada
*/
p_fila remove_da_fila(p_fila fila);

/*
  Imprime resumo da fila, de acordo com roteiro
  Padrão [Elemento ... Elemento]
*/
void imprime_resumo_fila(p_fila fila);

/*
  Imprime fila completa, imprimindo cada nó em uma linha.
*/
void imprime_fila_completa(p_fila fila);