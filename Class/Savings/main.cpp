/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 16, 2019, 11:30 AM
 * Purpose:  Savings Function
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Power Function/Log Function/Exponential Function
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PERCENT=100.0f;//Percent conversion

//Function Prototypes
float save1(float,float,int);//Using Power Function
float save2(float,float,int);//Using Log and Exponential
float save3(float,float,int);//For-Loop
float save4(float,float,int);//Recursion
int   save5(float &,float,int);//Reference Parameter and Static Variable
float save6(float,float,int = 12);//Defaulted Parameter
float save4(float,float,float);//Using same function name/Overloading

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv,//Present Value in $'s
          iR;//Interest Rate in Decimal/compounding period
    int   n;//Compounding period    
    
    //Initialize or input i.e. set variable values
    pv=100;//100 dollars
    iR=6;//6 Percent
    n=12;//12 years
    
    //Map inputs -> outputs
    iR/=PERCENT;
    cout<<"Savings Function using pow         = $"<<save1(pv,iR,n)<<endl;
    cout<<"Savings Function using exp/log     = $"<<save2(pv,iR,n)<<endl;
    cout<<"Savings Function using for - loop  = $"<<save3(pv,iR,n)<<endl;
    cout<<"Savings Function using itself      = $"<<save4(pv,iR,n)<<endl;
    float pvs;
    for(int i=1;i<=4;i++){
        pvs=pv;
        save5(pvs,iR,n);
    }
    pvs=pv;
    int nClld=save5(pvs,iR,n);
    cout<<"Savings 5 using static variable and a reference parameter was called "
        <<nClld<<" times"<<endl;
    cout<<"Savings Function using reference   = $"<<pvs<<endl;
    cout<<"Savings Function using default     = $"<<save6(pv,iR)<<endl;
    cout<<"Savings Function using overloading = $"
            <<save4(pv,iR,static_cast<float>(n))<<endl;
    

    //Exit stage right or left!
    return 0;
}

float save4(float pv,float i,float n){
    if(n<=0)return pv;
    return save4(pv,i,n-1)*(1+i);
}

float save6(float pv,float i,int n){
    for(int nc=1;nc<=n;nc++){
        pv*=(1+i);
    }
    return pv;
}

int   save5(float &pv,float i,int n){
    static int count=0;
    for(int nc=1;nc<=n;nc++){
        pv*=(1+i);
    }
    return ++count;
}

float save4(float pv,float i,int n){
    if(n<=0)return pv;
    return save4(pv,i,n-1)*(1+i);
}

float save3(float pv,float i,int n){
    for(int nc=1;nc<=n;nc++){
        pv*=(1+i);
    }
    return pv;
}

float save2(float pv,float i,int n){
    return pv*exp(n*log(1+i));
}

float save1(float pv,float i,int n){
    return pv*pow((1+i),n);
}