#ifndef REVERSESTRING_HPP
#define REVERSESTRING_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;
//Classe que troca de posição todos os caracteres da string.
class ReverseString : public AbstractChainElement {

    private:
        const string name = "ReverseString";
        void internalProcessing(shared_ptr<MyDataObject> value) override;

    public:
        ReverseString();
        virtual ~ReverseString();
        string getName() override;
};

#endif