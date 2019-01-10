/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 10, 2019, 12:46 PM
 * Purpose:  Menu example
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char wchProb;//Choose which problem

    //Initialize or input i.e. set variable values
    cout<<"Menu Program"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 1"<<endl;
    cout<<"Type 3 for problem 1"<<endl;
    cin>>wchProb;
    
    //Solve Problems
    switch(wchProb){
        case '1':{
                    cout<<"Place solution to problem 1 here"<<endl;
                    break;
               }
        case '2':{
                    cout<<"Place solution to problem 2 here"<<endl;
                    break;
               }
        case '3':{
                    cout<<"Place solution to problem 3 here"<<endl;
                    break;
               }
        default:    cout<<"Exiting Menu, no problem selected"<<endl;
    }

    //Exit stage right or left!
    return 0;
}