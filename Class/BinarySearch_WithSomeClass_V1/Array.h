/* 
 * File:   Array.h
 * Author: Dr. Mark E. Lehr
 * Created on February 5, 2019, 11:13 AM
 * Purpose:  Specification/Prototype for the Class Array
 */

#ifndef ARRAY_H
#define ARRAY_H

class Array{
    private:
        int size;  //Size of the Data Array
        int *data; //Data Array
    public:
        void setSize(int);
        void setData(int *);
        void setData(int,int);
        int  getData(int)const;
        int  getSize()const;
};


#endif /* ARRAY_H */
