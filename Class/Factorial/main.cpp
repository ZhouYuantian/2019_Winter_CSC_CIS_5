/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Jan 10th, 2018, 10:40 AM
 * Purpose:  Factorial Sequence
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int fact,count;
    
    //Input or initialize values Here
    count=1;
    fact=1;//Sequence Starts at 0
    cout<<"Factorial Sequence"<<endl;
    cout<<fact<<",";
    
    //Second Value in the sequence
    count+=1;
    fact*=count;
    cout<<fact<<",";
    
    //Third Value in the sequence
    count+=1;
    fact*=count;
    cout<<fact<<",";
    
    //Fourth Value in the sequence
    count+=1;
    fact*=count;
    cout<<fact<<",";
    
    //Fifth Value in the sequence
    count+=1;
    fact*=count;
    cout<<fact<<",";
    
    //Sixth Value in the sequence
    count+=1;
    fact*=count;
    cout<<fact<<",";

    //Seventh Value in the sequence
    count+=1;
    fact*=count;
    cout<<fact<<",";
    
    //Eighth Value in the sequence
    count+=1;
    fact*=count;
    cout<<fact<<",";
    
    //Ninth Value in the sequence
    count+=1;
    fact*=count;
    cout<<fact<<",";

    //Tenth Value in the sequence
    count+=1;
    fact*=count;
    cout<<fact<<",";
    
    //Eleventh Value in the sequence
    count+=1;
    fact*=count;
    cout<<fact;
    
    //Exit
    return 0;
}