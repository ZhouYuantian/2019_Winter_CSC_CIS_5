/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 15th, 2019, 11:36 AM
 * Purpose:  Monty Hall/Price is Right Simulation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time library
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
    char prize, pick, open;
    
    //Initialize or input i.e. set variable values
    prize=rand()%3+1;//[1-3]
    pick=rand()%3+1; //[1-3]
    do{
        open=rand()%3+1;//[1-3]
    }while(open==prize||open==pick);
    
    //Display the outputs
    cout<<"Prize  Door = "<<static_cast<int>(prize)<<endl;
    cout<<"Picked Door = "<<static_cast<int>(pick)<<endl;
    cout<<"Open   Door = "<<static_cast<int>(open)<<endl;

    //Exit stage right or left!
    return 0;
}