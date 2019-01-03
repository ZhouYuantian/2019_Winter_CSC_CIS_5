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
    unsigned short num1,//Variable range 0-2^16-1
                   num2,//Variable range 0-2^16-1
                 result;//Variable range 0-2^16-1
    
    //Initialize or input i.e. set variable values
    num1=20000;
    num2=30000;
    
    //Map inputs -> outputs
    result=num1+num2;
    
    //Display the outputs
    cout<<result<<" = "<<
            num1<<" + "<<
            num2<<endl;
    
    //Exit stage right or left!
    return 0;
}