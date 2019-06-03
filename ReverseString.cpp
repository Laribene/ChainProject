//#include <cctype>
#include <string>
#include <algorithm>
#include "ReverseString.hpp"

ReverseString::ReverseString()
   {
   this->setNext(NULL);
   }

ReverseString::~ReverseString()
   {
   this->setNext(NULL);
   }

string ReverseString::getName()
   {
   return (this->name);
   }

void ReverseString::internalProcessing(shared_ptr<MyDataObject> value)
   {
       string buffer = value->getValue();

       reverse(buffer.begin(), buffer.end());

       value->setValue(buffer);
   }