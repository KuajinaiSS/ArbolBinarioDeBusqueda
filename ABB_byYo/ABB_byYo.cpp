#include <iostream>
#include <string>
#include "Arbol.h"
#include "Nodo.h"
using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    Arbol* arbol = new Arbol;

    arbol->agregarDatoAlArbol(10);
    arbol->agregarDatoAlArbol(2);
    arbol->agregarDatoAlArbol(11);
    arbol->agregarDatoAlArbol(2);
    arbol->agregarDatoAlArbol(50);
    arbol->agregarDatoAlArbol(3);

    
    cout << "\nPre-Orden: ";
    arbol->preOrden();

    cout << "\nIn-Orden: ";
    arbol->inOrden();

    cout << "\nPost-Orden: ";
    arbol->postOrden();

    cout << "\n";
    arbol->buscar(1);
    arbol->buscar(50);
    arbol->buscar(1);
    arbol->buscar(500);



    
}

