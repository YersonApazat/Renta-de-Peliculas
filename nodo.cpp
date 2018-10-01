
    #include "nodo.h"
    #include <string>


    template <class Q>
    Nodo<Q>::Nodo(Q nuevo,Q password){
        next = nullptr;
        MiDato = new Q;
        *MiDato = nuevo;
        Mipassword = new Q;
        *Mipassword = password;
    }
    
    template <class Q>
    Nodo<Q>::Nodo(void): MiDato(nullptr), next(nullptr),Mipassword(nullptr) {}

    template <class Q>
    Nodo<Q>::~Nodo(void){
        delete MiDato;
        next = nullptr;
    }
    template <class Q>
    void Nodo<Q>::set_data(Q nuevo, Q nuevo_2){
        MiDato = new Q;
        *MiDato = nuevo;
        Mipassword = new Q;
        *Mipassword = nuevo_2;
    }

    template <class Q>
    void Nodo<Q>::set_next(Nodo<Q> *s) { next = s; }

    template <class Q>
    const Q Nodo<Q>::get_data(void) const { return *MiDato; }


    template <class Q>
    const Q Nodo<Q>::get_password(void) const { return *Mipassword; }

    template <class Q>
    Nodo<Q> *Nodo<Q>::get_next(void) { return next; }

    template <class Q>
    void Nodo<Q>::ShowAll(void) const{
        Nodo<Q> *aux = next;
        //cout << *MiDato << endl;
        while(aux){
            //cout << aux->get_data() << endl;
            aux = aux->get_next();
        }
    }

    template <class Q>
    void Nodo<Q>::ShowStep(void) const{
        Nodo<Q> *aux = next;

        //cout << *MiDato << endl;
        while(aux){
            //cout << aux->get_data() << endl;
            aux = aux->get_next();
        }
    }
/*
    template <class Q>
    int Nodo<Q>::GetDato(Q dato){
        Nodo<Q> *aux = next;
        if(*MiDato==dato){
            return 1;
           }
        while(aux){
            //cout << aux->get_data() << endl;
            if(aux->get_data()==dato){
                return 1;
            }
            aux = aux->get_next();
        }
        return 0;
    }
*/
    template <class Q>
    int Nodo<Q>::GetDato(Q Usuario,Q Password){
        Nodo<Q> *aux = next;
        if(*MiDato==Usuario && *Mipassword ==Password){
            return 1;
           }
        while(aux){
            //cout << aux->get_data() << endl;
            if(aux->get_data()==Usuario && aux->get_password()==Password){
                return 1;
            }
            aux = aux->get_next();
        }
        return 0;
    }
    template class Nodo<int>;
    template class Nodo<char>;
    template class Nodo<std::string>;
