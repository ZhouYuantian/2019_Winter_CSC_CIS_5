/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Jan 10th, 2018, 10:40 AM
 * Purpose:  PI Sequence
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
    float pi,sign;
    
    //Input or initialize values Here
    count=1;
    sign=4;
    pi=4;//Sequence Starts at 0
    cout<<"Pi Sequence"<<endl;
    cout<<pi<<","<<endl;
    
    //Second Value in the sequence
    sign*=-1;
    count+=2;
    pi+=(sign/count);
    cout<<pi<<","<<endl;
    
    //Third Value in the sequence
    sign*=-1;
    count+=2;
    pi+=(sign/count);
    cout<<pi<<","<<endl;
    
    //Fourth Value in the sequence
    sign*=-1;
    count+=2;
    pi+=(sign/count);
    cout<<pi<<","<<endl;
    
    //Fifth Value in the sequence
    sign*=-1;
    count+=2;
    pi+=(sign/count);
    cout<<pi<<","<<endl;
    
    //Sixth Value in the sequence
    sign*=-1;
    count+=2;
    pi+=(sign/count);
    cout<<pi<<","<<endl;

    //Seventh Value in the sequence
    sign*=-1;
    count+=2;
    pi+=(sign/count);
    cout<<pi<<","<<endl;
    
    //Eighth Value in the sequence
    sign*=-1;
    count+=2;
    pi+=(sign/count);
    cout<<pi<<","<<endl;
    
    //Ninth Value in the sequence
    sign*=-1;
    count+=2;
    pi+=(sign/count);
    cout<<pi<<","<<endl;

    //Tenth Value in the sequence
    sign*=-1;
    count+=2;
    pi+=(sign/count);
    cout<<pi<<","<<endl;
    
    //Eleventh Value in the sequence
    sign*=-1;
    count+=2;
    pi+=(sign/count);
    cout<<pi;
    
    //Exit
    return 0;
}