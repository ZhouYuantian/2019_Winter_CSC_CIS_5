/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 30, 2019, 10:20 AM
 * Purpose:  Binary Search with a Structure
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
    sArray.data=array;
    sArray.size=SIZE;
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

    //Exit stage right or left!
    return 0;
}

bool binSrch(const Array &s,int val,int &middle){
    int first=0,last=s.size-1;
    do{
        middle=(last+first)/2;
        if(s.data[middle]==val)return true;
        if(s.data[middle]<val) first = middle+1;
        else                   last  = middle-1;
    }while(first<=last);
    return false;
}

void markSrt(Array &s){
    for(int j=0;j<s.size-1;j++){
        for(int i=j+1;i<s.size;i++){
            if(s.data[j]>s.data[i]){
                int temp=s.data[i];
                s.data[i]=s.data[j];
                s.data[j]=temp;
            }
        }
    }
}

void fillAry(Array &s){
    for(int i=0;i<s.size;i++){
        s.data[i]=rand()%90+10;//[10-99]  Just 2 digit numbers
    }
}

void prntAry(const Array &s,int perLine){
    cout<<endl;
    for(int i=0;i<s.size;i++){
        cout<<s.data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}