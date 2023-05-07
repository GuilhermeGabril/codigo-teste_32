#ifndef ELEMENTO_H
#define ELEMENTO_H

class Elemento
{
    public:
        Elemento();
        virtual ~Elemento();
        Elemento(int _id, int _idade);
        int Obterid() const;

    protected:
    private:
        int id=0;
        int idade=0;

};

#endif // ELEMENTO_H

