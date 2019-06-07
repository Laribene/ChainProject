#ifndef CHAIN_TRANSPOSITIONCRIPTOCHAINELEMENT_H
#define CHAIN_TRANSPOSITIONCRIPTOCHAINELEMENT_H
#include "AbstractChainElement.hpp"
using namespace std;

class TranspositionCripto : public AbstractChainElement{
    private:
    const string name = "TranspositionCripto";
    bool key;
    void internalProcessing(shared_ptr<MyDataObject> value) override;
    void readParameters() override;

    public:
    TranspositionCripto();
    virtual ~TranspositionCripto();
    string getName() override;
};

#endif