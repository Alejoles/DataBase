#ifndef _tabla_hh
#define _tabla_hh

#include "tupla.hh"
#include "arbolb.hh"



class Tabla {
private:
    std::string identificador;
    std::vector<Tupla::Tupla> table;
    int index;


public:
    Tabla(std::string);
    ~Tabla();

    // setters
    void insert(Tupla::Tupla);
    void delete(int);
    // getters
    Tupla::Tupla* find(int index);  //Puntero a una tupla, si no encuentra return nullptr
    std::string getname();
    int getIdx();
};

Tabla::Tabla(std::string nombre){
    this->identificador = nombre;
}

void Tabla::insert(Tupla::Tupla equis){
    this->table.append(equis);
}

int Tabla::getIdx(){
    return this->index;
}


#endif // _tabla_hh
