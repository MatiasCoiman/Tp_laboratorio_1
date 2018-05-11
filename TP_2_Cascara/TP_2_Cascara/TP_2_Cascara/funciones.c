#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void inicializarPersona(ePersona vec[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
        {
                    vec[i].estado=0;
        }
}

int buscarLibre(ePersona vec[], int tam)
{
   int indice=-1;
   for(int i=0;i<tam;i++)
    {
        if(vec[i].estado==0)
            {
               indice=i;
                break;
            }

    }
     return indice;
}


int buscarPersona(ePersona vec[], int tam, int dni)
{
    int indice=-1;
    for(int i=0;i<tam;i++)
        {
            if(vec[i].dni==dni&&vec[i].estado==1)
                {
             indice=i;
                }
        }
         return indice;
}
void altaPersona(ePersona vec[],int tam)
{
    ePersona nuevaPersona;
    int dni;
    int esta;
    int indice;
    indice=buscarLibre(vec, tam);
    system("cls");
    if(indice==-1)
    {
        printf("El espacio esta lleno,por favor borrar...\n");
    }
    else
    {
        printf("ingrese DNI: ");
        scanf("%d", &dni);
        esta = buscarPersona(vec, tam, dni);
        if(esta != -1)
            {
                printf("El dni ya existe, corresponde a la persona\n\n");
                printf("nombre\t\tedad\t\tD.N.I.\n");
                mostrarPersona(vec[esta]);
                system("pause");

            }
        else
        {
                   printf("Ingrese nombre: ");
                   fflush(stdin);
                   gets(nuevaPersona.nombre);

                   printf("Ingrese edad: ");
                   fflush(stdin);
                   scanf("%d", &nuevaPersona.edad);



                    nuevaPersona.estado = 1;
                    nuevaPersona.dni = dni;
                    vec[indice] = nuevaPersona;



                    vec[indice]=nuevaPersona;
                    printf("\n Datos guardados...!!\n");

        }

    }
}

void mostrarPersonas(ePersona vec[],int tam)
{

    printf(" nombre\t\tedad\tDNI\n");
    for(int i=0;i<tam;i++)
        {
            if(vec[i].estado==1)
                {
                    mostrarPersona(vec[i]);
                }
        }
}
void mostrarPersona(ePersona vec)
{
    printf(" %s      %d       %d\n",vec.nombre,vec.edad,vec.dni);

}


void bajaPersona(ePersona vec[],int tam, int dni)
{

     int esta;
     system("cls");
    printf("---Baja Persona---\n\n");
     esta=buscarPersona(vec, tam , dni);
      if(esta==-1)
            {
               printf("\n El DNI no existe,Ingrese uno valido.\n");
            }
            else
            {
                vec[esta].estado=0;
                   printf("\n Datos borrados.... !\n") ;
            }


}


void ordenarNombre(ePersona vec[],int tam)
{
        ePersona aux;
      for(int i=0;i<tam-1;i++)
                {
                    for(int j=i+1;j<tam;j++)
                    {
                        if(strcmp(vec[i].nombre,vec[j].nombre)>0)
                        {
                        aux=vec[i];
                        vec[i]=vec[j];
                        vec[j]=aux;
                         }
                         if(strcmp(vec[i].nombre,vec[j].nombre)==0)
                         {
                             if(vec[i].edad > vec[j].edad)
                             {
                                aux.edad=vec[i].edad;
                                vec[i].edad=vec[j].edad;
                                vec[j].edad=aux.edad;
                             }

                         }
                    }
                }
}

void cuadroEdad(ePersona persona[],int tam)
{

    int i;
    int valor=0;
    int mayor;
    int contador=0;
    int contador18=0;
    int contadorMas18=0;
    int contadorMas35=0;


            for(int i=0;i<tam;i++)
                {
               if(persona[i].edad<19 && persona[i].estado==1)
               {
                   contador18++;
               }

               if(persona[i].edad>35 && persona[i].estado==1)
                {
                    contadorMas35++;
                }
                if(persona[i].edad<35 && persona[i].edad>18 && persona[i].estado==1)
                {
                    contadorMas18++;
                }
                }

                 if(contador18 >= contadorMas18 && contador18 >= contadorMas35){
                        mayor = contador18;
                    }else{
                        if(contadorMas18 >= contador18 && contadorMas18 >= contadorMas35)
                        {
                            mayor = contadorMas18;
                        }
                        else{
                        mayor = contadorMas35;
                        }
                    }


                        for(i=mayor; i>0; i--){

                        if(i<= contador18){
                            printf("*");
                        }
                        if(i<= contadorMas18){
                            valor=1;
                            printf("\t*");
                        }
                        if(i<= contadorMas35){
                            if(valor==0)
                                printf("\t\t*");
                            if(valor==1)
                                printf("\t*");

                        }

                        printf("\n");
                        }
                        printf("|<18|\t|19-35|\t|>35|\n");


                printf("menor o igual a 18: %d entre 18 y 35: %d mas 35: %d\n", contador18 , contadorMas18 , contadorMas35);
                system("pause");
}













