#include "lista.h"
#include <string>
template <class Q>
Lista<Q>::Lista(void): inicio(nullptr), final(nullptr), tam(0) {}

template <class Q>
Lista<Q>::~Lista(void){
    Nodo<Q> *aux = inicio;

    if(!empty()){
        while(inicio){
            inicio = inicio->get_next();
            delete aux;
            aux = inicio;
        }
    }
    final = nullptr;
    tam = 0;
}

template <class Q>
void Lista<Q>::add(Q nuevo,Q password){
    Nodo<Q> *aux = new Nodo<Q>(nuevo,password);
    if(empty()){
        inicio = aux;
    }else{
        final->set_next(aux);
    }
    final = aux;
    tam++;
}

template <class Q>
int Lista<Q>::get_tam(void) const { return tam; }

template <class Q>
bool Lista<Q>::empty(void) const{
    return (inicio == nullptr);
}

template <class Q>
void Lista<Q>::Mostrar(void) const { inicio->ShowAll(); }

template <class Q>
int Lista<Q>::Buscar(Q dato,Q password) const{ return inicio->GetDato(dato,password);}


template class Lista<int>;
template class Lista<char>;
template class Lista<std::string>;

