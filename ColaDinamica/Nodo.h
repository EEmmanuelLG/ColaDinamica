#pragma once
#include <iostream>

class Nodo
{
	int dato;
	Nodo* sig;

	friend class Cola;
public:
	Nodo(int _dato);
};

