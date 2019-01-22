/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 22, 2019, 10:07 AM
 * Purpose:  leap year
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool isLpYr(int year);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int count = 0, nYears = 2000;
    //Input or initialize values Here

    //Process/Calculations Here
    for(int year = 1601; year <= 2000; year++){
        cout << year << (isLpYr(year) ? " Leap Year" : " Not Leap Year") << endl;
        count += isLpYr(year) ? 1 : 0;
    }
    cout << "How many Leap Years = " << count << endl;
    cout << "Fraction is = " << 1.0f * count / 400 << endl;
    cout << "Very close to 0.2422 which is actual value"<< endl;
    //Output Located Here

    //Exit
    return 0;
}

bool isLpYr(int year){
    return (!(year % 400) || (!(year % 4) && (year % 100)));
}