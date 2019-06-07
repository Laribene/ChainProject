/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   toLowerConcreteChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:34 PM
 */

#ifndef TOLOWERCONCRETECHAINELEMENT_HPP
#define TOLOWERCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>
#include <memory>

using namespace std;
//Classe que deixa todos os elementos da string em letra minuscula
class ToLowerConcreteChainElement : public AbstractChainElement {
private:
    const string name = "ToLowerConcreteChainElement";
    void internalProcessing(shared_ptr<MyDataObject> value) override;

public:
    ToLowerConcreteChainElement();
    virtual ~ToLowerConcreteChainElement();
    string getName() override;
};

#endif /* TOLOWERCONCRETECHAINELEMENT_HPP */

