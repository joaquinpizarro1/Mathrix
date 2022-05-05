#ifndef ESTADISTICAS_H_INCLUDED
#define ESTADISTICAS_H_INCLUDED
#include "Estadisticas.h"
#include "Creditos.h"
#include "Instrucciones.h"
#include "Estetica.h"
void calcularPuntMax(char nombre[], int puntos, int puntMax[],char nombrePuntMax[]);
void mostrarEstadisticas(int puntMax[], char nombrePuntMax[]);

void calcularPuntMax(char nombre[], int puntos, int puntMax[], char nombrePuntMax[]){
if (puntMax[0]==0){
puntMax[0]=puntos;
strcpy(nombrePuntMax,nombre);
}
else if (puntos>puntMax[0]){
    puntMax[0]=puntos;
    strcpy(nombrePuntMax,nombre);
}
}


void mostrarEstadisticas(int puntMax[], char nombrePuntMax[])
{
    ajusteTam(7);
    cout<<"                          Puntuacion mas alta"<<endl;
    cout<<"                        ------------------------"<<endl;
    cout<<"                       | Nombre: "<<nombrePuntMax<<"           |"<<endl;
    cout<<"                       | Puntaje: "<<puntMax[0]<<"            |"<<endl;
    cout<<"                        ------------------------"<<endl;
    ajusteTam(7);

}


#endif // ESTADISTICAS_H_INCLUDED
