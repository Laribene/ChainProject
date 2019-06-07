#include <cctype>
#include "ConverterChainElement.hpp"

ConverterChainElement::ConverterChainElement(){
	
	this->setNext(NULL);
}

ConverterChainElement::~ConverterChainElement(){
    this->setNext(NULL);
}

string ConverterChainElement::getName()
{
    return (this->name);
}

void ConverterChainElement::internalProcessing(shared_ptr<MyDataObject> value)
{
    string buffer = value->getValue();

    for(int count = 0; count < buffer.size(); count++) {
      buffer.at(count) = tolower(buffer.at(count));
    }  //transformando a string inteira em minusculo

    char c = ' ';  // usado para verificar espaços
    
    for(int count = 0; count < buffer.size(); count++)
    {
        if(count == 0) //primeira letra da strig transformada em maiuscula
            buffer.at(count) = toupper(buffer.at(count));
	
        else if (buffer.at(count) == c) { //se houver espaco, a proxima letra será maiuscula
            count ++;
            buffer.at(count) = toupper(buffer.at(count));
        }
            //guarda para comparação no prómixo laço
    }
    value->setValue(buffer);
}