#include <iostream>
    // Listas (doblemente enlazadas, enlazada, circular simplemente enlazada, lista circular doblemente enlazada )
    // Pilas
    // Colas
    // Arboles (de busqueda)
    // Grafo
    // Métodos de ordenamiento (Heap Sort, merge sort, bubble sort, insertion sort)
void insertList(Nodo*& lista, int value);
struct Nodo {
    int value;
    Nodo* next;
};

int main()
{
    int x = 4;
    int* p = &x;
    Nodo* list = NULL;

    std::cout << "Data Structures\n " << p << " " << &p;
}

void insertList(Nodo*& lista, int newValue)
{
    //Create a new node and assign value
    Nodo* newNode = new Nodo();
    newNode->value = newValue;

    Nodo* aux1 = lista;
    Nodo* aux2;

    while (aux1 != NULL && aux1->value < newValue)
    {

    }
}
