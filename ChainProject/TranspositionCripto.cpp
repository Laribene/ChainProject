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
    int deslocamento; //Criamos essa variavel para saber se o deslocamento é positivo ou negativo.

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

void TranspositionCripto::readParameters() { //O readParameters serve para saber se o usuario quer o deslocamento positivo ou negativo.

    string buffer;
    cout << "Qual o deslocamento?" << endl;
    cout << "0 -> False" << endl;
    cout << "1 -> True" << endl;
    getline(cin, buffer);
    
   if(buffer == "1"){       //Se o usuario digitar 1, o deslocamento sera positivo, se digitar 0 o deslocamento sera negativo,
        key = true;         //Se digitar qualquer outra coisa dara valor invalido e ele voltara para a tela de escolha de deslocamento.
   }
    else if(buffer == "0"){
        key = false;
    }
    else{
        cout << "Valor invalido, digite novamente" << endl;
        TranspositionCripto::readParameters();
    }

}
