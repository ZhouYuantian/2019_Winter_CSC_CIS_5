/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 30, 2019, 10:20 AM
 * Purpose:  Mark Sort  Dynamic Arrays
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
int * fillAry(int);
void prntAry(int *,int,int);
void markSrt(int *,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=100;
    int *array;
    
    //Initialize or input i.e. set variable values
    array=fillAry(size);
    
    //Display the outputs
    prntAry(array,size,10);
    
    //Sorted List
    markSrt(array,size);
    
    //Display the outputs
    prntAry(array,size,10);

    //Exit stage right or left!
    delete []array;
    return 0;
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

int *fillAry(int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10-99]  Just 2 digit numbers
    }
    return a;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}