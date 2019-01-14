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
    unsigned int nThrws;//Number of Dice throws
    unsigned int f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12;//Frequency
    
    //Initialize or input i.e. set variable values
    sum=0;
    nThrws=36000;
    f2=f3=f4=f5=f6=f7=f8=f9=f10=f11=f12=0;
    
    //Throw Dice
    for(int thrw=1;thrw<=nThrws;thrw++){
        die1=rand()%6+1;//[1-6]
        die2=rand()%6+1;//[1-6]
        sum=die1+die2;  //[2-12]
        switch(sum){
            case  2:f2++;break;
            case  3:f3++;break;
            case  4:f4++;break;
            case  5:f5++;break;
            case  6:f6++;break;
            case  7:f7++;break;
            case  8:f8++;break;
            case  9:f9++;break;
            case 10:f10++;break;
            case 11:f11++;break;
            case 12:f12++;break;
            default: cout<<"Falls outside of range"<<endl;
        }
    }
    
    //Display the outputs
    cout<<"Number of throws of the dice = "<<nThrws<<endl;
    cout<<"Number of 2's thrown  = "<<f2<<endl;
    cout<<"Number of 3's thrown  = "<<f3<<endl;
    cout<<"Number of 4's thrown  = "<<f4<<endl;
    cout<<"Number of 5's thrown  = "<<f5<<endl;
    cout<<"Number of 6's thrown  = "<<f6<<endl;
    cout<<"Number of 7's thrown  = "<<f7<<endl;
    cout<<"Number of 8's thrown  = "<<f8<<endl;
    cout<<"Number of 9's thrown  = "<<f9<<endl;
    cout<<"Number of 10's thrown = "<<f10<<endl;
    cout<<"Number of 11's thrown = "<<f11<<endl;
    cout<<"Number of 12's thrown = "<<f12<<endl;
    cout<<"Number of throws of the dice = "<<
            f2+f3+f4+f5+f6+f7+f8+f9+f10+f11+f12<<endl;
    
    //Exit stage right or left!
    return 0;
}