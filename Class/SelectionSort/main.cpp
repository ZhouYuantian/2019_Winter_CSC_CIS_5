/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 30, 2019, 10:20 AM
 * Purpose:  Bubble Sort
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
void selcSrt(int [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    
    //Sorted List
    selcSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);

    //Exit stage right or left!
    return 0;
}

void selcSrt(int a[],int n){
    for(int j=0;j<n-1;j++){
        int max=a[j];
        int indx=j;
        //Find max in the list
        for(int i=j+1;i<n;i++){
            if(a[i]<max){
                max=a[i];
                indx=i; 
            }
        }
        //Swap with max
        int temp=a[j];
        a[j]=a[indx];
        a[indx]=temp;
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