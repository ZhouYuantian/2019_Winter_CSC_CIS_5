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
#include <vector>    //Dynamic arrays from the STL
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void suitFl1(vector<char> &);
void suitFl2(vector<char> &);
void faceFl(vector<char> &);
void valFl(vector<char> &);
void print(vector<char> &,vector<char> &,vector<char> &);
void write(char [],vector<char> &,vector<char> &,vector<char> &);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int NCARDS=52;
    vector<char> suit(NCARDS),face(NCARDS),crdVal(NCARDS);
    char fileNm[]="card.dat";
    
    //Initialize or input i.e. set variable values
    suitFl1(suit);
    faceFl(face);
    valFl(crdVal);
    
    //Display the outputs
    print(suit,face,crdVal);
    
    //Write the cards to a file
    write(fileNm,suit,face,crdVal);

    //Exit stage right or left!
    return 0;
}

void write(char fn[],vector<char> &s,vector<char> &f,vector<char> &v){
    //Declare the file
    ofstream out;
    //Open the file
    out.open(fn);
    //Output the Cards
    for(int i=0;i<s.size();i++){
        out<<f[i]<<s[i]<<static_cast<int>(v[i])<<endl;
    }
    //Close the file
    out.close();
}

void print(vector<char> &s,vector<char> &f,vector<char> &v){
    for(int i=0;i<s.size();i++){
        cout<<f[i]<<s[i]
            <<" has a value of "<<static_cast<int>(v[i])<<endl;
    }
}

void suitFl1(vector<char> &s){
    char suit[]={'S','D','C','H'};
    for(int i=0;i<s.size();i++){
        s[i]=suit[i/13];
    }
}

void suitFl2(vector<char> &s){
    for(int i=0;i<s.size();i++){
        if(i<13)      s[i]='S';//Spade
        else if(i<26) s[i]='D';//Diamond
        else if(i<39) s[i]='C';//Club
        else          s[i]='H';//Heart
    }
}

void faceFl(vector<char> &f){
    char face[]={'A','2','3','4','5','6','7',
                 '8','9','T','J','Q','K'};
    for(int i=0;i<f.size();i++){
        f[i]=face[i%13];
    }
}

void valFl(vector<char> &v){
    for(int i=0;i<v.size();i++){
        int imod13=i%13+1;
        v[i]=imod13<11?imod13:10;//Value is 10 or less
    }
}