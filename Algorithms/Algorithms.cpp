#include <iostream>
using namespace std;
    // Listas (doblemente enlazadas, enlazada, circular simplemente enlazada, lista circular doblemente enlazada )
    // Pilas
    // Colas
    // Arboles (de busqueda)
    // Grafo
    // Métodos de ordenamiento (Heap Sort, merge sort, bubble sort, insertion sort)
struct Nodo {
    int value;
    Nodo* next;
};

void insertList(Nodo*& lista, int value);

int main()
{
    int value;
    Nodo* list = NULL;

    cout << "Data Structures\n ";


    cout << "Insert a new value: ";
    cin >> value;

    insertList(list, value);

    return 0;
}

void insertList(Nodo*& lista, int newValue)
{
    //Create a new node and assign value
    Nodo* newNode = new Nodo();
    newNode->value = newValue;

    Nodo* aux1 = lista;
    Nodo* aux2 = NULL;

    while (aux1 != NULL && (aux1->value < newValue) )
    {
        aux2 = aux1;
        aux1 = aux1->next; 
    }

    if (lista == aux1) {
        lista = newNode;
    }
    else {
        aux2->next = newNode;
    }

    newNode->next = aux1;

    cout << "Value " << newValue << " is inserted properly\n";
}
