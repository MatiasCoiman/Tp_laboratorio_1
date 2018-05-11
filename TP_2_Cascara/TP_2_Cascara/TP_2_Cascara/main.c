#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define tam 20

int main()
{
    printf("Sistema Iniciandose....\n");
    system("pause");
    char seguir='s';
    int opcion=0;
    ePersona gente[tam];
    ePersona personaAux;
    int dni;
    inicializarPersona(gente, tam);

    while(seguir=='s')
    {
        system("cls");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                altaPersona(gente, tam);
                system("pause");

                break;
            case 2:

                printf("ingrese DNI: ");
                 scanf("%d", &dni);
                bajaPersona(gente,tam,dni);
                system("pause");
                break;
            case 3:

                ordenarNombre(gente,tam);
                mostrarPersonas(gente, tam);
                system("pause");
                break;
            case 4:

                 printf("\n\n");
                cuadroEdad(gente, tam);
                break;
            case 5:
                seguir = 'n';
                printf("Sistema apagandose....\n");
                system("pause");
                break;
        }
    }

    return 0;
}
