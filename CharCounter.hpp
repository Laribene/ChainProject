#ifndef CHARCOUNTER_HPP
#define CHARCOUNTER_HPP
using namespace std;
#include "AbstractChainElement.hpp"
#include <string>

class CharCounter :  public AbstractChainElement {
    private:
    const string name = "CharCounter";
    void writeResults(shared_ptr<MyDataObject> value) override;
    void internalProcessing(shared_ptr<MyDataObject> value) override;

    public:
    CharCounter();
    virtual ~CharCounter();
    string getName() override;
};

#endif