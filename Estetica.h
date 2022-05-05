#ifndef ESTETICA_H_INCLUDED
#define ESTETICA_H_INCLUDED
void funcionSalir(int opcion);
void ajusteTam(int v);

///Realiza saltos de linea acorde a los valores que le mandas a la funcion.
void ajusteTam(int v)
{
    for(int i=0; i<v; i++)
    {
        cout<<endl;
    }
}


void funcionSalir(int opcion){
if(opcion==0)
        {
            system("cls");
            cout<<"---- GRACIAS POR JUGAR -----"<<endl;
            getch();
        }
}


#endif // ESTETICA_H_INCLUDED
