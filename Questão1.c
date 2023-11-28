#include <stdio.h>
#include <string.h>


int obterValor(char caractere) {
  switch (caractere) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
  }
}

int romanoDecimal(char *romano) {
  int decimal = 0;
  int i, len = strlen(romano);
  for (i = 0; i < len; i++) {
    int valorAtual = obterValor(romano[i]);
    int valorProximo = obterValor(romano[i+1]);
    if (valorAtual < valorProximo) {
      decimal -= valorAtual;
    } else {
      decimal += valorAtual;
    }
  }
  return decimal;
}


void mostrarBase(int numero, int base) {
  char base16[] = "0123456789abcdef";
  char resultado[32];
  int indice = 0;
  while (numero > 0) {
    resultado[indice] = base16[numero % base];
    numero /= base;
    indice++;
  }

  while (indice > 0 && resultado[indice-1] == '0') {
    indice--;
  }

  while (indice > 0) {
    printf("%c", resultado[indice-1]);
    indice--;
  }
  printf("\n");
}

int main() {
  char romano[13];
  int decimal;
  scanf("%s", romano);
  decimal = romanoDecimal(romano);
  printf("%s na base 2: ", romano);
  mostrarBase(decimal, 2);
  printf("%s na base 10: ", romano);
  mostrarBase(decimal, 10);
  printf("%s na base 16: ", romano);
  mostrarBase(decimal, 16);
  return 0;
}