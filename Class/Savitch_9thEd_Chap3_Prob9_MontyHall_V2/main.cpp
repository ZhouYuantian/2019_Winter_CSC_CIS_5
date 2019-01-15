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
#include <iomanip>   //Formatting Lbrary
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare outer loop variables
    int nStay,  //Number of times we win the prize if we stay
        nChange,//Number of times we win the prize if we change doors
        nPlyGm; //Number of times we play the game
    
    //Initialize the outer loop variables
    nPlyGm=1000000;
    nStay=nChange=0;
    
    for(int play=1;play<=nPlyGm;play++){
        //Declare Variables
        char prize, pick, open;

        //Initialize or input i.e. set variable values
        prize=rand()%3+1;//[1-3]  The door where prize is located
        pick=rand()%3+1; //[1-3]  The door I choose 
        do{
            open=rand()%3+1;//[1-3]  The door which was open to show no prize
        }while(open==prize||open==pick);
        
        //Win/lose
        if(prize==pick)nStay++;
        else nChange++;
    }
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Total Games Played = "<<setw(10)<<nPlyGm<<endl;
    cout<<"Wins when staying  = "<<setw(10)<<nStay<<endl;
    cout<<"Wins when changing = "<<setw(10)<<nChange<<endl;
    cout<<"Probability when staying  to win = "
            <<100.0f*nStay/nPlyGm<<"%"<<endl;
    cout<<"Probability when changing to win = "
            <<100.0f*nChange/nPlyGm<<"%"<<endl;

    //Exit stage right or left!
    return 0;
}