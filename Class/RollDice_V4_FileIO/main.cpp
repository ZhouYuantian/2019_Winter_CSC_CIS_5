/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 16, 2019, 12:55 PM
 * Purpose:  Craps
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Set function for Random Number Generator
#include <ctime>     //Time Library
#include <fstream>   //File stream Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PERCENT=100.0f;//Percentage conversion

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    ifstream in; //Input file
    ofstream out;//Output file
    char die1,die2,sum;//Dice values
    unsigned int nGames;//Number of Games
    int wins,losses;
    
    //Initialize or input i.e. set variable values
    nGames=36000;
    wins=losses=sum=0;
    in.open("nThrows.dat");
    out.open("stat.dat");
    
    //Throw Dice
    in>>nGames;
    for(int game=1;game<=nGames;game++){
        die1=rand()%6+1;//[1-6]
        die2=rand()%6+1;//[1-6]
        sum=die1+die2;  //[2-12]
        switch(sum){
            case  2:
            case  3:
            case 12:losses++;break;
            case  7:
            case 11:wins++;break;
            default:{
                bool kpRoln=true;
                do{
                    die1=rand()%6+1;//[1-6]
                    die2=rand()%6+1;//[1-6]
                    char nwsum=die1+die2;  //[2-12]
                    if(nwsum==7){
                        losses++;
                        kpRoln=false;
                    }else if(sum==nwsum){
                        wins++;
                        kpRoln=false;
                    }
                }while(kpRoln);
            }
        }
    }
    
    //Display the outputs
    cout<<"Number of games   = "<<nGames<<endl;
    cout<<"Number of wins    = "<<wins<<endl;
    cout<<"Number of losses  = "<<losses<<endl;
    cout<<"Number of games   = "<<wins+losses<<endl;
    cout<<"Percentage wins   = "<<PERCENT*wins/nGames<<"%"<<endl;
    cout<<"Percentage losses = "<<PERCENT*losses/nGames<<"%"<<endl;
    
    //Exit stage right or left!
    in.close();
    out.close();
    return 0;
}