/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   toLowerConcreteChainElement.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:34 PM
 */

#include <cctype>
#include "ToLowerConcreteChainElement.hpp"

ToLowerConcreteChainElement::ToLowerConcreteChainElement()
   {
   this->setNext(NULL);
   }

ToLowerConcreteChainElement::~ToLowerConcreteChainElement()
   {
   this->setNext(NULL);
   }

string ToLowerConcreteChainElement::getName()
   {
   return (this->name);
   }

void ToLowerConcreteChainElement::internalProcessing(shared_ptr<MyDataObject> value)
   {
   string buffer = value->getValue();
   
   for(int count = 0; count < buffer.size(); count++)
      {
      buffer.at(count) = tolower(buffer.at(count));
      }
   value->setValue(buffer);
   }
