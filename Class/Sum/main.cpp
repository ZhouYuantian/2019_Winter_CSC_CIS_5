/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Jan 10th, 2018, 10:40 AM
 * Purpose:  Sum Sequence
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
    int sum,count;
    
    //Input or initialize values Here
    count=0;
    sum=0;//Sequence Starts at 0
    cout<<"Sum Sequence"<<endl;
    cout<<sum<<",";
    
    //Second Value in the sequence
    count+=1;
    sum+=count;
    cout<<sum<<",";
    
    //Third Value in the sequence
    count+=1;
    sum+=count;
    cout<<sum<<",";
    
    //Fourth Value in the sequence
    count+=1;
    sum+=count;
    cout<<sum<<",";
    
    //Fifth Value in the sequence
    count+=1;
    sum+=count;
    cout<<sum<<",";
    
    //Sixth Value in the sequence
    count+=1;
    sum+=count;
    cout<<sum<<",";

    //Seventh Value in the sequence
    count+=1;
    sum+=count;
    cout<<sum<<",";
    
    //Eighth Value in the sequence
    count+=1;
    sum+=count;
    cout<<sum<<",";
    
    //Ninth Value in the sequence
    count+=1;
    sum+=count;
    cout<<sum<<",";

    //Tenth Value in the sequence
    count+=1;
    sum+=count;
    cout<<sum<<",";
    
    //Eleventh Value in the sequence
    count+=1;
    sum+=count;
    cout<<sum;
    
    //Exit
    return 0;
}