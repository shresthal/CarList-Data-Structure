//
//  car.cpp
//  Arraylist
//
//  Created by Luja Shrestha on 2/18/19.
//  Copyright © 2019 Luja Shrestha. All rights reserved.
//

#include "car.hpp"

Car::Car()

{
    id = 0;
    make = " " ;
    model = " ";
    category = " ";
    
}
Car::Car(int a, string b, string c, string d)
{
    id = a;
    make = b;
    model = c;
    category = d;
    
    
}

int Car::getid()
{
    return id;
}
string Car::getmake()
{
    return make;
}
string Car::getmodel()
{
    return model;
}
string Car::getcategory()
{
    return category;
}

void Car::setid(int a)
{
    id = a;
    
}
void Car::setmake(string b)
{
    make = b;
    
}
void Car::setmodel(string c )
{
    model = c;
}
void Car::setcategory(string d )
{
    category = d;
}
