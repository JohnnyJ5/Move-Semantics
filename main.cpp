/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: JohnnyJ
 *
 * Created on May 29, 2016, 4:40 PM
 */

#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include "MyString.h"

void Print(const std::vector<MyString> & vec)
{
    std::vector<MyString>::const_iterator it = vec.begin();
    for(; it != vec.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}

int main()
{
    std::vector<MyString> vec;
    MyString ms("First");
    vec.push_back(ms);
    std::cout << "Done with First\n" << std::endl;
    
    ms = "Second";  //With the Char Assignment Operator commented out.
                    //  1) Default Constructor char
                    //  2) Move Assignment operator
                    //  3) Destructor
                    // Reason:  ms type is MyString and to assign it to 
                    //          a literal string we need call the MyString(const char *)
                    //          constructor.  Since that object is an rvalue it will call
                    //          the move assignment operator.  Then that temp object needs
                    //          to be destroyed so the Destructor is called.
                    //With the Char Assignment Operator in it will just call that function
                        
    std::cout << "after rvalue" << std::endl;
    vec.push_back(std::move(ms));
    std::cout << "After move ms: " << ms << std::endl;
    Print(vec);
}

