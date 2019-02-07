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
void fillAry(int [],int);
void prntAry(int [],int,int);
void swap(int &,int &);
void swapXOR(int &,int &);
void smllst(int [],int,int);
void markSrt(int [],int);
void markSr2(int [],int);
void copyAry(int [],int [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100000;
    int array[SIZE];
    int brray[SIZE];
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);
    copyAry(array,brray,SIZE);
    
    //Display the outputs
    //prntAry(array,SIZE,10);
    //prntAry(brray,SIZE,10);
    
    //Sorted List
    int beg1=time(0);
    markSrt(array,SIZE);
    int end1=time(0);
    int beg2=time(0);
    markSr2(brray,SIZE);
    int end2=time(0);
    
    //Display the results
    int t1=end1-beg1;
    int t2=end2-beg2;
    cout<<"Three function Mark Sort time = "<<t1<<" Secs"<<endl;
    cout<<"One   function Mark Sort time = "<<t2<<" Secs"<<endl;
    cout<<"Percentage Longer with more functions = "
            <<100.0f*(t1-t2)/t2<<"%"<<endl;
    //Display the outputs
    //prntAry(array,SIZE,10);
    //prntAry(brray,SIZE,10);

    //Exit stage right or left!
    return 0;
}

void copyAry(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}

void markSr2(int a[],int n){
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

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        smllst(a,n,i);
    }
}

void smllst(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swapXOR(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        //a[i]=rand()%90+10;//[10-99]  Just 2 digit numbers
        a[i]=rand();
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