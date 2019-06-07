/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbstractChainElement.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:09 PM
 */

#include "AbstractChainElement.hpp"
#include <cstdlib>
#include <iostream>

using namespace std;

AbstractChainElement::AbstractChainElement()
   {
   nextElement = NULL;
   }

AbstractChainElement::~AbstractChainElement()
   {
   nextElement = NULL;
   }

void AbstractChainElement::setNext(shared_ptr<AbstractChainElement> next)
   {
   this->nextElement = next;
   }

shared_ptr<AbstractChainElement> AbstractChainElement::getNext()
   {
   return(this->nextElement);
   }

void AbstractChainElement::doProcessing(shared_ptr<MyDataObject> value)
   {
   if(value != NULL)
      {
      cout << "\t" << this->getName() << ":" << endl;
      
      this->readParameters();
      
      cout << "\t\tFrom ..: " << value->getValue() << endl;
      internalProcessing(value);
      cout << "\t\tTo ....: " << value->getValue() << endl;
      writeResults(value); //sera utilizado pelo CharCounter

      if(this->nextElement != NULL)
         {
         nextElement->doProcessing(value);
         }
      }
   }

void AbstractChainElement::readParameters()
{
// do nothing. May be overrided only if it was necessary.
}

void AbstractChainElement::writeResults(shared_ptr<MyDataObject> value) 
{
    // do nothing. May be overrided only if it was necessary.
}