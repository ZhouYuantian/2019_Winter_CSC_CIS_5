/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 9th, 2019, 11:25 AM
 * Purpose:  Guessing Game
 */

//System Libraries Here
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number
#include <ctime>     //Time
#include <cmath>     //Math functions
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const unsigned short MXRAND=1000; //Max Random Number
    unsigned short number;            //Number randomly chosen to guess
    unsigned short guess;             //Our Guess
    unsigned char nmTries;            //Number of tries to guess
    
    //Input or initialize values Here
    nmTries=log(MXRAND)/log(2)+1;   //n=2^x  nmTries=log2(n)=x
    number=rand()%(MXRAND+1);       //[0,MXRAND]
    guess=-1;                       //Sentinel initialization
    cout<<"This is a guessing game"<<endl;
    cout<<"Guess the number from 0 to "<<MXRAND<<endl;
    cout<<"You have "<<static_cast<int>(nmTries)<<" guesses to find the number"<<endl;
    
    //Process/Calculations Here
    for(int nGuess=1;nGuess<=nmTries&&guess!=number;nGuess++){
        cout<<endl<<"Input Guess "<<nGuess<<" = ";
        cin>>guess;
        if(number>guess)cout<<endl<<"Guess is low";
        if(number<guess)cout<<endl<<"Guess is high";
    }
    
    //The random number set
    cout<<"The number randomly chosen = "<<number<<endl;

    //Exit
    return 0;
}