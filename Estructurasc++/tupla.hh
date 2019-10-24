#ifndef _tupla_hh
#define _tupla_hh

#include <vector>
#include <iostream>


class Tupla {

private:
    std::vector<std::string> valores;
    std::vector<std::string> atributos;


public:

    Tupla();
    Tupla(int);
    ~tupla();
    void insertar(std::string, std::string);
    std::string getv(int index);
    void modificar(std::string, std::string);  //maybe useless
};

Tupla::Tupla(int numero){
    this->valores.reserve(numero);
    this->atributos.reserve(numero);
}


void Tupla::insertar(std::string par1, std::string par2){
    bool isIn = true;
    for(unsigned i = 0; i < this->valores.length(); ++i){
        if(par1 == this->valores[i]){
            isIn = false;
            if(this->atributos[i] == ""){
                this->atributos[i] = par2;
            }else{
                std::string pal;#ifndef _arbolb_hh
                pal = "modified element " + this->atributos[i];
                this->atributos[i] = par2;
                pal += " for: " + this->atributos[i];
            }
        }
    }
    if(isIn){
        this->valores.push(par1);
        this->atributos.push(par2);
    }
}

std::string Tupla::getk(int index){
    return this->valores[index];
}

std::string Tupla::getv(int index){
    return this->atributos[index];

}


#endif // _tupla_hh
