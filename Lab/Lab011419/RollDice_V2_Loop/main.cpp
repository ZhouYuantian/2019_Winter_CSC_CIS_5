/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 14, 2019, 1:20 PM
 * Purpose:  Rolling Dice Loop
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
    char die1,die2,sum;//Dice values
    char min,max;//Min and Max Values
    unsigned int nThrws;//Number of Dice throws
    
    //Initialize or input i.e. set variable values
    sum=0;
    nThrws=100000;
    //min=max=(rand()%6+1+rand()%6+1);//[2-12];
    min=max=7;//[2-12];
    
    //Throw Dice
    for(int thrw=1;thrw<=nThrws;thrw++){
        die1=rand()%6+1;//[1-6]
        die2=rand()%6+1;//[1-6]
        sum=die1+die2;  //[2-12]
        if(max<sum)max=sum;
        if(min>sum)min=sum;
    }
    
    //Display the outputs
    cout<<"Number of throws of the dice = "<<nThrws<<endl;
    cout<<"Max sum of dice = "<<static_cast<int>(max)<<endl;
    cout<<"Min sum of dice = "<<static_cast<int>(min)<<endl;

    //Exit stage right or left!
    return 0;
}