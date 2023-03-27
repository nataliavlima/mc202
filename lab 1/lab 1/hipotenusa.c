#include"funcoes.h"

int main(){
    
    double cateto1=0, cateto2=0.0;
    double hipo;
    
    printf("Por favor, digite os dois catetos (ou dois números negativos para parar):\n");

    //TODO: seu codigo vai aqui!!
    
    scanf("%lf %lf", &cateto1, &cateto2);
    while(cateto1 > 0 && cateto2 > 0){ //condicao para ler, entrada negativa para
    
    hipo = raiz(cateto1*cateto1 + cateto2*cateto2);  
  
    printf("hipotenusa eh %.2lf \n", hipo); 
    scanf("%lf %lf", &cateto1, &cateto2); //para continuar o loop de ler
    } 
}