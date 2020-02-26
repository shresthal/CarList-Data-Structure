//
//  car.hpp
//  Arraylist
//
//  Created by Luja Shrestha on 2/18/19.
//  Copyright © 2019 Luja Shrestha. All rights reserved.
//

/* 
 * Luja shrestha
 * K687e787
 * program 2
 * 
 * Description of problem:
    This program is about class car.which can get value id,
     make, model and category and set them.
 *pseudo code:
    Data:
    * id 
    * make
    * model
    * category
    
    Function
    * default constructor-all data is 0
    * construtor- accept for all data
    * setid
    * setmake
    * setmodel
    * setcategory


    Accessor Functions
    * getid 
    * getmake
    * getmodel
    * getcategory
    

 */


#ifndef car_hpp
#define car_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Car
{
private:
    int id;
    string make;
    string model;
    string category;
public:
    Car();
    Car(int a, string b, string c, string d);
    int getid();
    string getmake();
    string getmodel();
    string getcategory();
    
    void setid(int i);
    void setmake( string m);
    void setmodel(string mo );
    void setcategory(string ca );
    
    
    
    
};
#endif
