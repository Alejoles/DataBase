#ifndef _arbolb_hh
#define _arbolb_hh

template<typename dataType>
class ArbolB{
private:
    struct arbolNode{
        arbolNode * left = nullptr;
        arbolNode * middle = nullptr;
        arbolNode * right = nullptr;
        std::vector<*arbolNode> vectordepunteros;
        bool isleaf;

    };

    arbolNode *root = nullptr;

public:
    int indice;

};


#endif // _arbolb_hh
