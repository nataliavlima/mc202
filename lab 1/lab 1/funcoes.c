#include"funcoes.h"

double absoluto(double a, double b){
  double c;
  if(a > b){
    c = a - b;
  } else {
    c = b - a;
  }
  return c;
}
double raiz(double n){
  double y = n, anterior;
  double ERRO = 1e-12;
    do{
      anterior = y;
      y = (y + n / y) / 2;
    } while (absoluto(y,anterior) > ERRO);
    return y;
}

int is_primo(int n){
  
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

float hipotenusa(float c1, float c2){
  double cateto1=0, cateto2=0.0;
  double hipo, n, teste;

  printf("Por favor, digite os dois catetos (ou dois números negativos para parar):\n");

  scanf("%lf %lf", &cateto1, &cateto2);
  while(cateto1 > 0 && cateto2 > 0){ //condicao para ler, entrada negativa para de ler
    
  // Calculo Raiz
  hipo = raiz(cateto1*cateto1 + cateto2*cateto2);  
  printf("hipotenusa = %.2lf \n", hipo); 
  scanf("%lf %lf", &cateto1, &cateto2); //para continuar o loop de ler
  } 
}

float cateto_from_matrix(int M[2][2]){
   int v1,v2,v3,v4;
  int m[2][2];

  //TODO: entrada de dados
  int i, j;
  printf("Digite os 4 numeros:");
  //Ler matriz:
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++)
      scanf("%d", &m[i][j]); 
  }
  //Calcular determinante:
  int det;
  det = m[0][0]*m[1][1] - m[0][1]*m[1][0];


  if(det > 0){
    //Fazer contas do triangulo:
    int L_quad;   //L ao quadrado pois n queria tirar raiz 2x
    L_quad = det; //manipulando o enunciado vc chega que L = Raiz da determinante
    float hipo;
    hipo = (double) raiz(2*L_quad);
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