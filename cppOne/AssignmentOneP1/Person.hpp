//
//  Person.hpp
//  AssignmentOneP1
//
//  Created by J.S.Flynn on 19/04/2016.
//  Copyright © 2016 J.S.Flynn. All rights reserved.
//  Student id : 201037312
//

//responcible for defining the Person header file
#ifndef Person_hpp
#define Person_hpp

#include <string> // includes the string functions

using namespace std ;

//declares class Person alonge with all functions of the class
class Person{
    
    string details ; //crets private variable for storing person details
    
    //defines every thing below as public
    public :
    
    //setter function to set the details of Person objects
    void setDetails(string d){
        details = d ;
    };
    
    void printDetails() ;// declaiers printDetails, defined in the Person.cpp
};

//this line below will check to see if the class has been loaded alreaady to a programe.
//if it has then it will quit loading the file. this will gaurd against redefanition of class 
#endif /* Person_hpp */

