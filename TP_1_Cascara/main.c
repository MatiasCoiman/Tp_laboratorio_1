#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>

int main()
{
    char seguir='s';
    int opcion=0;
    double resultado;
    float a=0,b=0;
    int auxFact;
    int factInt=1;

     printf("INICIANDO CALCULADORA...\n");
     system("pause");
    while(seguir=='s')
    {

        system("cls");
        printf("1- Ingresar 1er operando (A=%.2f)\n",a);
        printf("2- Ingresar 2do operando (B=%.2f)\n",b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese un numero: ");
                scanf("%f",&a);
                break;
            case 2:
                printf("Ingrese un numero: ");
                scanf("%f",&b);
                break;
            case 3:
                printf("Usted hizo %.2f + %.2f \n",a,b);
                resultado= suma(a,b);
                printf("El resultado es :%.2f\n\n ", resultado);
                system("pause");

                break;
            case 4:
                printf("Usted hizo %.2f - %.2f \n",a,b);
                resultado= resta(a,b);
                printf("El resultado es :%.2f\n\n ", resultado);
                system("pause");

                break;
            case 5:
                if(b==0)
                {
                    printf("Error , ingrese un numero divisorio valido.\n");
                    system("pause");
                }

                else
                    {
                        printf("Usted hizo %.2f / %.2f \n",a,b);
                        resultado= division(a,b);
                        printf("El resultado es :%.2f\n\n ", resultado);
                        system("pause");
                    }

                break;
            case 6:
                        printf("Usted hizo %.2f * %.2f \n",a,b);
                        resultado= multiplicacion(a,b);
                        printf("El resultado es :%.2f\n\n ", resultado);
                        system("pause");
                break;
            case 7:
                if(a<0)
                {
                    printf("Error ,ingrese un numero valido.\n");
                    system("pause");
                }
                else
                {

                     auxFact=(int)a;
                    factInt=factorial(auxFact);
                    printf("Usted hizo el factoreo de %d \n",auxFact);
                    printf("El resultado es :%d \n:",factInt);
                    system("pause");
                }

                break;
            case 8:
                printf("La suma es: %.2f + %.2f \n",a,b);
                resultado= suma(a,b);
                printf("El resultado es :%.2f\n\n ", resultado);

                printf("La resta es: %.2f - %.2f \n",a,b);
                resultado= resta(a,b);
                printf("El resultado es :%.2f\n\n ", resultado);

                 if(b==0)
                {
                    printf("Error , ingrese un numero divisorio valido.\n");
                    system("pause");
                }

                else
                    {
                        printf("La division es: %.2f / %.2f \n",a,b);
                        resultado= division(a,b);
                        printf("El resultado es :%.2f\n\n ", resultado);
                    }
                  printf("La multiplicacion es: %.2f * %.2f \n",a,b);
                  resultado= multiplicacion(a,b);
                  printf("El resultado es :%.2f\n\n ", resultado);

                  if(a<0)
                {
                    printf("Error ,ingrese un numero valido.\n");
                    system("pause");
                }
                else
                {

                     auxFact=(int)a;
                    factInt=factorial(auxFact);
                    printf("Usted hizo el factoreo de %d \n",auxFact);
                    printf("El resultado es :%d \n:",factInt);
                }
                    system("pause");
                break;
            case 9:
                seguir = 'n';
                printf("Adios,gracias por utilizarme...");
                break;
        }



}
    return 0;
}
