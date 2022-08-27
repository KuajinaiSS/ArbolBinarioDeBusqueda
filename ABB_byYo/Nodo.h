#pragma once

class Nodo
{
private:
	int dato;
	Nodo *hijoDer;
	Nodo* hijoIzq;

public:
	// constructores y destructores
	Nodo();
	~Nodo();

	/// <summary>
	/// crea un Nodo con sus referencias hijo Izquierdo y hijo derecho a nullptr
	/// </summary>
	/// <param name="dato">:  el dato que tendra el nodo, en este caso es un int </param>
	Nodo(int dato);

	// gets y sets
	int getDato();
	Nodo* getHijoDer();
	Nodo* getHijoIzq();

	void setDato(int dato);
	void setHijoIzq(Nodo* nodoHijoIzq);
	void setHijoDer(Nodo* nodoHijoDer);

	// funciones
	void agregar(int dato);
	void preOrden();
	void inOrden();
	void postOrden();

	void buscar(int dato);

};

