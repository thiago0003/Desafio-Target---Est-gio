//Questão 2
//Thiago Martins

#include <stdio.h>

int main(void) 
{
  //Inicializa as variáveis
  int n, fib = 0, a = 0, b = 1;    
  printf("Informe um numero \n ");
  scanf("%d", &n);

  //Percorre um loop infinito
  do
  {                  
    //Efetua os cálculos do fibonacci
    fib = a + b;                 
    a = b;
    b = fib;

    //Verifica se o valor inserido contém na sequência de Fibonacci
    if(fib == n)
    {
      //Exibe a mensagem e encerra o programa
      printf("O numero digitado pertence a sequencia");
      return 0;

    //Caso não tenha e o valor calculado de Fibonacci seja maior que o valor inserido encerra o programa
    }else if(fib > n)
    {
      //Exibe a mensagem e encerra o programa
      printf("O numero digitado nao pertence a sequencia de Fibonacci");
      return 0;
    }
            
  }while(0==0);
  
  return 0;
}
