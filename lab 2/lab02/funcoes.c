#include"funcoes.h"
int tamanho(char e[]){
  int i=0;
  while(e[i] != '\0')
    i += 1;
  return i;
}

int converte(char e[], char s[], int n){
  int j;
  for(j = 0; j < n; j++){
    if(e[j] <= 90){
      s[j] = e[j] + 32;
    } else {s[j] = e[j];}
  }
  return 1;
}

int analise_caractere(char c, char s[]){
  int i, j, n;
  n = tamanho(s);
  for(j = 0; j < n; j++){
    if(s[j] == c){
      i += 1;
    }
  }
  return i;
}


void converte_nucleo(char n0[], char a[]){
  int i = -3, j = 0, tam;
  char n[MAX_SEQ_SIZE];
  tam = tamanho(n0);
  converte(n0, n, tam);
  
   
    
  for(j = 0; j < (tam/3); j++){
    i = i + 3;
    
    /* nucleotideo T */
    if(n[i] == 't'){
     	/*TT*/
     	if(n[i+1] == 't'){
     		//TTT = F
     		if(n[i+2] == 't'){
     	    a[j] = 'F';
     		//TTC = F
     		} else if(n[i+2] == 'c'){
     			a[j] = 'F';
     		//TTA = L
     		} else if(n[i+2] == 'a'){
          a[j] = 'L';
     		//TTG = L
     		} else if(n[i+2] == 'g'){
     			a[j] = 'L';
    	  }
     	}
     	/*TC*/
     	if(n[i+1] == 'c'){
     		//TCT = S
     		if(n[i+2] == 't'){
     	    a[j] = 'S';
     		//TCC = S
     		} else if(n[i+2] == 'c'){
     			a[j] = 'S';
     		//TCA = S
     		} else if(n[i+2] == 'a'){
     			a[j] = 'S';
     		//TCG = S
     		} else if(n[i+2] == 'g'){
     			a[j] = 'S';
     		}
     	}
     	/*TA*/ 
     	if(n[i+1] == 'a'){
     		//TAT = Y
     		if(n[i+2] == 't'){
     	    a[j] = 'Y';
     		//TAC = Y
     		} else if(n[i+2] == 'c'){
     			a[j] = 'Y';
     		//TAA = STOP!
     		} else if(n[i+2] == 'a'){
     			a[j] = '*';
     		//TAG = STOP!
     		} else if(n[i+2] == 'g'){
     			a[j] = '*';
     		}
     	}
     	/*TG*/
     	if(n[i+1] == 'g'){
     		//TGT = C
     		if(n[i+2] == 't'){
     	    a[j] = 'C';
     		//TGC = C
     		} else if(n[i+2] == 'c'){
     			a[j] = 'C';
     		//TGA = STOP!
     		} else if(n[i+2] == 'a'){
     			a[j] = '*';
     		//TGG = W
     		} else if(n[i+2] == 'g'){
     				a[j] = 'W';
     		  }
     	  }
      }
  /*----------------------------*/
       /* nucleotideo C */
     if(n[i] == 'c'){ 
     	/*CT*/
     	if(n[i+1] == 't'){
     		//CTT = L
     		if(n[i+2] == 't'){
     	    a[j] = 'L';
     		//CTC = L
     		} else if(n[i+2] == 'c'){
     			a[j] = 'L';
     		//CTA = L
     		} else if(n[i+2] == 'a'){
           a[j] = 'L';
     		//CTG = L
     		} else if(n[i+2] == 'g'){
     			a[j] = 'L';
     		}
     	}
     	/*CC*/
     	if(n[i+1] == 'c'){
     		//CCT = P
     		if(n[i+2] == 't'){
     	    a[j] = 'P';
     		//CCC = P
     		} else if(n[i+2] == 'c'){
     			a[j] = 'P';
     		//CCA = P
     		} else if(n[i+2] == 'a'){
     			a[j] = 'P';
     		//CCG = P
     		} else if(n[i+2] == 'g'){
     			a[j] = 'P';
     		}
     	}
     	/*CA*/ 
     	if(n[i+1] == 'a'){
     		//CAT = H
     		if(n[i+2] == 't'){
     	    a[j] = 'H';
     		//CAC = H
     		} else if(n[i+2] == 'c'){
     			a[j] = 'H';
     		//CAA = Q
     		} else if(n[i+2] == 'a'){
     			a[j] = 'Q';
     		//CAG = Q
     		} else if(n[i+2] == 'g'){
     			a[j] = 'Q';
     		}
     	}
     	/*CG*/
     	if(n[i+1] == 'g'){
     		//CGT = R
     		if(n[i+2] == 't'){
     	    a[j] = 'R';
     		//CGC = R
     		} else if(n[i+2] == 'c'){
     			a[j] = 'R';
     		//CGA = R
     		} else if(n[i+2] == 'a'){
     			a[j] = 'R';
     		//CGG = R
     		} else if(n[i+2] == 'g'){
     			a[j] = 'R';
     		  }
     	  }
       }
      /*----------------------------*/
       /* nucleotideo A */
    if(n[i] == 'a'){
     	/*AT*/
     	if(n[i+1] == 't'){
     		//ATT = I
     		if(n[i+2] == 't'){
     	    a[j] = 'I';
     		//ATC = I
     		} else if(n[i+2] == 'c'){
     			a[j] = 'I';
     		//ATA = I
     		} else if(n[i+2] == 'a'){
					a[j] = 'I';
     		//ATG = M
     		} else if(n[i+2] == 'g'){
     			a[j] = 'M';
     		}
     	}
     	/*AC*/
     	if(n[i+1] == 'c'){
     		//ACT = T
     		if(n[i+2] == 't'){
     	    a[j] = 'T';
     		//ACC = T
     		} else if(n[i+2] == 'c'){
     			a[j] = 'T';
     		//ACA = T
     		} else if(n[i+2] == 'a'){
     			a[j] = 'T';
     		//ACG = T
     		} else if(n[i+2] == 'g'){
     			a[j] = 'T';
     		}
     	}
     	/*AA*/ 
     	if(n[i+1] == 'a'){
     		//AAT = N
     		if(n[i+2] == 't'){
     	    a[j] = 'N';
     		//AAC = N
     		} else if(n[i+2] == 'c'){
     			a[j] = 'N';
     		//AAA = K
     		} else if(n[i+2] == 'a'){
     			a[j] = 'K';
     		//AAG = K
     		} else if(n[i+2] == 'g'){
     			a[j] = 'K';
     		}
     	}
     	/*AG*/
     	if(n[i+1] == 'g'){
     		//AGT = S
     		if(n[i+2] == 't'){
     	    a[j] = 'S';
     		//AGC = S
     		} else if(n[i+2] == 'c'){
     			a[j] = 'S';
     		//AGA = R
     		} else if(n[i+2] == 'a'){
     			a[j] = 'R';
     		//AGG = R
     		} else if(n[i+2] == 'g'){
     			a[j] = 'R';
     		  }
     	  }
       }
      /*----------------------------*/
      /* nucleotideo G */
     if(n[i] == 'g'){
     	/*GT*/
     	if(n[i+1] == 't'){
     		//GTT = V
     		if(n[i+2] == 't'){
     	    a[j] = 'V';
     		//GTC = V
     		} else if(n[i+2] == 'c'){
     			a[j] = 'V';
     		//GTA = V
     		} else if(n[i+2] == 'a'){
					a[j] = 'V';
     		//GTG = V
     		} else if(n[i+2] == 'g'){
     			a[j] = 'V';
     		}
     	}
     	/*GC*/
     	if(n[i+1] == 'c'){
     		//GCT = A
     		if(n[i+2] == 't'){
     	    a[j] = 'A';
     		//GCC = A
     		} else if(n[i+2] == 'c'){
     			a[j] = 'A';
     		//GCA = A
     		} else if(n[i+2] == 'a'){
     			a[j] = 'A';
     		//GCG = A
     		} else if(n[i+2] == 'g'){
     			a[j] = 'A';
     		}
     	}
     	/*GA*/ 
     	if(n[i+1] == 'a'){
     		//GAT = D
     		if(n[i+2] == 't'){
     	    a[j] = 'D';
     		//GAC = D
     		} else if(n[i+2] == 'c'){
     			a[j] = 'D';
     		//GAA = E
     		} else if(n[i+2] == 'a'){
     			a[j] = 'E';
     		//GAG = E
     		} else if(n[i+2] == 'g'){
     			a[j] = 'E';
     		}
     	}
     	/*GG*/
     	if(n[i+1] == 'g'){
     		//GGT = G
    		if(n[i+2] == 't'){
     	    a[j] = 'G';
      		//GGC = G
     		} else if(n[i+2] == 'c'){
     			a[j] = 'G';
     		//GGA = G
     		} else if(n[i+2] == 'a'){
     			a[j] = 'G';
     		//GGG = G
     		} else if(n[i+2] == 'g'){
     			a[j] = 'G';
     		  }
     	  }
       }
    }// colchete do for j
  a[tam/3] = '\0';
  return;
}

int freq_motivo(char p[], char m[]){
    int tam_m, tam_P, i = 0, x, k;
    int contador = 0;
    char P[1000];
    //tam_p = tamanho(p);
    tam_m = tamanho(m);  

    //Traduzindo P para aas
    converte_nucleo(p, P);
    tam_P = tamanho(P);

    while(i < tam_P){
      x = 0;
    
      for(k = 0; k < tam_m; k++)
       if(P[i+k] == m[k] ){      
        x++;
     } if(x == tam_m){
        contador++;
     }
        i++;
        }
    

return contador;
}

void conteudo_gc(char n[], int j){
    int tam_n, i = 0, k;
    float S[1000], c, x;
    tam_n = tamanho(n);

    (float) j;
    
    
    while(i < tam_n-j+1){
      x = 0;
    
      for(k = 0; k < j; k++){
        printf("%c ", n[i+k]);
       if((n[i+k] == 'G')||(n[i+k] == 'C')){      
        x++;  
       }
      }
        c = (x / j);
        printf(" - %0.2f\n", c);
				S[i] = x / j;
        i++;
        }
      S[i] = '\0';

  
  return;
}



