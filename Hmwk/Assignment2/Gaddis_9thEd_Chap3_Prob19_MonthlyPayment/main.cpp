/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 7, 2019, 1:11 PM
 * Purpose:  Calculate the monthly payment
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVYRMN=12;//Conversion 12 months in a year
const float PERCENT=100;//Conversion to percentage
const float PENNIES=100;//Conversion to pennies
const float HALFPNY=0.005F;//Half a penny
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float monPymt,//Monthly Payment in $'s
          intRate,//Interest Rate per year
          loanAmt,//Loan amount in $'s
          totPaid,//Total amount paid in $'s
          intPaid;//Interest paid
    int   nMnths;//Number of months
    
    //Initialize or input i.e. set variable values
    cout<<"Loan calculator program"<<endl;
    cout<<"Input Loan Amount in $'s,"<<endl<<
          "Interest Rate in %/yr, "<<endl<<
          "and the number of Months to pay"<<endl;
    cin>>loanAmt>>intRate>>nMnths;
           
    //Map inputs -> outputs
    intRate/=CNVYRMN;//Convert to %/month
    intRate/=PERCENT;//Convert to decimal value per month
    float temp=pow(1+intRate,nMnths);//Utility Variable
    monPymt=intRate*temp*loanAmt/(temp-1);//Monthly payment
    int iPymt=(monPymt+HALFPNY)*PENNIES;//Convert Payment to Pennies
    monPymt=iPymt/PENNIES;//Converting back to Dollars
    totPaid=monPymt*nMnths;//Total amount paid back
    intPaid=totPaid-loanAmt;//Interest paid
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount      = $"<<setw(10)<<loanAmt<<endl;
    cout<<"Interest Rate    =  "<<setw(10)<<intRate*PERCENT<<"%/month"<<endl;
    cout<<"Number of months =  "<<setw(7)<<nMnths<<endl;
    cout<<"Monthly Payment  = $"<<setw(10)<<monPymt<<endl;
    cout<<"Total Payment    = $"<<setw(10)<<totPaid<<endl;
    cout<<"Interest Paid    = $"<<setw(10)<<intPaid<<endl;
    
    //Exit stage right or left!
    return 0;
}