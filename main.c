#include <stdio.h>
#include <math.h>

// Funciones propias
#include "potencia.h"
#include "raiz.h"
#include "suma.h"
#include "resta.h"
#include "multiplicacion.h"
#include "division.h"

int main() {
  int operacion, numero1, numero2, salida;
  double pnumero1, pnumero2;

  do {
    printf("**************************************************\n");
    printf("*********** CALCULDORA EN LENGUAJE C *************\n");
    printf("****** REALIZAR OPERACIONES CON DOS NUMEROS ******\n");
    printf("**************************************************\n");
    printf("SELECCIONE LA OPERACION QUE DESEA REALIZAR:\n");
    printf("1) POTENCIA\n");
    printf("2) RAIZ CUADRADA\n");
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
        printf("LA RAIZ CUADRADA ES: %d", raiz(numero1));
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

    printf("\n\nDESEA REALIZAR ALGUNA OTRA OPERACION: \n");
    printf("SELECCIONE UNA OPCION: \n 1) SI \n 2) NO \n");
    printf("INGRESE NUMERO DE OPCION: ");
    scanf("%d", &salida);

  } while( salida == 1 );

  return 0;
}