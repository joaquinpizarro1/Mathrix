#include "Estadisticas.h"
#include "Creditos.h"
#include "Instrucciones.h"
#include "Estetica.h"
int numerosAzar(int inicio, int fin);
void llenarMatriz(int m[][6]);
int mostrarMatriz(int m[][6], char nombre[],char calculadora[]);
int funcionSeleccionar(int v, char op, int m[][6],int x,int y);

///Aca se realizan las validaciones acorde a las opciones seleccionadas de la matriz.
int funcionSeleccionar(int v, char op, int m[][6],int x,int y)
{
    int a,b,c,puntos=0;
    bool operacion = false;
    switch(v)
    {
///Arriba
    case 8:
    {
        a=m[x-1][y-1];
        b=m[x-2][y-1];
        c=m[x-3][y-1];
        if ((a>=1&&a<=9) && ((b>=1&&b<=9) && (c>=1&&c<=9)))
        {
            switch(op)
            {
            case '+':
                if((a+b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '-':
                if((a-b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '*':
                if((a*b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '/':
                if((a/b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '%':
                if((a%b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            }
        }
        else
        {
            system("cls");
            cout << " Seleccione valores validos!!!"<<endl;
        }

        if(operacion==true)
        {
            puntos+=a;
            puntos+=b;
            puntos+=c;
            a=m[x-1][y-1] = 0;
            b=m[x-2][y-1] = 0;
            c=m[x-3][y-1] = 0;
        }
    }
    break;
///Abajo
    case 2:
    {
        a=m[x-1][y-1];
        b=m[x][y-1];
        c=m[x+1][y-1];
        if ((a>=1&&a<=9) && ((b>=1&&b<=9) && (c>=1&&c<=9)))
        {
            switch(op)
            {
            case '+':
                if((a+b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '-':
                if((a-b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '*':
                if((a*b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '/':
                if((a/b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '%':
                if((a%b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            }
        }
        else
        {
            system("cls");
            cout << " Seleccione valores validos!!!"<<endl;
        }
        if(operacion==true)
        {
            puntos+=a;
            puntos+=b;
            puntos+=c;
            a=m[x-1][y-1] = 0;
            b=m[x][y-1] = 0;
            c=m[x+1][y-1] = 0;
        }
    }
    break;
///Izquierda
    case 4:
    {
        a=m[x-1][y-1];
        b=m[x-1][y-2];
        c=m[x-1][y-3];
        if ((a>=1&&a<=9) && ((b>=1&&b<=9) && (c>=1&&c<=9)))
        {
            switch(op)
            {
            case '+':
                if((a+b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '-':
                if((a-b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '*':
                if((a*b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '/':
                if((a/b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '%':
                if((a%b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            }
        }
        else
        {
            system("cls");
            cout << " Seleccione valores validos!!!"<<endl;
        }
        if(operacion==true)
        {
            puntos+=a;
            puntos+=b;
            puntos+=c;
            a=m[x-1][y-1] = 0;
            b=m[x-1][y-2] = 0;
            c=m[x-1][y-3] = 0;
        }
    }
    break;
///Derecha
    case 6:
    {
        a=m[x-1][y-1];
        b=m[x-1][y];
        c=m[x-1][y+1];
        if ((a>=1&&a<=9) && ((b>=1&&b<=9) && (c>=1&&c<=9)))
        {
            switch(op)
            {
            case '+':
                if((a+b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '-':
                if((a-b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '*':
                if((a*b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '/':
                if((a/b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            case '%':
                if((a%b)==c)
                    operacion = true;
                else
                    cout<<" Incorrecto"<<endl;
                break;
            }
        }
        else
        {
            system("cls");
            cout << " Seleccione valores validos!!!"<<endl;
        }
        if(operacion==true)
        {
            puntos+=a;
            puntos+=b;
            puntos+=c;
            a=m[x-1][y-1] = 0;
            b=m[x-1][y] = 0;
            c=m[x-1][y+1] = 0;
        }
    }
    break;
    }
    if (operacion==true)
        cout << " Es correcto, son "<<puntos<<endl;
    return puntos;
}

///Muestra la matriz.
int mostrarMatriz(int m[][6], char nombre[], char calculadora[])
{
    int pilas=3, puntos=0;
    do
    {
        int xx, yy, valor, puntaje;
        char op;
        system("cls");
        cout << " Jugador: "<<nombre<<endl;
        cout << " Calculadora: "<<calculadora<<endl;
        cout    << " Puntos: "<<puntos<<endl;
        cout<< " Pilas: "<<pilas<<endl<<endl;
        cout << "                         -----------------------"<<endl;
        for(int x=0; x<6; x++)
        {

            cout << "                      " << x + 1 << " ";
            for (int y =0; y<6; y++)
            {
                if(m[x][y]!=0)
                {
                    cout << "| " << m[x][y] <<  " ";
                }
                else
                {
                    cout << "|   ";
                }
            }

            cout<<"|"<<endl<<"                         -----------------------"<<endl;
        }
        cout << "                          1   2   3   4   5   6";


        ajusteTam(2);

        cout << endl << " Ingrese fila: ";
        cin>>xx;
        cout << " Ingrese columna: ";
        cin>>yy;
        cout << " Que operacion elige? ";
        cin>>op;
        cout << " Para donde quiere moverse? ";
        cin>>valor;
        if( xx== 0 && yy == 0){
            pilas-- ;
            srand(time(NULL));
            llenarMatriz(m) ;
        }
        else {

        puntaje = funcionSeleccionar(valor,op, m, xx, yy);
        puntos += puntaje;
        if(puntaje==0)
        {
            pilas--;
        }

        ajusteTam(3);
        cout<<"Pulsa una tecla para continuar";getch();
    }
    }
    while(pilas>0);
    return puntos;
}


int numerosAzar(int inicio, int fin)
{
    int valor;
    valor = rand() % fin + inicio;
    return valor;
}

///Lleno
void llenarMatriz(int m[][6])
{
    for(int i=0; i<6; i++)
    {
        for (int x =0; x<6; x++)
        {
            m[i][x]=numerosAzar(1,9);
        }

    }
}

