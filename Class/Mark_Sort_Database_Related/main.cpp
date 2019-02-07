/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 30, 2019, 10:20 AM
 * Purpose:  Mark Sort
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int [],int);
void prntAry(int [],int,int);
void prntAry(int [],int [],int,int);
void markSrt(int [],int [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE],index[SIZE];
    
    //Initialize or input i.e. set variable values
    fillAry(array,index,SIZE);
    
    //Display the outputs
    cout<<"The Original Array"<<endl;
    prntAry(array,SIZE,10);
    cout<<"The Original Index Array"<<endl;
    prntAry(index,SIZE,10);
    cout<<"The Original Array Using the Original Indexed Array"<<endl;
    prntAry(array,index,SIZE,10);
    
    //Sorted List
    markSrt(array,index,SIZE);
    
    //Display the outputs
    cout<<"The Original Array after sorting"<<endl;
    prntAry(array,SIZE,10);
    cout<<"The Indexed Array after sorting"<<endl;
    prntAry(index,SIZE,10);
    cout<<"The Original Array with Sorted Indexed Array"<<endl;
    prntAry(array,index,SIZE,10);

    //Exit stage right or left!
    return 0;
}

void markSrt(int a[],int idx[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++){
            if(a[idx[j]]>a[idx[i]]){
                int temp=idx[i];
                idx[i]=idx[j];
                idx[j]=temp;
            }
        }
    }
}

void fillAry(int a[],int indx[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10-99]  Just 2 digit numbers
        indx[i]=i;
    }
}

void prntAry(int a[],int idx[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[idx[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}