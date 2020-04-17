#include <stdio.h>
#include <stdlib.h>

/** \brief ingresa un numero flotante y devuelve un mensaje.
 *
 * \param mensaje a enseñar
 * \return numero ingresado
 */

float getFloat(char mensaje[]);

/** \brief recibe 2 numeros y los suma, devolviendo un resultado de la funcion.
 *
 * \param float Ingresa el primer numero
 * \param  float Ingresa el segundo numero
 * \return devuelve el resultado de la suma
 */
float funcionSumar(float, float);

/** \brief recibe 2 numeros y los resta, devolviendo un resultado de la funcion.
 *
 * \param float ingresa el primer numero
 * \param float ingresa el segundo numero
 * \return devuelve el resultado de la resta
 */
float funcionRestar(float, float);

/** \brief recibe un numero y devuelve su factorial.
 *
 * \param float ingresa el numero
 * \return float devuelve el factorial
 */
float funcionFactoriar(float);

/** \brief recibe 2 numeros y los multiplica, devolviendo el resultado de la funcion.
 *
 * \param float ingresa el primer numero
 * \param float ingresa el segundo numero
 * \return devuelve el resultado de la multiplicacion
 */
float funcionMultiplicar(float, float);

/** \brief recibe 2 numeros y los dividide, devolviendo el resultado de la funcion.
 *
 * \param float ingresa el primer numero
 * \param float ingresa el primer numero
 * \return devuelve el resultado de la division
 *
 */
float funcionDividir(float, float);
