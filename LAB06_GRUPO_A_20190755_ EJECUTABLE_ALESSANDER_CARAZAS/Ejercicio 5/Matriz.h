#ifndef MATRIZ_H
#define MATRIZ_H


class Matriz
{
    public:
        Matriz(int);
        virtual ~Matriz();
        void llenarMa();
        void mostrarMa();
        void busc_bus();

    private:
        int busca;
        int M[3][3];
};

#endif // MATRIZ_H
