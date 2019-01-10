/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Jan 9, 2018, 1:50 PM
 * Purpose:  Math Tutor
 */

//System Libraries Here
#include <iostream>//I/O Library
#include <cstdlib> //Random Library
#include <iomanip> //Format Library
#include <ctime>
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
    unsigned short op1,op2,answer,test;
    
    //Input or initialize values Here
    op1=rand()%900+100;//3 digit number   [100-999]
    op2=rand()%999+1;  //1-3 digit number [1-999]
    
    //Process/Calculations Here
    answer=op1+op2;
    
    //Output Located Here
    cout<<setw(6)<<op1<<endl;
    cout<<"+"<<setw(5)<<op2<<endl;
    cout<<"------"<<endl;
    cout<<(answer<1000?"   ":"  ");
    cin>>test;
    cout<<endl<<(answer==test?"Correct Answer":"Incorect Answer")<<endl;

    //Exit
    return 0;
}

