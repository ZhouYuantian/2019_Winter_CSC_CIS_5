/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Jan 14th, 2018, 12:30 PM
 * Purpose:  Fibonacci Sequence with For Loop
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int fi,fim1,fim2;
    int loopCnt;//Number of times to loop
    
    //Input or initialize values Here
    fim2=0;//Sequence Starts at 0
    fim1=1;//Second value in sequence
    loopCnt=9;
    cout<<"Fibonacci Sequence"<<endl;
    cout<<fim2<<",";
    cout<<fim1;
    
    //Loop the sequence
    for(int loop=1;loop<=loopCnt;loop++){
        fi=fim1+fim2;
        cout<<","<<fi;
        fim2=fim1;
        fim1=fi;
    }
    
    //Exit
    return 0;
}