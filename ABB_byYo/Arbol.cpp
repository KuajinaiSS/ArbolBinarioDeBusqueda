#include "Arbol.h"
#include <string> // esto permite usar el cout
#include <iostream> // esto permite usar el cout
using namespace std; // esto permite usar el cout

Arbol::Arbol()
{
    this->raiz = nullptr;
    this->actual = nullptr;

}

Arbol::~Arbol()
{
}

Nodo* Arbol::getRaiz()
{
    return this->raiz;
}

void Arbol::agregarDatoAlArbol(int dato)
{
    if (this->raiz == nullptr) // si es que aun no tenemos una raiz
    {
        this->raiz = new Nodo(dato);
        cout << "El dato " << dato << " fue asignado como raiz" << endl;
    }
    else {
        this->raiz->agregar(dato);
    }
}

void Arbol::imprimirArbol()
{
}

void Arbol::preOrden()
{
    if (this->raiz == nullptr)
    {
        cout << "el arbol aun no tiene elementos " << endl;
        return;
    }
    this->raiz->preOrden();
}

void Arbol::inOrden()
{
    if (!this->raiz)
    {
        cout << "el arbol aun no tiene elementos " << endl;
        return;
    }
    this->raiz->inOrden();
}

void Arbol::postOrden()
{
    if (!this->raiz)
    {
        cout << "el arbol aun no tiene elementos " << endl;
        return;
    }
    this->raiz->postOrden();
}

void Arbol::buscar(int dato)
{
    if (this->raiz == nullptr) {
        cout << "Arbol vacio";
        return;
    }

    else {
        this->raiz->buscar(dato);
    }
}
