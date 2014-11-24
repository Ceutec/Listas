#include <iostream>
#include <list>
using namespace std;

template <typename Tipo>
class Nodo
{
public:
    Tipo num;
    Nodo* sig;
    Nodo(Tipo num)
    {
        this->num = num;
        this->sig = NULL;
    }
};

template <typename Tipo>
class Lista
{
public:
    Nodo<Tipo>* inicio;

    Lista()
    {
        inicio = NULL;
    }

    void imprimir()
    {
        for(Nodo<Tipo>* temp = inicio;
            temp!=NULL;
            temp = temp->sig)
        {
            cout<<temp->num<<endl;
        }
    }

    void agregarAlInicio(Nodo<Tipo> *nuevo)
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

    void agregarAlFinal(Nodo<Tipo> *nuevo)
    {
        if(inicio == NULL)
        {
            inicio = nuevo;
        }else
        {
            Nodo<Tipo>*temp = inicio;
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
    Lista<char> mi_lista;
    mi_lista.agregarAlFinal(new Nodo<char>('a'));
    mi_lista.agregarAlFinal(new Nodo<char>('b'));
    mi_lista.agregarAlFinal(new Nodo<char>('c'));
    mi_lista.imprimir();
    return 0;
}






