/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char b[200];
  char c;
   
  int flut = 0;
  int conta = 0;
  int i;
  int y = 0;

	while (c != '\n'){

	scanf("%c", &c);

	b[y] = c;
	y++;}

  	for (i = 0 ; b[i-1] != '\n' ; i++) {
        	if(b[i] == ' ' || b[i] == '\n' || b[i] == '!' || b[i] == '?' || b[i] == '-' || b[i] == '.' || b[i] == ',' || b[i] == ':'){
            	if(b[i-1] != ' ' && b[i-1] != '\n' && b[i-1] != '!' && b[i-1] != '?' && b[i-1] != '-' && b[i-1] != '.' && b[i-1] != ',' && b[i-1] != ':'){
                if (b[i-1] == '0'||b[i-1] == '1'||b[i-1] == '2'||b[i-1] == '3'||b[i-1] == '4'||b[i-1] == '5'||b[i-1] == '6'||b[i-1] == '7'||b[i-1] == '8'||b[i-1] == '9'){
                    if(flut == 0){
                    if((b[i] == ',' || b[i] == '.') && (b[i+1] == '0'||b[i+1] == '1'||b[i+1] == '2'||b[i+1] == '3'||b[i+1] == '4'||b[i+1] == '5'||b[i+1] == '6'||b[i+1] == '7'||b[i+1] == '8'||b[i+1] == '9')){
                    flut = 1;
                    }
                    if(b[i+1] == '0'||b[i+1] == '1'||b[i+1] == '2'||b[i+1] == '3'||b[i+1] == '4'||b[i+1] == '5'||b[i+1] == '6'||b[i+1] == '7'||b[i+1] == '8'||b[i+1] == '9'){
                        if(b[i+2] == '0'||b[i+2] == '1'||b[i+2] == '2'||b[i+2] == '3'||b[i+2] == '4'||b[i+2] == '5'||b[i+2] == '6'||b[i+2] == '7'||b[i+2] == '8'||b[i+2] == '9'){
                        conta++;
                        }else{
                        conta++;
                        }
                    }else{
                    conta++;
                    }
                    }else{
                    flut = 0;
                    }
                    }else{
                    conta++;
                    }
        }
        }
        }
       

    printf("%d", conta);
 
  return 0;

}





					
				
			






























