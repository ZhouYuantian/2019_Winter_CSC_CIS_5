/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 29th, 2019, 10:06 AM
 * Purpose: Fill a file with a deck of cards
 *          Illustrate No Arrays
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
char suitFl1(int);
char faceFl(int);
char valFl(int);
void print(int);
void write(char [],int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int NCARDS=52;
    char fileNm[]="card.dat";
    
    //Initialize or input i.e. set variable values
    
    //Display the outputs
    print(NCARDS);
    
    //Write the cards to a file
    write(fileNm,NCARDS);

    //Exit stage right or left!
    return 0;
}

void write(char fn[],int n){
    //Declare the file
    ofstream out;
    //Open the file
    out.open(fn);
    //Output the Cards
    for(int i=0;i<n;i++){
        out<<faceFl(i)<<suitFl1(i)<<static_cast<int>(valFl(i))<<endl;
    }
    //Close the file
    out.close();
}

void print(int n){
    for(int i=0;i<n;i++){
        cout<<faceFl(i)<<suitFl1(i)
            <<" has a value of "<<static_cast<int>(valFl(i))<<endl;
    }
}

char suitFl1(int i){
    char suit[]={'S','D','C','H'};
    return suit[i/13];
}

char faceFl(int i){
    char face[]={'A','2','3','4','5','6','7',
                 '8','9','T','J','Q','K'};
    return face[i%13];
}

char valFl(int i){
        int imod13=i%13+1;
        return imod13<11?imod13:10;//Value is 10 or less
}