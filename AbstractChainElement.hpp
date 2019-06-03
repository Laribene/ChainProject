/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbstractChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:09 PM
 */

#ifndef ABSTRACTCHAINELEMENT_HPP
#define ABSTRACTCHAINELEMENT_HPP

#include <string>
#include <memory>

#include "MyDataObject.hpp"
using namespace std;

class AbstractChainElement {
private:
    shared_ptr<AbstractChainElement> nextElement;
    virtual void internalProcessing(shared_ptr<MyDataObject>) = 0;
    virtual void readParameters();
    virtual void writeResults(shared_ptr<MyDataObject> value);
    
public:
    AbstractChainElement();
    virtual ~AbstractChainElement();
    virtual void setNext(shared_ptr<AbstractChainElement>);
    virtual shared_ptr<AbstractChainElement> getNext(void);
    
    virtual void doProcessing(shared_ptr<MyDataObject> value);
    virtual string getName(void) = 0;
};

#endif /* ABSTRACTCHAINELEMENT_HPP */

