/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyDataObject.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:00 PM
 */

#ifndef MYDATAOBJECT_HPP
#define MYDATAOBJECT_HPP

#include <string>
using namespace std;

class MyDataObject {
private:
    string myDataValue;
public:
    MyDataObject(const string newValue);
    MyDataObject(const MyDataObject& orig);
    virtual ~MyDataObject();
    
    virtual void setValue(string newValue);
    virtual string getValue(void);
};

#endif /* MYDATAOBJECT_HPP */

