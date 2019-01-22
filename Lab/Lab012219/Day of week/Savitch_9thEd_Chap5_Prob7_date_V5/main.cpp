/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 22, 2019, 10:07 AM
 * Purpose:   V5
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
int gtMnVal(int, int);
int dayOfWk(int, int, int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here

    //Input or initialize values Here

    //Process/Calculations Here
    for(int year = 2000; year <= 2004; year++){
        for(int month = 1; month <= 12; month++){
            for(int day = 1; day <= 31; day ++){
                cout << month << "/" << day << "/" << year << " Get Day of week = "
                        << dayOfWk(month, day, year) << endl;
            }
        }
    }

    //Output Located Here

    //Exit
    return 0;
}

int dayOfWk(int month, int day, int year){
    return (day + gtMnVal(month, year) + gtYrVal(year) + gtCntry(year)) % 7;
}

int gtMnVal(int month, int year){
    switch(month){
        case 1:
            return (isLpYr(year)? 6 : 0);
        case 2:
            return (isLpYr(year)? 2 : 3);
        case 3:
        case 11:
            return 3;
        case 4:
        case 7:
            return 6;
        case 5:
            return 1;
        case 6:
            return 4;
        case 8:
            return 2;
        case 9:
        case 12:
            return 5;
        default:
            return 0;
    }
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