/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyDataObject.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:00 PM
 */

#include "MyDataObject.hpp"

MyDataObject::MyDataObject(const string newValue)
   {
   this->myDataValue = newValue;
   }

MyDataObject::MyDataObject(const MyDataObject& orig)
   {
   this->myDataValue = orig.myDataValue;
   }

MyDataObject::~MyDataObject()
   {
   this->myDataValue = "";
   }

void MyDataObject::setValue(string newValue)
   {
   this->myDataValue = newValue;
   }

string MyDataObject::getValue()
   {
   return(myDataValue);
   }
