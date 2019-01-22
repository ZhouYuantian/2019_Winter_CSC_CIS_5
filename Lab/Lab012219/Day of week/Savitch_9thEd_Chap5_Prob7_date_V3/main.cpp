/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 22, 2019, 10:07 AM
 * Purpose:   V2 get century
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool isLpYr(int);
int gtCntry(int);
int gtYrVal(int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here

    //Input or initialize values Here

    //Process/Calculations Here
    for(int year = 1905; year <= 2019; year++){
        cout << year << " gives get year value = " << gtYrVal(year) << endl;
    }

    //Output Located Here

    //Exit
    return 0;
}

int gtYrVal(int year){
    return (year % 100) + (year % 100)/4;
}

int gtCntry(int year){
    return 2 * (3 - ((year / 100) % 4));
}

bool isLpYr(int year){
    return (!(year % 400) || (!(year % 4) && (year % 100)));
}