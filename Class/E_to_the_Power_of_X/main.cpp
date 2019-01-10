/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Jan 10th, 2018, 10:40 AM
 * Purpose:  E^x Sequence
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
    int count;
    float etox,x,term;
    
    //Input or initialize values Here
    x=1;
    etox=1;
    count=0;
    term=1;
    cout<<"E^x Sequence"<<endl;
    cout<<etox<<endl;
    
    //Second Value in the sequence
    count+=1;
    term*=x/count;
    etox+=term;
    cout<<etox<<endl;
    
    //Third Value in the sequence
    count+=1;
    term*=x/count;
    etox+=term;
    cout<<etox<<endl;
    
    //Fourth Value in the sequence
    count+=1;
    term*=x/count;
    etox+=term;
    cout<<etox<<endl;
    
    //Fifth Value in the sequence
    count+=1;
    term*=x/count;
    etox+=term;
    cout<<etox<<endl;
    
    //Sixth Value in the sequence
    count+=1;
    term*=x/count;
    etox+=term;
    cout<<etox<<endl;

    //Seventh Value in the sequence
    count+=1;
    term*=x/count;
    etox+=term;
    cout<<etox<<endl;
    
    //Eighth Value in the sequence
    count+=1;
    term*=x/count;
    etox+=term;
    cout<<etox<<endl;
    
    //Ninth Value in the sequence
    count+=1;
    term*=x/count;
    etox+=term;
    cout<<etox<<endl;

    //Tenth Value in the sequence
    count+=1;
    term*=x/count;
    etox+=term;
    cout<<etox<<endl;
    
    //Eleventh Value in the sequence
    count+=1;
    term*=x/count;
    etox+=term;
    cout<<etox;
    
    //Exit
    return 0;
}