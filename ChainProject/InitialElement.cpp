#include <cctype>
#include "InitialElement.hpp"

InitialElement::InitialElement()
{
    this->setNext(NULL);
}

InitialElement::~InitialElement()
{
    this->setNext(NULL);
}

string InitialElement::getName()
{
    return (this->name);
}

void InitialElement::internalProcessing(shared_ptr<MyDataObject> value)
{
    string buffer = value->getValue();

    //O char abaixo é iniciado com '*', para deixar a primeira letra da string maiscula
    //Isso é necessário devido a comparação ser feita, se o ultimo char guardado é um alfanúmerico
    char c = '*';

    for(int count = 0; count < buffer.size(); count++)
    {
        if(!isalnum(c) && isalpha(buffer.at(count))) //se o ultimo caracter não for alfa numerico e o caracter atual da itereção, ser uma letra, ele à coloca como letra maiuscula
            buffer.at(count) = toupper(buffer.at(count));

        c = buffer.at(count);//guarda para comparação no prómixo laço
    }
    value->setValue(buffer);
}