//
//  Person.cpp
//  AssignmentOneP1
//
//  Created by J.S.Flynn on 19/04/2016.
//  Copyright © 2016 J.S.Flynn. All rights reserved.
//

#include "Person.hpp" // include Person
#include <iostream>  //include stanseded input/ output functions

using namespace std ; //sets the namespace to the standered namspace

//this function defines the printDetails function declared in the Person class
void Person::printDetails(){
    cout << "\n" << details << "\n\n" ; //prints the details stred in a Person object to the screen 
} ;
