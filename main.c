#include <stdio.h>
#include <math.h>

int suma(int num1, int num2) {
  return num1 + num2;
}

int resta(int num1, int num2) {
  return num1 - num2;
}

int multiplicacion(int num1, int num2) {
  return num1 * num2;
}

int division(int num1, int num2) {
  return num1 / num2;
}

int main() {
  int operacion, numero1, numero2;

  printf("**************************************************\n");
  printf("*********** CALCULDORA EN LENGUAJE C *************\n");
  printf("****** REALIZAR OPERACIONES CON DOS NUMEROS ******\n");
  printf("**************************************************\n");
  printf("SELECCIONE LA OPERACION QUE DESEA REALIZAR:\n");
  printf("1) POTENCIA\n");
  printf("2) RAIZ\n");
  printf("3) MULTIPLICACION\n");
  printf("4) DIVISION\n");
  printf("5) SUMA\n");
  printf("6) RESTA\n");

  printf("INGRESE EL NUMERO DE OPERACION: ");
  scanf("%d", &operacion);

  printf("INGRESE EL PRIMER NUMERO: ");
  scanf("%d", &numero1);

  printf("INGRESE EL SEGUNDO NUMERO: ");
  scanf("%d", &numero2);

  switch( operacion ){
    case 1:
    printf("potencia");
    break;
    case 2:
    printf("raiz");
    break;
    case 3:
    printf("LA MULTIPLICACION ES: %d", multiplicacion(numero1, numero2));
    break;
    case 4:
    printf("LA DIVISION ES: %d", division(numero1, numero2));
    break;
    case 5:
    printf("LA SUMA ES: %d", suma(numero1, numero2));
    break;
    case 6:
    printf("LA RESTA ES: %d", resta(numero1, numero2));
    break;
    default:
    printf("opcion incorrecta");
  }

  return 0;
}