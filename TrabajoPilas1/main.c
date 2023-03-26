#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main()
{
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
    int main()
    {
        int opcion;
        Pila DADA;
        Pila AUX1;
        Pila AUX2;
        int i;
        Pila ORIGEN;
        Pila DESTINO;
        Pila MAZO;
        Pila JUGADOR1;
        Pila JUGADOR2;
        Pila A;
        Pila B;
        Pila MODELO;
        char c = 's';
        char g = 's';
        Pila LIMITE;
        Pila MAYORES;
        Pila MENORES;
        Pila PAR;
        Pila IMPAR;

        printf("----------------------------------------------------\n");
        printf("Ingrese a que ejercicio desea dirigirse o presione 0 para salir:\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
///PUNTO 1
///Cargar desde el teclado una pila DADA con 5 elementos.
///Pasar los tres primeros elementos que se encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2,
///ambas pilas inicializadas.

        case 1:
            inicpila(&DADA);
            inicpila(&AUX1);
            inicpila(&AUX2);
            for (i=0; i<5; i++)
            {
                leer (&DADA);
            }
            printf("\n\n");
            printf("La pila dada inicial contiene\n");
            mostrar (&DADA);
            for (i=0; i<3; i++)
            {
                apilar (&AUX1, desapilar(&DADA));
            }
            for (i=0; i<2; i++)
            {
                apilar (&AUX2, desapilar(&DADA));
            }
            printf("La pila dada final contiene\n");
            mostrar(&DADA);
            printf("La pila aux1 contiene\n");
            mostrar(&AUX1);
            printf("La pila aux2 contiene\n");
            mostrar (&AUX2);
            break;

///PUNTO 2
///2. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
///Pasar todos los elementos de la pila ORIGEN a la pila DESTINO

        case 2:
            inicpila(&ORIGEN);
            inicpila(&DESTINO);
            for (i=0; i<5; i++)
            {
                leer (&ORIGEN);
            }
            printf("\n\n");
            printf("La pila origen inicial contiene\n");
            mostrar(&ORIGEN);
            while (!pilavacia(&ORIGEN))
            {
                apilar (&DESTINO, desapilar(&ORIGEN));
            }
            printf("La pila origen final contiene\n");
            mostrar(&ORIGEN);
            printf("La pila destino contiene\n");
            mostrar(&DESTINO);
            break;

///PUNTO 3
///Cargar desde teclado una pila DADA y pasar a la pila DISTINTO todos aquellos elementos distintos al valor 8.
        case 3:
            inicpila(&DADA);
            inicpila (&DESTINO);
            for (i=0; i<5; i++)
            {
                leer (&DADA);
            }
            printf("\n\n");
            printf("La pila dada inicial contiene\n");
            mostrar (&DADA);

            while(!pilavacia(&DADA))
            {
                if (tope(&DADA)!= 8)
                {
                    apilar (&DESTINO, desapilar(&DADA));
                }
                else
                {
                    desapilar(&DADA);
                }

            }
            printf("La pila dada final contiene\n");
            mostrar(&DADA);
            printf("La pila destino final contiene\n");
            mostrar(&DESTINO);

///PUNTO 4
///4. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
///Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.
        case 4:
            inicpila(&ORIGEN);
            inicpila(&DESTINO);
            inicpila(&AUX1);
            for (i=0; i<5; i++)
            {
                leer (&ORIGEN);
            }
            printf("\n\n");
            printf("La pila origen inicial contiene\n");
            mostrar(&ORIGEN);
            while (!pilavacia(&ORIGEN))
            {
                apilar (&AUX1, desapilar(&ORIGEN));
            }
            while(!pilavacia(&AUX1))
            {
                apilar (&DESTINO, desapilar(&AUX1));
            }
            printf("La pila origen final contiene\n");
            mostrar(&ORIGEN);
            printf("La pila destino contiene\n");
            mostrar(&DESTINO);

///PUNTO 5
///Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA
///contenga los elementos cargados originalmente en ella, pero en orden inverso.
        case 5:
            inicpila(&DADA);
            inicpila (&AUX1);
            for (i=0; i<5; i++)
            {
                leer (&DADA);
            }
            printf("\n\n");
            printf("La pila dada inicial contiene\n");
            mostrar (&DADA);
            while (!pilavacia(&DADA))
            {
                apilar (&AUX1, desapilar(&DADA));
            }
            printf("La pila AUX1 contiene\n");
            mostrar (&AUX1);
            while(!pilavacia(&AUX1))
            {
                apilar (&DADA, desapilar(&AUX1));
            }
            printf("La pila dada final contiene\n");
            mostrar (&DADA);
            break;

///PUNTO 6
///Pasar el primer elemento (tope) de la pila DADA a su última posición (base)
///dejando los restantes elementos en el mismo orden.
        case 6:
            inicpila(&DADA);
            inicpila (&AUX1);
            inicpila (&AUX2);
            for (i=0; i<5; i++)
            {
                leer (&DADA);
            }
            printf("\n\n");
            printf("La pila dada inicial contiene\n");
            mostrar (&DADA);
            apilar (&AUX1,desapilar(&DADA));
            for (i=0 ; i<4 ; i++)
            {
                apilar (&AUX2,desapilar(&DADA));
            }
            apilar (&DADA,desapilar(&AUX1));
            while (!pilavacia(&AUX2))
            {
                apilar (&DADA,desapilar(&AUX2));
            }
            printf("La pila dada final contiene\n");
            mostrar (&DADA);
///PUNTO 7
/// Pasar el último elemento (base) de la pila DADA a su primera posición (tope),
///dejando los restantes elementos en el mismo orden.
        case 7:
            inicpila(&DADA);
            inicpila (&AUX1);
            inicpila (&AUX2);
            for (i=0; i<5; i++)
            {
                leer (&DADA);
            }
            printf("\n\n");
            printf("La pila dada inicial contiene\n");
            mostrar (&DADA);
            for (i=0 ; i<4 ; i++)
            {
                apilar (&AUX1,desapilar(&DADA));
            }
            apilar (&AUX2,desapilar(&DADA));
            while (!pilavacia(&AUX1))
            {
                apilar (&DADA,desapilar(&AUX1));
            }
            apilar (&DADA,desapilar(&AUX2));
            printf("La pila dada final contiene\n");
            mostrar (&DADA);

///PUNTO 8
///Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.
        case 8:
            inicpila(&MAZO);
            inicpila (&JUGADOR1);
            inicpila(&JUGADOR2);

            for (i=0; i<10; i++)
            {
                leer(&MAZO);
            }
            printf("\n\n");
            printf("La pila MAZO inicial contiene\n");
            mostrar (&MAZO);

            while(!pilavacia(&MAZO))
            {
                apilar(&JUGADOR1, desapilar(&MAZO));
                if(!pilavacia(&MAZO))
                {
                    apilar(&JUGADOR2, desapilar(&MAZO));
                }
            }
            printf("La pila MAZO final contiene\n");
            mostrar (&MAZO);
            printf("La pila JUGADOR1 final contiene\n");
            mostrar (&JUGADOR1);
            printf("La pila JUGADOR2 final contiene\n");
            mostrar (&JUGADOR2);

///PUNTO 9
/// Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.
        case 9:
            inicpila(&A);
            inicpila(&B);
            while(c == 's')
            {
                printf("Pila a\n");
                leer(&A);
                printf("Desea cargar otro dato a la pila A, presione s por si o n por no\n");
                fflush(stdin);
                scanf("%c", &c);
            }
            while(g == 's')
            {
                printf("Pila b\n");
                leer(&B);
                printf("Desea cargar otro dato a la pila B, presione s por si o n por no\n");
                fflush(stdin);
                scanf("%c", &g);
            }
            while(!pilavacia(&A) && !pilavacia(&B))
            {
                desapilar(&A);
                desapilar(&B);
            }
            if (pilavacia(&A) && !pilavacia(&B))
            {
                printf("Pila B tiene mas elementos\n");
            }
            else if (pilavacia(&B) && !pilavacia(&A))
            {
                printf("Pila A tiene mas elementos\n");
            }
            else
            {
                printf("Tienen misma cantidad de elementos\n");
            }
            printf("Pila A final\n");
            mostrar(&A);
            printf("Pila B final\n");
            mostrar (&B);
            break;

///Punto 10
/// Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales
///(en cantidad de elementos, valores que contienen y posición de los mismos). Mostrar por pantalla el resultado.
        case 10:
            inicpila(&A);
            inicpila(&B);
            inicpila(&AUX1);
            inicpila(&AUX2);
            apilar(&A, 3);
            apilar(&A, 2);
            apilar(&A, 1);
            apilar(&B, 3);
            apilar(&B, 2);
            apilar(&B, 1);


            while (tope(&A) == tope(&B) && !pilavacia(&A) && !pilavacia(&B) )
            {
                desapilar(&A);
                desapilar(&B);
            }
            if (pilavacia(&A) && pilavacia(&B))
            {
                printf("Son iguales\n");
            }
            else if (!pilavacia(&B) || !pilavacia(&A))
            {
                printf("no son iguales\n");
            }
            printf("Pila A final\n");
            mostrar(&A);
            printf("Pila B final\n");
            mostrar (&B);
            break;

///Punto 11
///Suponiendo la existencia de una pila MODELO que no esté vacía,
///eliminar de la pila DADA todos los elementos que sean iguales al tope de la pila MODELO.
        case 11:
            inicpila(&MODELO);
            apilar(&MODELO, 2);
            inicpila(&DADA);
            inicpila(&AUX1);
            while(c == 's')
            {
                printf("Pila DADA\n");
                leer(&DADA);
                printf("Desea cargar otro dato a la pila A, presione s por si o n por no\n");
                fflush(stdin);
                scanf("%c", &c);
            }
            printf("\n\n");
            printf("La pila DADA inicial contiene\n");
            mostrar(&DADA);
            while (!pilavacia (&DADA))
            {
                if (tope(&DADA) == tope(&MODELO))
                {
                    desapilar(&DADA);
                }
                else
                {
                    apilar(&AUX1, desapilar(&DADA));
                }

            }
            while(!pilavacia(&AUX1))
            {
                apilar(&DADA, desapilar(&AUX1));
            }
            printf("\n\n");
            printf("La pila DADA final contiene\n");
            mostrar(&DADA);

            break;


///PUNTO 12
///Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los elementos que existan en MODELO.
        case 12:
            inicpila(&MODELO);
            inicpila(&DADA);
            inicpila (&AUX1);
            apilar(&MODELO, 1);
            apilar(&MODELO, 2);
            while(g == 's')
            {
                printf("Pila DADA\n");
                leer(&DADA);
                printf("Desea cargar otro dato a la pila DADA, presione s por si o n por no\n");
                fflush(stdin);
                scanf("%c", &g);
            }
            printf("pila modelo inicial\n");
            mostrar(&MODELO);
            printf("pila dada inicial\n");
            mostrar(&DADA);

            while (!pilavacia (&DADA))
            {
                if (tope(&DADA) == tope(&MODELO))
                {
                    desapilar(&DADA);
                }
                else
                {
                    apilar(&AUX1, desapilar(&DADA));
                }
            }

            while (!pilavacia(&AUX1))
            {
                apilar(&DADA, desapilar(&AUX1));

            }
            desapilar(&MODELO);

            while (!pilavacia (&DADA))
            {
                if (tope(&DADA) == tope(&MODELO))
                {
                    desapilar(&DADA);
                }
                else
                {
                    apilar(&AUX1, desapilar(&DADA));
                }
            }

            while (!pilavacia(&AUX1))
            {
                apilar(&DADA, desapilar(&AUX1));

            }
            printf("pila dada final\n");
            mostrar(&DADA);
            break;
///PUNTO 13
///Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores
///o iguales que el tope de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila MENORES.
        case 13:
            inicpila(&DADA);
            inicpila(&LIMITE);
            inicpila(&MAYORES);
            inicpila(&MENORES);

            apilar (&LIMITE, 5);
            while(g == 's')
            {
                printf("Pila DADA\n");
                leer(&DADA);
                printf("Desea cargar otro dato a la pila DADA, presione s por si o n por no\n");
                fflush(stdin);
                scanf("%c", &g);
            }

            printf("pila dada inicial\n");
            mostrar(&DADA);


            while (!pilavacia(&DADA))
            {
                if (tope(&DADA) >= tope(&LIMITE))
                {
                    apilar(&MAYORES, desapilar(&DADA));
                }
                else
                {
                    apilar(&MENORES, desapilar(&DADA));
                }

            }
            printf("Pila MAYORES");
            mostrar(&MAYORES);
            printf("Pila MENORES\n");
            mostrar(&MENORES);
            break;

///PUNTO 14
/// Determinar si la cantidad de elementos de la pila DADA es par.
///Si es par, pasar el elemento del tope de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR.
///(NO contar los elementos)
        case 14:
            Pila dada, aux, par, impar;
            inicpila(&dada);
            inicpila(&aux);
            inicpila(&par);
            inicpila(&impar);

            int i, num = 0, num2 = 0, top, topAux;

            for(i=0; i<4; i++)
            {
                num++;
                apilar(&dada, num);
            }

            for(i=0; i<5; i++)
            {
                num2 = num2 + 4;
                apilar(&aux, num2);
            }

            top = tope(&dada);
            topAux = tope(&aux);

            while (!pilavacia(&dada))
            {
                desapilar(&dada);
                if(pilavacia(&dada))
                {
                    apilar(&impar, topAux);
                }
                else
                {
                    desapilar((&dada));
                }
            }

            if(pilavacia(&impar))
            {
                apilar(&par, topAux);
            }

            printf("PILA PAR \n");
            mostrar(&par);
            printf("PILA IMPAR \n");
            mostrar(&impar);
            break;
        }

///PUNTO 15
/// Cuál es la condición del siguiente ciclo? ¿Cuándo finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas).
/* A: La condicion del cilo es que mientras la Pila 1 contenga algo, se ejecute y apile en Pila 2 lo que se encuentra en descarte.
El ciclo no finaliza nunca ya que en ningun momento se desapilan los elementos de la Pila 1. En caso de que Pila 1 no tenga nada, directamente no se ejecuta el while. */


///PUNTO 16
/// Que realiza el siguiente código escrito en lenguaje C (Pila1, Aux y Result son pilas).
/* El codigo se ejecuta mientras Pila 1 contenga algo, si el tope de la Pila 1 es 5, se va a desapilar y se va a apilar en Aux, y luego se va a desapilar de aux
 para apilarse en resultado y quedar en el mismo orden. */

///PUNTO 17
//A: Este programa no funciona, ya que no resuelve el problema planteado porque solo se fija si el tope de Origen es distinto a 5 y no  todos sus elementos.

//B: El error es que solo analiza el tope de la pila y no todos sus elementos.
//C:
    case 17:
        Pila Origen, Distinto, cincos;
        inicpila(&Origen);
        inicpila(&Distinto);
        inicpila(&cincos);
        apilar(&Origen, 5);
        apilar(&Origen, 5);
        apilar(&Origen, 3);
        apilar(&Origen, 5);
        apilar(&Origen, 2);

        while (!pilavacia(&Origen))
        {
            if (tope(&Origen) != 5)
            {
                apilar (&Distinto, desapilar(&Origen));
            }
            else
            {
                apilar(&cincos, desapilar(&Origen));
            }
        }
        mostrar(&cincos);
        mostrar(&Origen);
        mostrar(&Distinto);
        break;
///PUNTO 18

//A: La condicion del ciclo es que mientras ambas pilas (Pila 1 y Pila 2) tengan algo, lo de pila 1 se va a apilar en la pila descarte, y lo de Pila 2 tambien.

/* B: Si ambas pilas tienen la misma cantidad de valores, ambas pilas quedan vacias, si una tiene mas valores que la otra la de menor valor quedara vacia y la de
/Mayor valor desapilara la cantidad de valores que desapilo la pila menor. */
        return 0;
    }

}
