#pragma once
#include "Nodo.h"

class Cola
{
	Nodo* frente;
	Nodo* fin;
	int tamano;

public:
	Cola();
	bool EstaVacia(); // Retorna true si la cola esta vacia
	int ObtenerFrente(); // Retorna el dato del primer nodo
	int ObtenerFin(); // Retorna el dato del último nodo
	int ObtenerTamano(); // Retorna el tamaño de la cola
	void Encola(int dato); // Inserta un nuevo nodo en el final de la cola
	int Desencola(); // Elimina el primer elemento de la cola
	int Vaciar(); // Elimina todos los nodos de la cola
	void MostrarDatos(); // Muestra todos los datos en la cola
};

