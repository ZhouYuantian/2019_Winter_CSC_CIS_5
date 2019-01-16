/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 15, 2019, 8:00 PM
 * Purpose:  Sort 3 names
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=15;
    char name1[SIZE],name2[SIZE],name3[SIZE];
    unsigned short time1,time2,time3;
    
    //Input the data
    cout<<"Read 3 names and 3 times associated the race"<<endl;
    cin>>name1>>time1;
    cin>>name2>>time2;
    cin>>name3>>time3;
    
    //Sort Times
    if(time1<time2&&time2<time3){
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
    }else if(time1<time3&&time3<time2){
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
    }else if(time2<time1&&time1<time3){
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
    }else if(time2<time3&&time3<time1){
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
    }else if(time3<time1&&time1<time2){
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
    }else{
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;    
    }
    
    //Exit stage right!
    return 0;
}