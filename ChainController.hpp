/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ChainController.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:20 PM
 */

#ifndef CHAINCONTROLLER_HPP
#define CHAINCONTROLLER_HPP

#include "AbstractChainElement.hpp"
#include "MyDataObject.hpp"
#include <vector>
#include <memory>

using namespace std;

class ChainController {
private:
    vector<shared_ptr<AbstractChainElement>> chainUnits; //use SmartPointers
    shared_ptr<MyDataObject>  myData; //use SmartPointers
public:
    ChainController();
    void start();
    void loadData(string);

    void processChain();

    void prepareChain();

    void createElements();

};

#endif /* CHAINCONTROLLER_HPP */

