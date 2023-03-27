#include"funcoes.h"
int main(){

    int n;

    printf("Digite um numero:");

    //TODO: seu codigo vai aqui!!
    scanf("%d", &n);
    int i, contador = 0;
    for(i = 1; i < n+1; i++){
      if(n % i == 0)
        contador += 1;
    }
  if(contador == 2){
    printf("Numero primo!\n");
  } else 
      printf("Numero nao primo!\n");
      
}