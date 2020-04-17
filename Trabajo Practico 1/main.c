#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    char opciones;
    float primerNumero=0;
    float segundoNumero=0;
    float sumar=0;
    float restar=0;
    float multiplicar=0;
    float dividir=0;
    float primerFactorial=0;
    float segundoFactorial=0;

    do
    {
        printf("\n1: Ingresar primer numero %.2f\n",primerNumero);
        printf("2: Ingresar 2do numero  %.2f\n",segundoNumero);
        printf("3: Realizar todas las operaciones(+,-,*,/ y factorial)\n");
        printf("4: Mostrar resultados\n");
        printf("5: Cerrar el programa\n");

        printf("\nElija una opcion: ");
        fflush(stdin);
        scanf("%c",&opciones);

        switch(opciones)
        {
        case '1':
            primerNumero = getFloat("\nIngrese el primer numero: ");
            break;
        case '2':
            segundoNumero = getFloat("\nIngrese el segundo numero: ");
            break;
        case'3':
            sumar = funcionSumar(primerNumero,segundoNumero);
            restar = funcionRestar(primerNumero,segundoNumero);
            multiplicar = funcionMultiplicar(primerNumero,segundoNumero);
            dividir = funcionDividir(primerNumero,segundoNumero);
            primerFactorial = funcionFactoriar(primerNumero);
            segundoFactorial = funcionFactoriar(segundoNumero);
            if(primerNumero<0)
            {
                printf("Error: No se pueden realizar factorial de numeros negativos");
            }
            else if(segundoNumero<0)
            {
                printf("Error: No se pueden realizar factorial de numeros negativos");
            }
            printf("Las operaciones se realizaron con exito.\n");
            break;
        case '4':
            printf("\nResultado suma: %2.f",sumar);
            printf("\nResultado resta: %2.f",restar);
            printf("\nResultado multiplicacion: %2.f",multiplicar);
            printf("\nResultado division: %2.f",dividir);
            printf("\nResultado factorial numero 1: %2.f",primerFactorial);
            printf("\nResultado factorial numero 2: %2.f",segundoFactorial);

            printf("\nLos numeros seran restablecidos a 0");
            primerNumero=0;
            segundoNumero=0;
            sumar=0;
            restar=0;
            multiplicar=0;
            dividir=0;
            primerFactorial=0;
            segundoFactorial=0;
            break;
        case '5':
            printf("Saliendo del programa....\n");
            break;
        default:
        printf("Error: Ingrese uno de los numeros mostrados\n.");
        }

    }
    while(opciones!='5');


    return 0;
}
