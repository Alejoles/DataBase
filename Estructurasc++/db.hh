#ifndef _db_hh
#define _db_hh

#include <vector>
#include <iostream>


class tupla {

private:
    std::vector<std::string> valores;
    std::vector<std::string> atributos;


public:

    tupla();
    void sett(int numero);
    void insertar(std::string, std::string);
    void gett(std::string deseado);
    void modificar(std::string, std::string);
};

tupla::tupla(){

}

//llamar dentro del constructor
tupla::sett(int numero){
    this->valores.reserve(numero);
    this->atributos.reserve(numero);
}

tupla::insertar(std::string par1, std::string par2){

}
arbolNode * left = nullptr;
        arbolNode * middle = nullptr;
        arbolNode * right = nullptr;
tupla::gett(std::string deseado){

}


#endif // _db_hh

//---------------------------------------

class tabla {
private:


public:
};


//-----------------------------------------


template<typename dataType>
class ArbolB{
private:
    struct arbolNode{
        std::vector<*arbolNode> vectordepunteros;
        bool isleaf;

    };

public:


};
