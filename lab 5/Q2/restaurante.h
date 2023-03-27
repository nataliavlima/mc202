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


/*
    No usado para criar uma pilha
*/
typedef struct NoTipos{
  char t;
  struct NoTipos *prox;
} NoTipos;


/*
    Ponteiro para nó
*/
typedef struct NoTipos * p_tipos;

/*
    Cria uma pilha vazia
*/
p_tipos cria_pilha();

/*
    Detroi uma pilha, destruindo os elementos internos também
*/
void destroi_pilha(p_tipos pilha);

/*
    Empilha um elemento do tipo <tipo>
    Recebe uma pilha e um tipo
    Retorna a pilha atualizada
*/
p_tipos empilha_tipo(p_tipos pilha, char tipo);

/*
    Remove um elemento da pilha
    Retorna pilha atualizada
*/
p_tipos remove_item(p_tipos pilha);

/*
    Verifica tipo, retornando quantidade de elementos desse tipo
    Recebe uma pilha e um tipo
    Retorna um inteiro com quantidade de elementos do tipo
*/
int verifica_tipo(p_tipos pilha, char tipo);

/*
    Verifica tamanho da pilha
*/
int tamanho_pilha(p_tipos pilha);