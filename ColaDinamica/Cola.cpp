#include "Cola.h"

Cola::Cola()
{
	frente = NULL;
	fin = NULL;
	tamano = 0;
}

bool Cola::EstaVacia()
{
	return tamano == 0;
}

int Cola::ObtenerFrente()
{
	if (!EstaVacia())
	{
		return frente->dato;
	}

	return -1;
}

int Cola::ObtenerFin()
{
	if (!EstaVacia())
	{
		return fin->dato;
	}

	return -1;
}

int Cola::ObtenerTamano()
{
	return tamano;
}

void Cola::Encola(int dato)
{
	Nodo* nuevo = new Nodo(dato);

	if (EstaVacia())
	{
		frente = fin = nuevo;
	}
	else
	{
		fin->sig = nuevo;
		fin = nuevo;
	}

	tamano++;
}

int Cola::Desencola()
{
	if (EstaVacia())
	{
		return -1;
	}
	else
	{
		Nodo* aux = frente;
		frente = frente->sig;
		int tmp = aux->dato;
		delete (aux);
		tamano--;
		return tmp;
	}
}

int Cola::Vaciar()
{
	Nodo* aux = frente;

	while (frente != NULL)
	{
		aux = frente;
		frente = frente->sig;
		delete(aux);
	}

	fin = NULL;
	int tmp = tamano;
	tamano = 0;
	return tmp;
}

void Cola::MostrarDatos()
{
	Nodo* aux = frente;

	while (aux != NULL)
	{
		std::cout << aux->dato << std::endl;
		aux = aux->sig;
	}
}