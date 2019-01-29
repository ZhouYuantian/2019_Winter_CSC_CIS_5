/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 29th, 2019, 10:06 AM
 * Purpose: Deal A Hand
 *          Illustrate No Arrays
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <cstdlib>   //Setting Random Number seed
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void deal(char [],char &,char &,char &,char &);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int NCARDS=52;
    char fileNm[]="card.dat";
    char cNum1,f1,s1,v1,
         cNum2,f2,s2,v2,
         cNum3,f3,s3,v3,
         cNum4,f4,s4,v4,
         cNum5,f5,s5,v5;
    
    //Initialize or input i.e. set variable values
    deal(fileNm,cNum1,f1,s1,v1);
    do{
        deal(fileNm,cNum2,f2,s2,v2);
    }while(cNum1==cNum2);
    do{
        deal(fileNm,cNum3,f3,s3,v3);
    }while(cNum1==cNum3||cNum2==cNum3);
    do{
        deal(fileNm,cNum4,f4,s4,v4);
    }while(cNum1==cNum4||cNum2==cNum4||cNum3==cNum4);
    do{
        deal(fileNm,cNum5,f5,s5,v5);
    }while(cNum1==cNum5||cNum2==cNum5||cNum3==cNum5||cNum4==cNum5);
    
    //Display the outputs
    cout<<"Card "<<setw(2)<<static_cast<int>(cNum1)<<"->"
            <<f1<<s1<<" with a value of "
            <<setw(2)<<static_cast<int>(v1)<<endl;
    cout<<"Card "<<setw(2)<<static_cast<int>(cNum2)<<"->"
            <<f2<<s2<<" with a value of "
            <<setw(2)<<static_cast<int>(v2)<<endl;
    cout<<"Card "<<setw(2)<<static_cast<int>(cNum3)<<"->"
            <<f3<<s3<<" with a value of "
            <<setw(2)<<static_cast<int>(v3)<<endl;
    cout<<"Card "<<setw(2)<<static_cast<int>(cNum4)<<"->"
            <<f4<<s4<<" with a value of "
            <<setw(2)<<static_cast<int>(v4)<<endl;
    cout<<"Card "<<setw(2)<<static_cast<int>(cNum5)<<"->"
            <<f5<<s5<<" with a value of "
            <<setw(2)<<static_cast<int>(v5)<<endl;
    
    //Write the cards to a file

    //Exit stage right or left!
    return 0;
}

void deal(char fn[],char &num,char &fv,char &sv,char &cv){
    //Declare the file
    ifstream in;
    //Open the file
    in.open(fn);
    //Output the Cards
    num=rand()%52+1;
    int crdVal;
    for(int crd=1;crd<=num;crd++){
        in>>fv>>sv>>crdVal;
    }
    cv=crdVal;
    //Close the file
    in.close();
}
