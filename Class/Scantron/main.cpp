/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 29th, 2019, 10:06 AM
 * Purpose: Compare the answer sheet to the key
 *          and grade
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
void print(const string &);
void read(const char [],string &);
int  compare(const string &,const string &,string &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string key,answers,score;
    char fileKey[]="key.dat",fileAns[]="answer.dat";
    float pRight;
    
    //Initialize or input i.e. set variable values
    read(fileKey,key);
    read(fileAns,answers);
    
    //Score the exam
    pRight=compare(key,answers,score);
    
    //Display the outputs
    cout<<"Key     ";print(key);
    cout<<"Answers ";print(answers);
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<pRight/score.size()*100<<"%"<<endl;
    

    //Exit stage right or left!
    return 0;
}

int  compare(const string &key,const string &ans,string &scr){
    int correct=0;
    for(int i=0;i<key.size();i++){
        if(key[i]==ans[i]){
            scr+="C";
            correct++;
        }else scr+="W";
        
    }
    return correct;
}

void read(const char fn[],string &scan){
    //Declare the file
    ifstream in;
    //Open the file
    in.open(fn);
    //Output the Cards
    char answer;
    while(in>>answer){scan+=answer;}
    //Close the file
    in.close();
}

void print(const string &answers){
    for(int i=0;i<answers.size();i++){
        cout<<answers[i]<<" ";
    }
    cout<<endl;
}