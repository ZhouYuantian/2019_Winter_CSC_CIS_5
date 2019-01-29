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
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void suitFl1(string &,int);
void suitFl2(string &,int);
void faceFl(string  &,int);
void valFl(string &,int);
void print(const string &,const string &,const string &);
void write(const char [],const string &,const string &,const string &);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int NCARDS=52;
    string suit,face,crdVal;
    char fileNm[]="card.dat";
    
    //Initialize or input i.e. set variable values
    suitFl1(suit,NCARDS);
    faceFl(face,NCARDS);
    valFl(crdVal,NCARDS);
    
    //Display the outputs
    print(suit,face,crdVal);
    
    //Write the cards to a file
    write(fileNm,suit,face,crdVal);

    //Exit stage right or left!
    return 0;
}

void write(const char fn[],const string &s,const string &f,const string &v){
    //Declare the file
    ofstream out;
    //Open the file
    out.open(fn);
    //Output the Cards
    for(int i=0;i<f.size();i++){
        out<<f[i]<<s[i]<<static_cast<int>(v[i])<<endl;
    }
    //Close the file
    out.close();
}

void print(const string &s,const string &f,const string &v){
    for(int i=0;i<s.size();i++){
        cout<<f[i]<<s[i]
            <<" has a value of "<<static_cast<int>(v[i])<<endl;
    }
}

void suitFl1(string &s,int n){
    char suit[]={'S','D','C','H'};
    for(int i=0;i<n;i++){
        s+=suit[i/13];
    }
}

void suitFl2(string &s,int n){
    for(int i=0;i<n;i++){
        if(i<13)      s+='S';//Spade
        else if(i<26) s+='D';//Diamond
        else if(i<39) s+='C';//Club
        else          s+='H';//Heart
    }
}

void faceFl(string &f,int n){
    char face[]={'A','2','3','4','5','6','7',
                 '8','9','T','J','Q','K'};
    for(int i=0;i<n;i++){
        f+=face[i%13];
    }
}

void valFl(string &v,int n){
    for(int i=0;i<n;i++){
        int imod13=i%13+1;
        v+=static_cast<char>(imod13<11?imod13:10);//Value is 10 or less
    }
}