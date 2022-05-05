#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <iomanip>
#include <string.h>
#include <conio.h>

using namespace std;
#include "FuncionesJuego.h"
#include "Menu.h"
#include "Estadisticas.h"
#include "Creditos.h"
#include "Estetica.h"

int main()
{
    system("mode con: cols=70 lines=30");
    srand(time(NULL));
    system("color 1F");
    char nombre[100];
    char nombrePuntMax[100];
    int opcion;
    int puntMax[1]= {0};
    int matrizTablero[6][6] = {0};
    menu();
    ajusteTam(19);
    cin >> opcion;
    funcionSalir(opcion);
    while (opcion!=0)
    {
        opciones(opcion,matrizTablero,nombre,puntMax,nombrePuntMax);
        cout<<"Pulsa una tecla para continuar";
        getch();
        system("cls");
        menu();
        ajusteTam(19);
        cin >> opcion;
        funcionSalir(opcion);
    }
    return 0;
}


