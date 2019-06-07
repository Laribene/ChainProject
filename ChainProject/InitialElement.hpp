#ifndef INITIALELEMENT_HPP
#define INITIALELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>
/*
 Classe que transforma todas as iniciais de cada palavra em maiuscula
 */
using namespace std;

class InitialElement : public AbstractChainElement {
    private:
    const string name = "InitialElement";
    void internalProcessing(shared_ptr<MyDataObject> value) override;

    public:
    InitialElement();
    virtual ~InitialElement();
    string getName() override;
};

#endif 
