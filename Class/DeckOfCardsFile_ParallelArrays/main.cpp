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

//Function Prototypes
void suitFl1(char [],int);
void suitFl2(char [],int);
void faceFl(char [],int);
void valFl(char [],int);
void print(char [],char [],char [],int);
void write(char [],char [],char [],char [],int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int NCARDS=52;
    char suit[NCARDS],face[NCARDS],crdVal[NCARDS];
    char fileNm[]="card.dat";
    
    //Initialize or input i.e. set variable values
    suitFl1(suit,NCARDS);
    faceFl(face,NCARDS);
    valFl(crdVal,NCARDS);
    
    //Display the outputs
    print(suit,face,crdVal,NCARDS);
    
    //Write the cards to a file
    write(fileNm,suit,face,crdVal,NCARDS);

    //Exit stage right or left!
    return 0;
}

void write(char fn[],char s[],char f[],char v[],int n){
    //Declare the file
    ofstream out;
    //Open the file
    out.open(fn);
    //Output the Cards
    for(int i=0;i<n;i++){
        out<<f[i]<<s[i]<<static_cast<int>(v[i])<<endl;
    }
    //Close the file
    out.close();
}

void print(char s[],char f[],char v[],int n){
    for(int i=0;i<n;i++){
        cout<<f[i]<<s[i]
            <<" has a value of "<<static_cast<int>(v[i])<<endl;
    }
}

void suitFl1(char s[],int n){
    char suit[]={'S','D','C','H'};
    for(int i=0;i<n;i++){
        s[i]=suit[i/13];
    }
}

void suitFl2(char s[],int n){
    for(int i=0;i<n;i++){
        if(i<13)      s[i]='S';//Spade
        else if(i<26) s[i]='D';//Diamond
        else if(i<39) s[i]='C';//Club
        else          s[i]='H';//Heart
    }
}

void faceFl(char f[],int n){
    char face[]={'A','2','3','4','5','6','7',
                 '8','9','T','J','Q','K'};
    for(int i=0;i<n;i++){
        f[i]=face[i%13];
    }
}

void valFl(char v[],int n){
    for(int i=0;i<n;i++){
        int imod13=i%13+1;
        v[i]=imod13<11?imod13:10;//Value is 10 or less
    }
}