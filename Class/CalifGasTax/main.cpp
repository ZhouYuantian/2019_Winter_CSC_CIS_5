/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 15th, 2019, 1:45 PM
 * Purpose: Gas Tax
 *          See -> 
 * https://www.nationalreview.com/exchequer/facts-about-gas-prices-and-oil-profits-kevin-d-williamson/
 * https://www.sandiegouniontribune.com/business/energy-green/sd-fi-california-gastax-20170413-story.html 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Libary
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int   PERCENT=100;   //Percentage calculation

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    float oilPrft,  //Oil Company Profit
          fedTax,   //Federal excise Tax
          stateTx,  //State excise Tax
          salesTx,  //California State Sales Tax on fuel
          pPrice,   //Price at the pump to consumer
          sPrice;   //Price to the gas station
    
    //Initialize or input i.e. set variable values
    oilPrft=0.0826f;//8.26 percent profit
    fedTax =0.184;  //18.4 cents per gallon or $0.184
    stateTx=0.473;  //47.3 cents per gallon or $0.473 
    salesTx=0.0425; //California sales tax on gas.
    pPrice =2.889;  //Pump price I paid Circle K/gallon $2.88 9/10
    
    //Map inputs -> outputs
    sPrice=(pPrice-fedTax-stateTx)/(1+salesTx);
    
    //Display the outputs
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<"Pump Price      = $"<<pPrice<<"/gallon"<<endl;
    cout<<"Fed   Ex Tax    = $"<<fedTax<<"/gallon"<<endl;
    cout<<"State Ex Tax    = $"<<stateTx<<"/gallon"<<endl;
    cout<<"State Sales Tax = $"<<sPrice*salesTx<<"/gallon"<<endl;
    cout<<"Station Price   = $"<<sPrice<<"/gallon"<<endl;
    cout<<"Oil Company Profit   = "<<oilPrft*PERCENT<<"%/gallon"<<endl;
    cout<<"Total Percentage Tax = "
            <<((pPrice-sPrice)/sPrice)*PERCENT<<"%/gallon"<<endl;
    
    //Exit stage right or left!
    return 0;
}