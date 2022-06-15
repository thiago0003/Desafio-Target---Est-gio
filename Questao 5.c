//Questão 5
//Thiago Martins


#include <stdio.h>
#include <string.h>

int main(void) {

  //Inicializa as variáveis
  char palavra[] = "estagio programacao";
  int aux = strlen(palavra);
  
  for(int i = 0; i < aux/2; i++)
  {
    //Cria uma variável armazenando a posição temporária
    char auxP = palavra[i];

    //Copia a posição final da string para a incial
    palavra[i] = palavra[aux -i -1];

    //Copia a posição inicial para a posição final
    palavra[aux -i -1] = auxP;
  }

  //Exibe a string invertida
  printf("\n%s", palavra);
  
}