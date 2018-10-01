#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
template <class Q>
class Lista{
    private:
        Nodo<Q> *inicio;
        Nodo<Q> *final;
        int tam;
    public:
        Lista(void);
        ~Lista(void);
        void add(Q nuevo,Q password);
        int get_tam(void) const;
        bool empty(void) const;
        void Mostrar(void) const;
        int Buscar(Q dato, Q password) const;
};


#endif // LISTA_H
