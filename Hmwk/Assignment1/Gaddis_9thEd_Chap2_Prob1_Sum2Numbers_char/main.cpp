/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Solution to Sum of 2 numbers
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
    //Set the random number seed
    
    //Declare Variables
    unsigned char num1,num2,result;
    
    //Initialize or input i.e. set variable values
    num1=50;
    num2=100;
    
    //Map inputs -> outputs
    result=num1+num2;
    
    //Display the outputs
    cout<<static_cast<int>(result)<<" = "<<
            static_cast<int>(num1)<<" + "<<
            static_cast<int>(num2)<<endl;
    
    //Exit stage right or left!
    return 0;
}