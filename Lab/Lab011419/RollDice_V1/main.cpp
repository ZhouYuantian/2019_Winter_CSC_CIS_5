/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 14, 2019, 1:20 PM
 * Purpose:  Rolling Dice
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Set function for Random Number Generator
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char die1,die2,sum;
    
    //Initialize or input i.e. set variable values
    sum=0;
    
    //Throw Dice
    die1=rand()%6+1;//[1-6]
    die2=rand()%6+1;//[1-6]
    sum=die1+die2;  //[2-12]
    
    //Display the outputs
    cout<<"Sum of "<<static_cast<int>(sum)<<" = "<<
            static_cast<int>(die1)<<" + "<<
            static_cast<int>(die2)<<endl;

    //Exit stage right or left!
    return 0;
}