/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Jan 15th, 2018, 11:00 AM
 * Purpose:  Fibonacci Sequence growing Green Crud
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
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
    int days;   //Days between growth
    float wtCrud;//Weight of Crud in lbs
    
    //Input or initialize values Here
    fim2=1;//Sequence Starts at 0
    fim1=1;//Second value in sequence
    loopCnt=9;
    days=5;//5 days between growth cycle
    cout<<"Crud Growth Calculations follow Fibonacci Sequence"<<endl;
    cout<<"Input the initial weight of Crud in lbs"<<endl;
    cin>>wtCrud;
    cout<<"Day "<<setw(3)<<days<<" = "<<setw(5)<<fim2*wtCrud<<" lbs"<<endl;
    days+=5;
    cout<<"Day "<<setw(3)<<days<<" = "<<setw(5)<<fim1*wtCrud<<" lbs"<<endl;
    days+=5;
    
    //Loop the sequence
    for(int loop=1;loop<=loopCnt;loop++,days+=5){
        fi=fim1+fim2;
         cout<<"Day "<<setw(3)<<days<<" = "<<setw(5)<<fi*wtCrud<<" lbs"<<endl;
        fim2=fim1;
        fim1=fi;
    }
    
    //Exit
    return 0;
}