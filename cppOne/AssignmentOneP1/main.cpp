//
//  main.cpp
//  AssignmentOneP1
//
//  Created by J.S.Flynn on 18/04/2016.
//  Copyright © 2016 J.S.Flynn. All rights reserved.
//

#include <iostream> // imports input and output methods
#include <string> // imports string methods
#include "Person.hpp" // adds files for Person header to access Person

#define MAX 100 // sets max limit for numper of Person objects in the array

Person per[MAX] ; // creats an array of type Person
int i = 0 ; // initalises i to zero for help with navagating the array


using namespace std ; // sets the namespace to the standered namespace


//personInfo is responcible for getting the information from the user
//into the system.
void personInfo(){
    
    string inputDetails ; // sets a veriable to store details
    
    cout << "enter details \n" ; // sends massage to the user to enter the details
    
    getline(cin, inputDetails) ; // retrives the details from the user input
    
    per[i].setDetails(inputDetails) ; // sets the details to the first person in the array
    i++ ; // incraments the place in the array
}

//printList is responcible for printing out the people in the array
//the print list is limated to the number of people currently in the list rather
//than the whole array.
void printList(){
    for(int y = 0 ; y < i ; y++){
        per[y].printDetails() ; // makes a call to the Person class print function for person y
    }
}

//optionCheck is a simple function used to check what it is the user wishes to do.
void optionCheck(int inCheck){
    switch (inCheck){
        case 1 : personInfo() ; // makes a call to the personInfo function to get details
            break ;
        case 2 : printList() ; // makes a call the the printList function to print all members
            break ;
    }
}

// the main thread of the programme.
int main(int argc, const char * argv[]){
    
    int opChoose ; // creats a variable to store the value for what the user wants to do.
    string junk ; // creats a variable to gather any spurius input after the first
    
    //a loop that should continue presenting options until the user
    //selects the exit option
    do{
        
        system("clear") ;  // clears the system output window (does not work in xcode)
        cout << "Please Choose an Option \n" ; // print message to the output screen
    
        cout << "\n 1. Add entry \n 2. List all  \n 3. Quit \n\n" ; //prints options to the output screen
        
       cin >> opChoose ; //takes first intiger into opChoose
       getline(cin, junk) ; //takes any overspil input from the user
        
       //the loop will check the value of opChoose for validity
       while(opChoose != 1 && opChoose != 2 && opChoose != 3 ){
            cout << "please enter a valid option  \n" ; //prints massage to the screen to advice for proper input
            cin >> opChoose ; //gets a value for opChoose
            getline(cin, junk) ;//gets overspill of user input
        
        }
        optionCheck(opChoose) ;//sends the value of opChoose to the optionCheck function
        
    }while(opChoose != 3) ; // if the value of opChoose is 3 exit the loop and the programme
    
    return 0; //returns zero if the programme has exicuted succesfuly 
}
