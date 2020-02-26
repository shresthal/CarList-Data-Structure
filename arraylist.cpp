//
//  arraylist.cpp
//  Arraylist
//
//  Created by Luja Shrestha on 2/18/19.
//  Copyright © 2019 Luja Shrestha. All rights reserved.
//
/*
 * 
 * Luja shrestha
 * K687e787
 * program 2
 * 
 * Description of problem:
    This program is about Arraylist.
 *pseudo code:
    Data:
    * arr[30]
    * count
    
    
    Function
    * default constructor-all data is 0
    * add()
    * add()
    * del
    * search
    * sort
    * set

    Accessor Functions
    * get

 */
#include "arraylist.hpp"

Arraylist::Arraylist( )
{ count = 0;
    
}

void Arraylist::add(Car c1 )
{
    if (count < 30 )
        arr[count++]=c1;
    else
        std::cout<<" Add failed. No space in Arraylist. " << std::endl;
    
    
}

void Arraylist::add( Car c1, int index)
{
    if ( count < 30 && index <= count)
    {
        // shift elements to the right
        for ( int i = count - 1; i >= index; i--)
        {
            arr[i+1]= arr[i];
        }
        arr[index] = c1;
        count++;
    }
    else {
        cout << " Invalid index or ArrayList ids full.  " << endl;
    }
    
}
// return -1 for no found . 0/w return index.

int Arraylist::search (Car c1)
{
    for (int i = 0; i < count ; i++) {
        if ( c1.getid()== arr[i].getid() && c1.getmake() == arr[i].getmake() 
             && c1.getmodel() == arr[i].getmodel() && c1.getcategory() == arr[i].getcategory())
        {
            return i;
            
        }
        
    }
    return -1;
}
//pre-condition the index must be valid.
int Arraylist::get (int index)
{
    if (index >= 0 && index < count )
        return index;
    else
    {
        cout<< " Invalid index. "<< endl;
        return -99999;
        
    }
}

void Arraylist::del(int index)
{
    if (0 <= index && index < count)
    {
        for (int i = index; i <count-1; i++) {
            arr[i] = arr[i+1];
        }
        
        count--;
        
    }
    else
    {
        cout<< " Invalid index. "<< endl;
    }
}

void Arraylist::set( Car c1, int index )
{
    if (0 <= index && index < count)
    {
        arr[index] = c1;
        
    }
    
}

int Arraylist::size ( )
{
    return count;
    
}

void Arraylist::sort (int arr[], int size )
{

    for (int i=1; i<size; i++)
    {
        int key =arr[i];
        int j = i-1;
        for(  ;j >= 0 && arr[j] >= key ;j--)
        {
            arr[j+1]=arr[j];
            
        }
        arr[j+1]=key;
        
     } 
}

Car & Arraylist::operator[] (int index)
{
	if (index >= 30)
	{
		cout << " Array idex out of bound, exiting ";
		exit(0);
	}
	return arr[index];
}

