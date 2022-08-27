#include "Nodo.h"
#include <string> // esto permite usar el cout
#include <iostream> // esto permite usar el cout
using namespace std; // esto permite usar el cout

Nodo::Nodo()
{

}

Nodo::~Nodo()
{
}

Nodo::Nodo(int dato)
{
    this->dato = dato;
    this->hijoDer = nullptr;
    this->hijoIzq = nullptr;
}

int Nodo::getDato()
{
    return this->dato;
}

Nodo* Nodo::getHijoDer()
{
    return this->hijoDer;
}

Nodo* Nodo::getHijoIzq()
{
    return this->hijoIzq;
}

void Nodo::setDato(int dato)
{
    this->dato = dato;
}

void Nodo::setHijoIzq(Nodo* nodoHijoIzq)
{
    this->hijoIzq = nodoHijoIzq;
}

void Nodo::setHijoDer(Nodo* nodoHijoDer)
{
    this->hijoDer = nodoHijoDer;
}

void Nodo::agregar(int dato)
{
    if (this->dato == dato)
    {
        cout << "ERROR El dato "<< dato <<" ya esta agregado (repetido)" << endl;
        return;
    }

    if (dato < this->dato)// si el dato que intentamos agregar es menor que el dato que tenemos a la izquierda
    {
        if (this->hijoIzq == nullptr)// si es que no tiene hijo izquierdo, lo agregamos
        {
            this->hijoIzq = new Nodo(dato);
            cout << "El dato " << dato << " fue agregado a la izquierda de " << this->dato << endl;
            return;
        }

        else // si es que ya existe un nodocen su izquierda
        {
            this->hijoIzq->agregar(dato); // a ese nodo le intentamos agregar el dato
        }

    }






    if (dato > this->dato)// si el dato que intentamos agregar es mayor que el dato que tenemos a la derecha
    {
        if (this->hijoDer == nullptr)// y si la derecha esta vacia
        {
            this->hijoDer = new Nodo(dato);// lo agrego a la derecha
            cout << "El dato "<< dato << " fue agregado a la derecha de "<< this->dato << endl;
            return;
        }

        else// ka derecha no esta vacia
        {
            this->hijoDer->agregar(dato);// me muevo a la derecha
        }
    }




}

void Nodo::preOrden()
{
    cout << this->dato << "  ";

    if (this->hijoIzq) {
        this->hijoIzq->preOrden();
    }
    if (this->hijoDer) {
        this->hijoDer->preOrden();
    }
}

void Nodo::inOrden()
{
    if (this->hijoIzq) {
        this->hijoIzq->inOrden();
    }
    cout << this->dato << "  ";

    if (this->hijoDer) {
        this->hijoDer->inOrden();
    }
}

void Nodo::postOrden()
{
    if (this->hijoIzq) {
        this->hijoIzq->inOrden();
    }

    if (this->hijoDer) {
        this->hijoDer->inOrden();
    }

    cout << this->dato << "  ";
}

void Nodo::buscar(int dato)
{
    

    if (this->dato == dato) {
        cout << "Dato " << dato << " encontrado" << endl;
        return;
    }

    if (this->dato < dato && this->hijoDer != nullptr) {
        cout << "mov derecha" << endl;
        this->hijoDer->buscar(dato);
        
    }

    if (this->dato > dato && this->hijoIzq != nullptr) {
        cout << "mov izquierda" << endl;
        this->hijoIzq->buscar(dato);
        
    }
    cout << "Dato " << dato << " no encontrado" << endl;



}


