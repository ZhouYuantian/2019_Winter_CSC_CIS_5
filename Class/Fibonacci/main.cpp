/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Jan 10th, 2018, 10:40 AM
 * Purpose:  Fibonacci Sequence
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
    int fi,fim1,fim2;
    
    //Input or initialize values Here
    fim2=0;//Sequence Starts at 0
    fim1=1;//Second value in sequence
    cout<<"Fibonacci Sequence"<<endl;
    cout<<fim2<<",";
    cout<<fim1<<",";
    
    //Third Value in the sequence
    fi=fim1+fim2;
    cout<<fi<<",";
    fim2=fim1;
    fim1=fi;
    
    //Fourth Value in the sequence
    fi=fim1+fim2;
    cout<<fi<<",";
    fim2=fim1;
    fim1=fi;
    
    //Fifth Value in the sequence
    fi=fim1+fim2;
    cout<<fi<<",";
    fim2=fim1;
    fim1=fi;
    
    //Sixth Value in the sequence
    fi=fim1+fim2;
    cout<<fi<<",";
    fim2=fim1;
    fim1=fi;

    //Seventh Value in the sequence
    fi=fim1+fim2;
    cout<<fi<<",";
    fim2=fim1;
    fim1=fi;
    
    //Eighth Value in the sequence
    fi=fim1+fim2;
    cout<<fi<<",";
    fim2=fim1;
    fim1=fi;
    
    //Ninth Value in the sequence
    fi=fim1+fim2;
    cout<<fi<<",";
    fim2=fim1;
    fim1=fi;

    //Tenth Value in the sequence
    fi=fim1+fim2;
    cout<<fi<<",";
    fim2=fim1;
    fim1=fi;
    
    //Eleventh Value in the sequence
    fi=fim1+fim2;
    cout<<fi;
    fim2=fim1;
    fim1=fi;
    
    //Exit
    return 0;
}