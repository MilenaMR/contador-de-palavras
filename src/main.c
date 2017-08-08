#include <stdio.h>
#include <stdlib.h>


int  palavras( char string[]);

int main() {

  char frase [500];
  
  
 // printf("Digite a frase que deseja \n");
  scanf("%[^\n]",  frase); 
 
  printf("Numero de palavras da frase: %d \n", palavras(frase) );
  return 0;
}

int palavras (char string []){
	int quantidade=0;
	int anterior=0;
  	int anterior2=0;
	int num=0;
	
	while(string[num] != '\0'){

		
		//Se for pontuação nos números de ponto flutuante
		if (string[num]>= '0' && string[num]<='9')
			if(anterior =='.' || anterior == ',' ){
				if (anterior2>= '0' && anterior2<='9'){
					quantidade--;
				}
		
		}
		
		if(!( 'A'<=string[num] && string[num]<='Z' || 'a'<=string[num] && string[num]<='z'||'0'<= string[num] && string[num]<='9')){
			if( 'A'<=anterior && anterior <='Z' || 'a'<= anterior && anterior<='z'||'0'<= anterior && anterior <='9'){
				quantidade++;
			}
		}
	
		anterior2= anterior;
		anterior = string[num];
		num++;
	}
	
	if( 'A'<=anterior && anterior <='Z' || 'a'<= anterior && anterior<='z'||'0'<= anterior && anterior <='9'){
		quantidade++;
	}
	
	return quantidade;	

	
}
