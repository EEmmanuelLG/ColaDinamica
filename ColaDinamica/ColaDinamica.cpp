
#include <iostream>
#include "Cola.h"

using namespace std;

int main()
{
    Cola* cola = new Cola();
    int opc = 0;

    while (opc != 8)
    {
        system("cls");
        cout << "1. Encola" << endl;
        cout << "2. Desencola" << endl;
        cout << "3. Ver frente" << endl;
        cout << "4. Ver fin" << endl;
        cout << "5. Ver tamano" << endl;
        cout << "6. Vaciar" << endl;
        cout << "7. Mostrar datos" << endl;
        cout << "8. Salir" << endl;

        cout << endl;
        cout << "Elija una opcion: ";
        cin >> opc;

        system("cls");

        switch (opc)
        {
        case 1:
        {
            int dato;
            cout << "Ingrese el dato: ";
            cin >> dato;

            cola->Encola(dato);

            break;
        }
        case 2:
        {
            if (cola->EstaVacia())
            {
                cout << "La cola esta vacia" << endl;
            }
            else
            {
                int dato = cola->Desencola();
                cout << "El dato " << dato << " ha sido eliminado";
            }

            break;
        }
        case 3:
        {
            if (cola->EstaVacia())
            {
                cout << "La cola esta vacia" << endl;
            }
            else
            {
                int datoFrente = cola->ObtenerFrente();
                cout << "El dato en el frente es " << datoFrente << endl;
            }

            break;
        }
        case 4:
        {
            if (cola->EstaVacia())
            {
                cout << "La cola esta vacia" << endl;
            }
            else
            {
                int datoFin = cola->ObtenerFin();
                cout << "El dato en el fin es " << datoFin << endl;
            }

            break;
        }
        case 5:
        {
            int tamano = cola->ObtenerTamano();
            cout << "El tamano de la cola es " << tamano << endl;
            
            break;
        }
        case 6:
        {
            if (cola->EstaVacia())
            {
                cout << "La cola esta vacia" << endl;
            }
            else
            {
                int eliminados = cola->Vaciar();
                cout << eliminados << " elementos fueron eliminados" << endl;
            }
            break;
        }
        case 7:
        {
            if (cola->EstaVacia())
            {
                cout << "La cola esta vacia" << endl;
            }
            else
            {
                cout << "Elementos en la cola: " << endl;
                cola->MostrarDatos();
            }
            break;
        }
        }

        cin.get();
        cin.get();
    }
}
