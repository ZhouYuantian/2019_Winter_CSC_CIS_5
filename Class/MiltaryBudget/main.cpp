/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 15th, 2019, 1:45 PM
 * Purpose:  Military Budget
 *          Data found by googling DOD budget and Federal Budget
 *          Class Survey shows all students believe military budget > 50%
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Libary
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float BILLION=1e9f;  //Billion  = 10^9
const float TRILION=1e12f; //Trillion = 10^12
const int   PERCENT=100;   //Percentage calculation

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    float milBdgt,//Military Budget
          fedBdgt,//Federal Budget
          perBdgt;//Percentage Budget
    
    //Initialize or input i.e. set variable values
    milBdgt=674.4f*BILLION;
    fedBdgt=4.4f*TRILION;
    
    //Map inputs -> outputs
    perBdgt=milBdgt/fedBdgt*PERCENT;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Total Federal Budget  = $"<<setw(6)<<fedBdgt/TRILION<<" Trillions"<<endl;
    cout<<"Total Military Budget = $"<<setw(6)<<milBdgt/BILLION<<" Billions"<<endl;
    cout<<"Miltary Budget = "<<perBdgt<<"% of Federal Budget"<<endl;

    //Exit stage right or left!
    return 0;
}