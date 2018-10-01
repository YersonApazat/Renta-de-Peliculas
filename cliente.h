#ifndef CLIENTE_H
#define CLIENTE_H

template <class Q>
class cliente{
    private:
        Q *MiDato;
        Q *Mipassword;
        cliente *next;
    public:
        cliente(Q nuevo,Q password);
        cliente(void);
        ~cliente(void);
        void set_data(Q nuevo,Q nuevo_2);
        void set_next(cliente<Q> *s);
        const Q get_data(void) const;
        const Q get_password(void) const;
        cliente<Q> *get_next(void);

        void ShowAll(void) const;
        void ShowStep(void) const;
        int GetDato(Q Usuario, Q Password);
};

#endif // CLIENTE_H
