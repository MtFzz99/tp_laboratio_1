#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

//getFloat

float getFloat(char mensaje[])
{
    float sFloat;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%f", &sFloat);

    return sFloat;
}

//Operaciones.

float funcionSumar(float primerNumero, float segundoNumero)
{
    float suma;
    suma = primerNumero + segundoNumero;
    return suma;
}
float funcionRestar(float primerNumero, float segundoNumero)
{
    float resta;
    resta = primerNumero - segundoNumero;
    return resta;
}
float funcionMultiplicar(float primerNumero, float segundoNumero)
{
    float multiplicar;
    multiplicar = primerNumero * segundoNumero;
    return multiplicar;
}
float funcionDividir(float primerNumero, float segundoNumero)
{
    float dividir;
    if(segundoNumero==0)
    {
        printf("Math Error.(Imposible dividir por cero) \n");
    } else
    {
         dividir = primerNumero / segundoNumero;
    }
    return dividir;
}
float funcionFactoriar(float numero)
{
    float factorial;

    if(numero>=0)
    {
        if(numero==1 || numero == 0)
        {
           factorial=1;
        }
        else
        {
            factorial = numero*funcionFactoriar(numero-1);
        }
    }

    return factorial;
}
