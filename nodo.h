#ifndef NODO_H
#define NODO_H

template <class Q>

class Nodo{
    private:
        Q *MiDato;
        Q *Mipassword;
        Nodo *next;
    public:
        Nodo(Q nuevo,Q password);
        Nodo(void);
        ~Nodo(void);
        void set_data(Q nuevo,Q nuevo_2);
        void set_next(Nodo<Q> *s);
        const Q get_data(void) const;
        const Q get_password(void) const;
        Nodo<Q> *get_next(void);

        void ShowAll(void) const;
        void ShowStep(void) const;
        int GetDato(Q Usuario, Q Password);
};

#endif // NODO_H
