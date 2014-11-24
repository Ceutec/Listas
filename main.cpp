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

    void agregarAlInicio(Nodo *nuevo)
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

    void agregarAlFinal(Nodo *nuevo)
    {
        if(inicio == NULL)
        {
            inicio = nuevo;
        }else
        {
            Nodo*temp = inicio;
            while(temp->sig!=NULL)
            {
                temp=temp->sig;
            }
            temp->sig = nuevo;
        }
    }
};

int main()
{
    Lista l;
    l.agregarAlFinal(new Nodo(1));
    l.agregarAlFinal(new Nodo(2));
    l.agregarAlFinal(new Nodo(3));
    l.imprimir();
    return 0;
}
