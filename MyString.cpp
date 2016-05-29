/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "MyString.h"
#include <utility>

MyString::MyString(const char * p)
    : str(p)
{
    std::cout << "Default Constructor char" << std::endl;
}

MyString::MyString(const std::string & s)
    : str(s)
{
    std::cout << "Default Constructor string" << std::endl;
}

MyString::MyString(const MyString & ms)
    : str(ms.str)
{
    std::cout << "Copy Constructor" << std::endl;
}

MyString & MyString::operator=(const MyString & ms)
{
    std::cout << "Assignment operator" << std::endl;
    if (this != &ms)
    {
        str = ms.str;
    }
    return *this;
}

MyString & MyString::operator=(const char * p)
{
    std::cout << "Assignment operator char" << std::endl;
    str = p;
    return *this;
}

MyString::~MyString()
{
    std::cout << "Destructor" << std::endl;
}

MyString::MyString(MyString&& ms)
    : str(std::move(ms.str))
{
    std::cout << "Move Constructor MyString" << std::endl;
}

MyString & MyString::operator=(MyString&& ms)
{
    std::cout << "Move Assignment operator" << std::endl;
    str = std::move(ms.str);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const MyString & ms)
{
    os << ms.str;
    return os;
}
        
        