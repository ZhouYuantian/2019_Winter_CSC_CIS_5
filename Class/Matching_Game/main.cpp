/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 28, 2019, 11:00 AM
 * Purpose:  Matching Game
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void  init(int [],int);//Initialize the array
void  print(int [],int,int);//Print the array
void  shuffle(int [],int,int);//Shuffle the values
void  display(int [],bool [],int,int);//Display the Array


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    int test[SIZE];
    bool show[SIZE]={};
    int pos1,pos2;
    int correct=0;
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,10);
    
    //Shuffle the values
    shuffle(test,SIZE,7);
    
    //Display the outputs
    print(test,SIZE,10);
    
    //Display the correct Guesses
    display(test,show,SIZE,10);
    
    //Play the game until all matched
    do{
    
        //Ask user for 2 positions to display
        cout<<"Choose 2 positions to uncover"<<endl;
        cin>>pos1>>pos2;

        //Uncover those 2 positions
        show[pos1]=true;
        show[pos2]=true;
        correct++;
        display(test,show,SIZE,10);

        //If they are equal, keep them true
        if(test[pos1]!=test[pos2]){
            show[pos1]=false;
            show[pos2]=false;
            correct--;
        }

        //Display the correct Guesses
        display(test,show,SIZE,10);
    
    //End of loop
    }while(correct!=SIZE/2);

    //Exit stage right or left!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Display the Array
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void  display(int a[],bool show[],int n,int perLine){
    for(int i=0;i<n;i++){
        if(show[i])cout<<setw(3)<<a[i];
        else cout<<" * ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Shuffle the Array
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void  shuffle(int a[],int n ,int nShuf){
    for(int shuf=1;shuf<=nShuf;shuf++){
        for(int card=0;card<n;card++){
            int rnd=rand()%n;
            int temp=a[card];
            a[card]=a[rnd];
            a[rnd]=temp;
        }
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                               Print the Array
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void  print(int a[],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<setw(3)<<a[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Initialize the Array
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void init(int a[],int n){
    int nd2=n/2;
    for(int i=0;i<nd2;i++){
        a[i]=i;
    }
    for(int i=nd2;i<n;i++){
        a[i]=a[i-nd2];
    }
}