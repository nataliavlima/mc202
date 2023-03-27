#include"funcoes.h"

int main(){

    int v1,v2,v3,v4;
    int m[2][2];

    //TODO: entrada de dados
    int i, j;
    printf("Digite os 4 numeros:");
    for(i = 0; i < 2; i++){
      for(j = 0; j < 2; j++)
        scanf("%d", &m[i][j]); 
    }
    //Calcular determinante
    int det;
    det = m[0][0]*m[1][1] - m[0][1]*m[1][0];

  
    if(det > 0){
      //Fazer contas do triangulo:
      int L_quad;                     //L ao quadrado pois n queria tirar raiz 2x
      L_quad = det;                   //manipulando o enunciado vc chega que L = Raiz da determinante
      float hipo;
      hipo = (double) raiz(2*L_quad); // casting = mudando o tipo da variavel
      printf("Determinante Positivo!\n");
      printf("Hipotenusa do triangulo retangulo igual a %.2f\n", hipo);
      return hipo;
    }
    if(det == 0){
      printf("Determinante Nulo!\n");
      return 0;
      }
    if(det < 0){
      printf("Determinante Negativo!\n");
      return -1;
    }
  }