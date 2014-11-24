#include <iostream>
using namespace std;

class Nodo
{
public:
    int num;
    Nodo* sig;
    Nodo(int num)
    {
        this->num = num;
        this->sig = NULL;
    }
};

class Lista
{
public:
    Nodo* inicio;

    Lista()
    {
        inicio = NULL;
    }

    void imprimir()
    {
        for(Nodo* temp = inicio;
            temp!=NULL;
            temp = temp->sig)
        {
            cout<<temp->num<<endl;
        }
    }

    void agregar(Nodo *nuevo)
    {
        if(inicio == NULL)
        {
            inicio = nuevo;
        }else
        {
            nuevo->sig = inicio;
            inicio = nuevo;
        }
    }
};

int main()
{
    Lista l;
    l.agregar(new Nodo(1));
    l.agregar(new Nodo(2));
    l.agregar(new Nodo(3));
    l.imprimir();
    return 0;
}
