/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 30, 2019, 10:20 AM
 * Purpose:  Binary Search with some Class
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(Array &);
void prntAry(const Array &,int);
void markSrt(Array &);
bool binSrch(const Array &,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    Array sArray;
    
    //Initialize or input i.e. set variable values
    sArray.setData(array);
    sArray.setSize(SIZE);
    val=99;
    fillAry(sArray);
    
    //Display the outputs
    prntAry(sArray,10);
    
    //Sorted List
    markSrt(sArray);
    
    //Display the outputs
    prntAry(sArray,10);
    if(binSrch(sArray,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;
    cout<<"The Array SIZE used = "<<sArray.getSize()<<endl;

    //Exit stage right or left!
    return 0;
}

bool binSrch(const Array &s,int val,int &middle){
    int first=0,last=s.getSize()-1;
    do{
        middle=(last+first)/2;
        if(s.getData(middle)==val)return true;
        if(s.getData(middle)<val) first = middle+1;
        else                      last  = middle-1;
    }while(first<=last);
    return false;
}

void markSrt(Array &s){
    for(int j=0;j<s.getSize()-1;j++){
        for(int i=j+1;i<s.getSize();i++){
            if(s.getData(j)>s.getData(i)){
                int temp=s.getData(i);
                s.setData(s.getData(j),i);
                s.setData(temp,j);
            }
        }
    }
}

void fillAry(Array &s){
    for(int i=0;i<s.getSize();i++){
        s.setData(rand()%90+10,i);//[10-99]  Just 2 digit numbers
    }
}

void prntAry(const Array &s,int perLine){
    cout<<endl;
    for(int i=0;i<s.getSize();i++){
        cout<<s.getData(i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}