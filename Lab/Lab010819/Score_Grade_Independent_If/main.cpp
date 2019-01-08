/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 8th, 2019, 12:30 PM
 * Purpose:  Input Score, Get a Grade
 *           Independent-if
 */

//System Libraries Here
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    char score,//Test/Hmwk Value between [0,100]
         grade;//Grade A,B,C,D,or F
    
    //Input or initialize values Here
    score=rand()%51+50;//[50,100]
    
    //Process/Calculations Here
    if(score<60)           grade='F';
    if(score<70&&score>=60)grade='D';
    if(score<80&&score>=70)grade='C';
    if(score<90&&score>=80)grade='B';
    if(score>=90)          grade='A';
    
    //Output Located Here
    cout<<"Score = "<<static_cast<int>(score)<<endl;
    cout<<"Grade = "<<grade<<endl;

    //Exit
    return 0;
}