/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "Info.hpp"

using namespace std;

const string Info::institution = "Unicamp - Universidade Estadual de Campinas";
const string Info::dept = "FT - Faculdade de Tecnologia";
const string Info::author = "Prof. Dr. Andre F. de Angelis";
const string Info::date = "Jun/2016";
const string Info::sysName = "FT - Project Chain";
const string Info::sysVersion = "1.0";

const string Info::decoration = "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";

const string Info::getInstitution()
   {
   return (institution);
   };

const string Info::getDept()
   {
   return (dept);
   };

const string Info::getAuthor()
   {
   return (author);
   };

const string Info::getDate()
   {
   return (date);
   };

const string Info::getSysName()
   {
   return (sysName);
   }

const string Info::getSysVersion()
   {
   return(sysVersion);
   }

const void Info::wellcome()
   {
   cout << decoration;
   cout << Info::getSysName() << "\t Ver. " << Info::getSysVersion() << endl;
   cout << decoration;
   cout << Info::getInstitution() << "\n" << Info::getDept() << endl;
   cout << Info::getAuthor() << "\n" << Info::getDate() << endl;
   cout << decoration << endl;
   };

const void Info::goodbye()
   {
   cout << decoration;
   cout << Info::getSysName() << "\t Ver. " << Info::getSysVersion() << endl;
   cout << decoration;
   cout << "\n\n" << endl;
   };
