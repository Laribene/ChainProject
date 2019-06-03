#include "TranspositionCripto.hpp"
#include <cctype>
#include <iostream>

using namespace std;

TranspositionCripto::TranspositionCripto()
{
    this->setNext(NULL);
}

TranspositionCripto::~TranspositionCripto()
{
    this->setNext(NULL);
}

string TranspositionCripto::getName()
{
    return (this->name);
}

void TranspositionCripto::internalProcessing(shared_ptr<MyDataObject> value) {
    string buffer = value->getValue();
    int deslocamento;

    if (key) {
        deslocamento = 1;
    }else {
        deslocamento = -1;
    }

    for(int count = 0; count < buffer.size(); count++) {
        buffer.at(count) = buffer.at(count) + deslocamento;
    }
    value->setValue(buffer);
}

void TranspositionCripto::readParameters() {

    string buffer;
    bool isTrue;
    cout << "Qual o deslocamento?" << endl;
    cout << "0 -> False" << endl;
    cout << "1 -> True" << endl;
    cin >> isTrue;

    if (isTrue) {
        key = true;
    }
    else {
        key = false;
    }   
}
