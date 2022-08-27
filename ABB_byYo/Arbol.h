#pragma once
#include "Nodo.h"


class Arbol
{
private:
	Nodo* raiz;
	Nodo* actual;

public:
	// constructores destructores
	Arbol();
	~Arbol();

	// gets y sets
	Nodo* getRaiz();

	// funciones
	void agregarDatoAlArbol(int dato);

	void imprimirArbol();// no se como hacer esto

	void preOrden();
	void inOrden();
	void postOrden();

	void buscar(int dato);
};

