
float suma(float a,float b)
{
    float resultado;
    resultado=a+b;
    return resultado;
}
/** \brief Funcion suma, tomando valor a y valor b.
 *
 * \param Toma un valor a float.
 * \param Toma otro valor b float.
 * \return Retorna el resultado sumado float.
 *
 */

float resta(float a,float b)
{
    float resultado;
    resultado=a-b;
    return resultado;
}
/** \brief Funcion resta, tomando valor a y valor b.
 *
 * \param Toma un valor a float.
 * \param Toma otro valor b float.
 * \return Retorna el resultado restado float.
 *
 */



float division(float a , float b)
{
    float resultado;
    resultado=a/b;
    return resultado;
}
/** \brief Funcion division, tomando valor a y valor b.
 *
 * \param Toma un valor b float.
 * \param Toma otra valor b float.
 * \return Retorna como resultado el cociente float.
 *
 */

float multiplicacion(float a ,float b)
{
    float resultado;
    resultado=a*b;
    return resultado;
}
/** \brief Funcion multiplicacion, tomando valor a y valor b.
 *
 * \param Toma el valor a float.
 * \param Toma el valor b float.
 * \return Retorna como resultado la multiplicacion tipo float.
 *
 */

long factorial(int auxFact)
{
    int i;
    long fact=1;
    for(i=1;i<=auxFact;i++)
    fact=fact*i;

    return (fact);

}
/** \brief Funcion factorial, toma el valor a.
 *
 * \param Toma el valor a y lo guarda en el auxiliar.
 * \param Lo transforma en tipo int y lo factoriza.
 * \return Retorna el resultado tipo long.
 *
 */

