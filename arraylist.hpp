//
//  arraylist.hpp
//  Arraylist
//
//  Created by Luja Shrestha on 2/18/19.
//  Copyright © 2019 Luja Shrestha. All rights reserved.
//

#ifndef arraylist_hpp
#define arraylist_hpp


#include <iostream>
#include <stdio.h>
#include "car.hpp"
using namespace std;

class Arraylist
{
    
public:
    
    Arraylist( );
    void add( Car c1);
    void add( Car c1, int index);
    int search (Car c1);
    int get (int index);
    void del(int index);
    void set( Car c1, int index );
    int size ( );
    void sort (int arr[], int size );
    Car &operator[] (int index);
    
private:
    Car arr[30];
    int count;
    
    
    
};
#endif
