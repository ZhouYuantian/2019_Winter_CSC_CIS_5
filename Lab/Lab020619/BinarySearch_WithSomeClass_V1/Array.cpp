/* 
 * File:   Array.h
 * Author: Dr. Mark E. Lehr
 * Created on February 5, 2019, 11:13 AM
 * Purpose:  Implementation of the Class Array
 */

#include "Array.h"

void Array::setSize(int s){
    if(s>=2&&s<=1000)size=s;
    else size=1000;
}

void Array::setData(int *d){
    if(d!=0)data=d;
}

void Array::setData(int val,int indx){
    if(indx>=0&&indx<size)data[indx]=val;
}
        
int  Array::getData(int indx)const{
    if(indx>=0&&indx<size)return data[indx];
}
        
int  Array::getSize()const{
    return size;
}