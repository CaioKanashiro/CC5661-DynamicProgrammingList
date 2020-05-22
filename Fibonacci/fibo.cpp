#include <stdio.h>

int fibonacci(int n){
  int fib;
  int fib0 = 0;
  int fib1 = 1;

  if(n<=1)
    return n;

  for(int i=2; i<=n; i++){
    fib = fib0 + fib1;
    fib0 = fib1;
    fib1 = fib;
  }
  return fib;
}

int main(void) {
  int pos = 0, resultado, v;

  printf("coloque o numero da posicao desejada: ");
  scanf("%d", &pos);

  resultado = fibonacci(pos);

  printf("valor da posicao: %d", resultado);

  return 0;
}

