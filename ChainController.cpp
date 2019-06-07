/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ChainController.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:20 PM
 */

#include <iostream>
#include "ChainController.hpp"
#include "Info.hpp"
#include "ToLowerConcreteChainElement.hpp"
#include "ToUpperConcreteChainElement.hpp"
#include "XorCriptoConcreteChainElement.hpp"
#include "ReverseString.hpp"
#include "TranspositionCripto.hpp"
#include "ConverterChainElement.hpp"
#include "CharCounter.hpp"
#include "Menu.hpp"

using namespace std;

ChainController::ChainController(){
   chainUnits.clear();
   myData = NULL;
}

void ChainController::start(void){
      vector<string> opcoes({ "Exit", "Enter string for processing","Add processing elements" ,"Trigger processing chain" });
    Menu menu("Main Menu", opcoes);
    int escolha = -1;
    bool seString = 0;
    while(escolha){
        escolha = menu.getEscolha();

        switch(escolha){
            case 1: { string buffer;cout << "String ......: "; getline(cin, buffer);loadData(buffer);};seString =1; break;
            case 2: { createElements();  }; break;
            case 3: {
                if(!seString){
                    cout << "It is necessary to enter a string for processing, in option 1 of the menu" << endl;
                    break;
                }
                // verify if there is at least one element in the chain
                if (chainUnits.size() > 0)
                {
                    // prepare the chain, linking the elements
                    prepareChain();
                    // process all elements in the chain
                    processChain();
                }
                else
                {
                    // no elements in the chain
                    cout << "Nothing to do... empty chain!" << endl;
                };
            }; break;
        };
    };
};


void ChainController::loadData(string value){
   myData = make_shared<MyDataObject>(MyDataObject(value));
   }

void ChainController::createElements(){
vector<string> opcoes({  "Exit",
                           "Add ToLowerConcreteChainElement",
                           "Add ToUpperConcreteChainElement",
                           "Add XorCriptoConcreteChainElement",
                           "Add ConverterChainElement",
                           "Add ReverseChainElement",
                           "Add CountChainElement",
                           "Add TranspositionCriptoChainElement",
                           "Add Todos"
                          });

    Menu menu("Main Menu", opcoes);
    int escolha = -1;

    while(escolha)
    {
        escolha = menu.getEscolha();

        switch(escolha)
        {
            case 1: { chainUnits.push_back(make_shared<ToLowerConcreteChainElement>(ToLowerConcreteChainElement()));}break;
            case 2: { chainUnits.push_back(make_shared<ToUpperConcreteChainElement>(ToUpperConcreteChainElement()));}break;
            case 3: { chainUnits.push_back(make_shared<XorCriptoConcreteChainElement>(XorCriptoConcreteChainElement()));}break;
            case 4: { chainUnits.push_back(make_shared<ConverterChainElement>(ConverterChainElement()));}break;
            case 5: { chainUnits.push_back(make_shared<ReverseString>(ReverseString()));}break;
            case 6: { chainUnits.push_back(make_shared<CharCounter>(CharCounter()));}break;
            case 7: { chainUnits.push_back(make_shared<TranspositionCripto>(TranspositionCripto()));}break;
            case 8: {
                chainUnits.push_back(make_shared<ToLowerConcreteChainElement>(ToLowerConcreteChainElement()));
                chainUnits.push_back(make_shared<ToUpperConcreteChainElement>(ToUpperConcreteChainElement()));
                chainUnits.push_back(make_shared<XorCriptoConcreteChainElement>(XorCriptoConcreteChainElement()));
                chainUnits.push_back(make_shared<ConverterChainElement>(ConverterChainElement()));
                chainUnits.push_back(make_shared<ReverseString>(ReverseString()));
                chainUnits.push_back(make_shared<CharCounter>(CharCounter()));
                chainUnits.push_back(make_shared<TranspositionCripto>(TranspositionCripto()));
            }break;
        };
    };
  
   }

    

void ChainController::prepareChain()
   {
   if (chainUnits.size() > 1)
      {
      // set the chain
      for (int count = 0; count < (chainUnits.size() - 1); count++)
         {
         (chainUnits.at(count))->setNext(chainUnits.at(count + 1));
         }
      }
   }

void ChainController::processChain()
   {
   cout << "Initial value ...: " << myData->getValue() << endl << endl;
   (chainUnits.at(0))->doProcessing(myData);
   cout << "\nFinal value .....: " << myData->getValue() << endl;
   }
