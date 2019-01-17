/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 17, 2019, 12:26 PM
 * Purpose:  Retirement Calculator
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int PERCENT=100;//Percent Conversion

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float retSav,   //Retirement Savings $'s
         invRate,   //Investment Rate %
          salary,   //Salary $'s/yr
           pSave,   //%Salary saved/year
          savRet;   //Savings needed to retire $'s
    float intrst,   //Interest earned at the end of year
         deposit;   //Yearly Deposit $'s
            
    //Initialize or input i.e. set variable values
    retSav=0;
    invRate=5;
    salary=70000;
    pSave=10;
    savRet=salary/invRate*PERCENT;
    intrst=0;
    
    //Output initial conditions and heading
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Initial Retirement Savings    = $"<<setw(10)<<retSav<<endl;
    cout<<"Investment Rate / Muni Bond   =  "<<setw(10)<<invRate<<" %/yr"<<endl;
    cout<<"Salary with which to Retire   = $"<<setw(10)<<salary<<endl;
    cout<<"Salary to save for retirement =  "<<setw(10)<<pSave<<" %/yr"<<endl;
    cout<<"Savings required to retire    = $"<<setw(10)<<savRet<<endl;
    
    //Calculate Retirement Savings by year
    invRate/=PERCENT;
    pSave/=PERCENT;
    deposit=salary*pSave;
    cout<<endl<<"Years  Date    Savings  Interest   Deposit"<<endl;
    for(int year=0,date=2024;year<=50;year++,date++){
        intrst=retSav*invRate;
        cout<<setw(4)<<year
            <<setw(7)<<date
            <<setw(11)<<retSav
            <<setw(10)<<intrst
            <<setw(10)<<deposit<<endl;
        retSav+=(deposit+intrst);
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}