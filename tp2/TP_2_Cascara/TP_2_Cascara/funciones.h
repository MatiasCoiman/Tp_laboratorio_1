#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}ePersona;
/** \brief La funcion inicializa el estado del vector i.
 *
 * \param parametro tam es el tamaño que le pasa a la array.
 *
 * \return no retorna nada.
 *
 */

void inicializarPersona(ePersona[], int);
/** \brief Busca el dni ya guardado pasado por parametro.
 *
 * \param vec es el array pasado a parametro.
 * \param Parametro tam es el tamaño de la array.
 * \param dni es el dni guardado que debe buscar.
 * \return Si el dni coincide con uno guardado retorna error, si no coincide con ninguno te avisa que no existe.
 *
 */


int buscarPorDni(ePersona vec[],int tam, int dni );

/** \brief Se agrega una persona pidiendo la usuario que lo ingrese.
 *
 * \param Si se ingresa uno repetido tira error y le avisa al usuario.
 * \param Si no esta repetido se guarda.
 * \return no retorna nada.
 *
 */


void altaPersona(ePersona vec[], int tam);
/** \brief Busca si hay un espacio libre en el array.
 * \return Retorna el espacio vacio.
 *
 */


int buscarLibre(ePersona vec[], int tam);
/** \brief Busca en el array.
 *
 * \param Mustra el contenido de la array.
 * \return no retorna nada.
 *
 */


void mostrarPersona(ePersona vec);
/** \brief Busca un elemento especifico de la array
 *
 * \param La muestra el elemento.
 * \return no retorna nada.
 *
 */


void mostrarPersonas(ePersona vec[], int tam);
/** \brief Le pide al usuario que ingrese un dni a eliminar.
 *
 * \param Si existe lo elimina y si no te avisa que el dni ese nunca fue guardado.
 * \return no retorna nada.
 *
 */


void bajaPersona(ePersona vec[],int tam, int dni);
/** \brief ordena los nombres de A a la Z.
 * \return no retorna nada.
 *
 */


void ordenarNombre(ePersona vec[],int tam);
/** \brief Esta funcion ordena los menores a 18 , mayores y menores de 35 y mayores a 35.
 *
 * \param Hace un Cuadro ordenandolos.
 * \return no retorna nada.
 *
 */


void cuadroEdad(ePersona persona[], int tam);

#endif // FUNCIONES_H_INCLUDED
