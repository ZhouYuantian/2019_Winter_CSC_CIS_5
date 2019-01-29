/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 29th, 2019, 10:06 AM
 * Purpose: Fill a file with a deck of cards
 *          Illustrate Parallel Arrays
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=3;//Face, Suit, and Card Value

//Function Prototypes
void suitFl1(char [][COLS],int);
void suitFl2(char [][COLS],int);
void faceFl(char [][COLS],int);
void valFl(char [][COLS],int);
void print(char [][COLS],int);
void write(char [],char [][COLS],int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int NCARDS=52;
    char sfv[NCARDS][COLS];
    char fileNm[]="card.dat";
    
    //Initialize or input i.e. set variable values
    suitFl1(sfv,NCARDS);
    faceFl(sfv,NCARDS);
    valFl(sfv,NCARDS);
    
    //Display the outputs
    print(sfv,NCARDS);
    
    //Write the cards to a file
    write(fileNm,sfv,NCARDS);

    //Exit stage right or left!
    return 0;
}

void write(char fn[],char sfv[][COLS],int n){
    //Declare the file
    ofstream out;
    //Open the file
    out.open(fn);
    //Output the Cards
    for(int i=0;i<n;i++){
        out<<sfv[i][1]<<sfv[i][0]<<static_cast<int>(sfv[i][2])<<endl;
    }
    //Close the file
    out.close();
}

void print(char sfv[][COLS],int n){
    for(int i=0;i<n;i++){
        cout<<sfv[i][1]<<sfv[i][0]
            <<" has a value of "<<static_cast<int>(sfv[i][2])<<endl;
    }
}

void suitFl1(char s[][COLS],int n){
    char suit[]={'S','D','C','H'};
    for(int i=0;i<n;i++){
        s[i][0]=suit[i/13];
    }
}

void suitFl2(char s[][COLS],int n){
    for(int i=0;i<n;i++){
        if(i<13)      s[i][0]='S';//Spade
        else if(i<26) s[i][0]='D';//Diamond
        else if(i<39) s[i][0]='C';//Club
        else          s[i][0]='H';//Heart
    }
}

void faceFl(char f[][COLS],int n){
    char face[]={'A','2','3','4','5','6','7',
                 '8','9','T','J','Q','K'};
    for(int i=0;i<n;i++){
        f[i][1]=face[i%13];
    }
}

void valFl(char v[][COLS],int n){
    for(int i=0;i<n;i++){
        int imod13=i%13+1;
        v[i][2]=imod13<11?imod13:10;//Value is 10 or less
    }
}