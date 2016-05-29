/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyString.h
 * Author: JohnnyJ
 *
 * Created on May 29, 2016, 5:33 PM
 */

#ifndef MYSTRING_H
#define MYSTRING_H

#include <string>
#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

class MyString
{
public:
    MyString();                 //default constructor
    MyString(const char * p);
    MyString(const std::string &);
    MyString(const MyString &); //copy constructor
    MyString & operator=(const MyString &); //assignment operator
    MyString & operator=(const char * p);
    ~MyString();
    MyString(MyString&&);       //move constructor
    MyString & operator=(MyString&&);
    
    friend std::ostream & operator<<(std::ostream & os, const MyString & ms);
private:
    std::string str;
            
    
    
};

#ifdef __cplusplus
}
#endif

#endif /* MYSTRING_H */

