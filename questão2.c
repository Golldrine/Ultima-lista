#include <stdio.h>

int main(){
  int numMeses, contador;
  double valorInicial, juros, valorFinal;

  scanf("%d %lf %lf", &numMeses, &valorInicial, &juros);
  valorFinal = 0;
  for (contador = 1; contador <= numMeses; contador++) {
    valorFinal = (valorFinal + valorInicial) * (1 + juros);
    printf("Montante ao fim do mes %d: R$ %.2lf\n", contador, valorFinal);
 }

return 0;
}