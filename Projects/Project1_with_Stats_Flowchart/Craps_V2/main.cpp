/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 5th, 2018  4:18 PM
 * Purpose:  The game of craps
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Srand/Rand
#include <ctime>     //Time
#include <iomanip>   //Format
#include <fstream>   //File I/O
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
float CNVPERC=100.0f;//Conversion to Percentage

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Setting the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    fstream in;
    int nGames,wins,losses,nThrows,mxThrGm,fGames;
    
    //Initialize variables
    nGames=1000000,wins=0,losses=0,nThrows=0,mxThrGm=0;
    
    //Open the file and read-in the number of games to
    //play from the file
    in.open("fGames.dat");
    while(in>>fGames);
    nGames=fGames<nGames?fGames:nGames;
    
    //Play Craps
    for(int game=1;game<=nGames;game++){
        //Throw a pair of die
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum1=die1+die2;
        unsigned short gmThrws=1;
        nThrows++;
        if(sum1==2||sum1==3||sum1==12)losses++;
        else if(sum1==7||sum1==11)wins++;
        else{
            bool stpGame=false;
            do{
                die1=rand()%6+1;//[1,6]
                die2=rand()%6+1;//[1,6]
                char sum2=die1+die2;
                nThrows++;gmThrws++;
                if(sum1==sum2){
                    wins++;
                    stpGame=true;
                }else if(sum2==7){
                    losses++;
                    stpGame=true;
                }
            }while(!stpGame);
        }
        if(gmThrws>mxThrGm)mxThrGm=gmThrws;
    }
    
    //Output the transformed data
    cout<<"Number of Games played = "<<nGames<<endl;
    cout<<"Number of Games played = "<<wins+losses<<endl;
    cout<<"Number of wins         = "<<wins<<endl;
    cout<<"Number of losses       = "<<losses<<endl;
    cout<<"Percentage wins        = "<<CNVPERC*wins/nGames<<"%"<<endl;
    cout<<"Percentage losses      = "<<CNVPERC*losses/nGames<<"%"<<endl;
    cout<<"Average Throws/Game    = "<<static_cast<float>(nThrows)/nGames<<endl;
    cout<<"Max Throws in a Game   = "<<mxThrGm<<endl;
    
    //Exit stage right!
    in.close();
    return 0;
}