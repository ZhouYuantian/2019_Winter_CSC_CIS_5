/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 30, 2019, 10:20 AM
 * Purpose:  Binary Search
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
void fillAry(int [],int);
void prntAry(int [],int,int);
void markSrt(int [],int);
bool binSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    val=50;
    fillAry(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    
    //Sorted List
    markSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}

bool binSrch(int a[],int n,int val,int &middle){
    int first=0,last=n-1;
    do{
        middle=(last+first)/2;
        if(a[middle]==val)return true;
        if(a[middle]<val) first = middle+1;
        else              last  = middle-1;
    }while(first<=last);
    return false;
}

void markSrt(int a[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++){
            if(a[j]>a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10-99]  Just 2 digit numbers
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}