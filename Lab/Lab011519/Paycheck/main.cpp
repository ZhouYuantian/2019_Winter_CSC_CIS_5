/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 8, 2019, 10:25 AM
 * Purpose:  Gross Paycheck
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
    //Declare Variables
    float hrsWrkd, payRate, payChk, ovrTime;
    
    //Initialize or input i.e. set variable values
    ovrTime=40;
    cout<<"This is a gross paycheck problem"<<endl;
    cout<<"Input hours worked and pay rate in $/s/hour"<<endl;
    cin>>hrsWrkd>>payRate;
    
    //Map inputs -> outputs
    payChk=hrsWrkd*payRate;
    payChk+=(hrsWrkd>ovrTime ? (hrsWrkd-ovrTime)*payRate/2 : 0);
    
    //Display the outputs
    cout<<"Hours Worked =  "<<hrsWrkd<<endl;
    cout<<"Pay Rate     = $"<<payRate<<"/hr"<<endl;
    cout<<"Overtime     @  "<<ovrTime<<" hrs"<<endl;
    cout<<"Paycheck     = $"<<payChk;

    //Exit stage right or left!
    return 0;
}