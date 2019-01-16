/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 15, 2019, 8:00 PM
 * Purpose:  Sort 3 names
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    string name1,name2,name3;
    
    //Input the data
    cout<<"Read 3 names"<<endl;
    cin>>name1;
    cin>>name2;
    cin>>name3;
    
    //Output the sorted names
    cout<<endl;
    if(name1<name2&&name2<name3){
        cout<<name1<<endl;
        cout<<name2<<endl;
        cout<<name3<<endl;
    }else if(name1<name3&&name3<name2){
        cout<<name1<<endl;
        cout<<name3<<endl;
        cout<<name2<<endl;
    }else if(name2<name1&&name1<name3){
        cout<<name2<<endl;
        cout<<name1<<endl;
        cout<<name3<<endl;
    }else if(name2<name3&&name3<name1){
        cout<<name2<<endl;
        cout<<name3<<endl;
        cout<<name1<<endl;
    }else if(name3<name1&&name1<name2){
        cout<<name3<<endl;
        cout<<name1<<endl;
        cout<<name2<<endl;
    }else{
        cout<<name3<<endl;
        cout<<name2<<endl;
        cout<<name1<<endl;
    }
    
    //Exit stage right!
    return 0;
}