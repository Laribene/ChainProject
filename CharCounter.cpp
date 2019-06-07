#include <cctype>
#include "CharCounter.hpp"
#include <iostream>
using  namespace std;

CharCounter::CharCounter()
{
    this->setNext(NULL);
}

CharCounter::~CharCounter()
{
    this->setNext(NULL);
}

string CharCounter::getName()
{
    return (this->name);
}

void CharCounter::writeResults(shared_ptr<MyDataObject> value) {
    string buffer = value->getValue();

    //buffer.size() pega o tamanho da string
    cout << "\t\tTamanho da string: " << buffer.size() << endl;
}

void CharCounter::internalProcessing(shared_ptr<MyDataObject> value) {
}