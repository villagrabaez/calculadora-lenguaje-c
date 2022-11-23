#include <stdio.h>
#include <math.h>

double potencia(double num1, double num2){
  return pow(num1, num2);
}

int raiz(int num1){
  return sqrt(num1);
}

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
  double pnumero1, pnumero2;

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

  // Solicitamos el tipo de operacion
  printf("INGRESE EL NUMERO DE OPERACION: ");
  scanf("%d", &operacion);

  // // Solicitamos los numeros
  // printf("INGRESE EL PRIMER NUMERO: ");
  // scanf("%d", &numero1);

  // printf("INGRESE EL SEGUNDO NUMERO: ");
  // scanf("%d", &numero2);

  switch( operacion ){
    case 1:
      // Solicitamos los numeros
      printf("INGRESE EL VALOR DE LA BASE: ");
      scanf("%lf", &pnumero1);

      printf("INGRESE EL VALOR DEL EXPONENTE: ");
      scanf("%lf", &pnumero2);

      printf("LA POTENCIA ES: %.2lf", potencia(pnumero1, pnumero2));
      break;

    case 2:
      // Solicitamos los numeros
      printf("INGRESE EL NUMERO: ");
      scanf("%d", &numero1);
      printf("LA RAIZ ES: %d", raiz(numero1));
      break;

    case 3:
      // Solicitamos los numeros
      printf("INGRESE EL PRIMER NUMERO: ");
      scanf("%d", &numero1);

      printf("INGRESE EL SEGUNDO NUMERO: ");
      scanf("%d", &numero2);

      printf("LA MULTIPLICACION ES: %d", multiplicacion(numero1, numero2));
      break;

    case 4:
      // Solicitamos los numeros
      printf("INGRESE EL PRIMER NUMERO: ");
      scanf("%d", &numero1);

      printf("INGRESE EL SEGUNDO NUMERO: ");
      scanf("%d", &numero2);

      printf("LA DIVISION ES: %d", division(numero1, numero2));
      break;

    case 5:
      // Solicitamos los numeros
      printf("INGRESE EL PRIMER NUMERO: ");
      scanf("%d", &numero1);

      printf("INGRESE EL SEGUNDO NUMERO: ");
      scanf("%d", &numero2);

      printf("LA SUMA ES: %d", suma(numero1, numero2));
      break;

    case 6:
      // Solicitamos los numeros
      printf("INGRESE EL PRIMER NUMERO: ");
      scanf("%d", &numero1);

      printf("INGRESE EL SEGUNDO NUMERO: ");
      scanf("%d", &numero2);

      printf("LA RESTA ES: %d", resta(numero1, numero2));
      break;

    default:
      printf("opcion incorrecta");
  }

  return 0;
}