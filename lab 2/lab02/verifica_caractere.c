#include "funcoes.h"


int main(){

       //TODO: defina variaveis
    char c, entrada[MAX_SEQ_SIZE], saida[MAX_SEQ_SIZE];
    int tam, ocorrencia;
    
    printf("Digite o caractere 'c':");
    scanf("%c", &c);
    scanf (" %s", entrada);
    
    //converte c se maiusculo
    if(c <= 90){
      c += 32;
    }
    
    //Converter Maiuscula em Minuscula a string
    tam = tamanho(entrada);
    converte(entrada, saida, tam); //converte string


    // TODO call analise_caractere
    ocorrencia = analise_caractere(c, saida);
  
    // TESTES
    //printf("Testando saida: %s\n", saida);
    printf("Numero de ocorrencias: %d\n", ocorrencia);

  	return 0;
    // gcc -Wall -Werror -ansi -lm funcoes.c verifica_caractere.c -o verifica_caractere -I funcoes.h

}