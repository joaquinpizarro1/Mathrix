#include "Estadisticas.h"
#include "Creditos.h"
#include "Instrucciones.h"
#include "Estetica.h"
void menu();
void opciones(int opcion, int matrizTablero[][6],int puntaje[], char nombre[], int puntMax[], char nombrePuntMax[]);

void menu()
{
    ajusteTam(3);
    cout<<"                        ----------------------"<<endl;
    cout<<"                       | 1 - INSTRUCCIONES     *"<<endl;
    cout<<"                       | 2 - JUGAR             *"<<endl;
    cout<<"                       | 3 - ESTADISTICAS      *"<<endl;
    cout<<"                       | 4 - CREDITOS          *"<<endl;
    cout<<"                        -----------------------"<<endl;
    cout<<"                       | 0 - SALIR             *"<<endl;
}

void opciones(int opcion, int matrizTablero[][6], char nombre[], int puntMax[], char nombrePuntMax[])
{
    int puntaje;
    switch (opcion)
    {
    case 1:
    {
        Instrucciones();

        //DEFINIR ESTA OPCION
    }
    break;

    case 2:
    {
        system ("cls");
        char calculadora[100];
        cout << " Ingrese su nombre: ";
        cin>>nombre;
        cout << " Ingrese su calculadora favorita: ";
        cin>>calculadora;
        system ("cls");
        llenarMatriz(matrizTablero);
        puntaje = mostrarMatriz(matrizTablero,nombre,calculadora);
        calcularPuntMax(nombre,puntaje,puntMax,nombrePuntMax);
    }
    break;

    case 3:
    {
        system ("cls");
        mostrarEstadisticas(puntMax, nombrePuntMax);

    }
    break;
    case 4:
    {
        system ("cls");
        mostrarCreditos();
    }
    break;
    case 0:
    {
        system ("cls");
    }
    break;

    default:
    {

        cout<<" Opcion no valida";

    }
    break;

    }
}



