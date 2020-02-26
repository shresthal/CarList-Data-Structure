//
//  main.cpp
//
//
//  Created by Luja Shrestha on 2/11/19.
//  Copyright © 2019 Luja Shrestha. All rights reserved.
//
/*
 * Luja shrestha
 * K687e787
 * program 2
 *
 * Description: Its run all and input data from file and store them ito file.
 *
 *
 * pseudo:
      *introduction of retal with list to do
      * switch statement where it has
          1- search by id (search id that user give in the car.data
          2- search by make (seacrh make that user give in the car.data
          3- search by category (seacrh category that user give in the car.data
          4- Add a new car(add new car in car.data)
          5-del car
          6- list-out all cars (print all cars)
          7- Exit
        * */

#include <iostream>
#include <fstream>
#include <iomanip>

#include "arraylist.hpp"
#include "car.hpp"

using namespace std;



int main(int argc, const char * argv[])
{
   int choice;



   Arraylist obj;
   ifstream in;
  // int carnum=0;
   int id;
   string make;
   string model;
   string category;
   Car a;
   in.open("cars.data");
   {





   while(in>>id)
   {
	  in>>make>>model>>category;
	  a.setid(id);
	  a.setmake(make);
	  a.setmodel(model);
	  a.setcategory(category);
	  obj.add(a);
  }
	 }




   in.close();





     do
    {
        cout << " WELCOME TO LUXARY RENTAL" << endl;

        cout << " Pick the list to search retal car \n"
        << "1- search by id \n"
        << "2- search by make \n"
        << "3- search by category \n"
        << "4- Add a new car \n"
        << "5- Delete an Existing car By idex\n"
        << "6- list-out all cars\n"
        << "7- Exit \n"
        << "Enter your choice:";
        cin >> choice;

        switch(choice)
        {
			case 1:
			{

				cout << " Enter number ID to search:";
				cin>>id;

				 for (int i = 0; i < obj.size(); i++)
				{
				     if ( id == obj[i].getid())
				     {
						 cout << obj[i].getid() << " "<< obj[i].getmake()
						      << " "<< obj[i].getmodel() << " "<< obj[i].getcategory() <<endl<<endl;;
					 }

			    }





			  break;
			 case 2:
			{
				//int i = 0;
				cout << " Enter make to search:";
				cin>>make;

				 for (int i = 0; i < obj.size(); i++)
				{
				     if ( make == obj[i].getmake())
				     {
						 cout << obj[i].getid() << " "<< obj[i].getmake()
						      <<" "<< obj[i].getmodel() << " "<< obj[i].getcategory() <<endl<<endl;;
					 }


			    }


			}

			  break;
			case 3:
			{
				cout << " Enter category to search:";
				cin>>category;

				 for (int i = 0; i < obj.size(); i++)
				{
				     if ( category == obj[i].getcategory())
				     {
						 cout << obj[i].getid() << " "<< obj[i].getmake()
						      <<" "<< obj[i].getmodel() << " "<< obj[i].getcategory() <<endl<<endl;;
					 }


			    }
			}
			  break;
			 case 4:

			{
				cout<<"Enter a New car :"<<endl;
				cout<<"Enter a id:";
				cin >> id;

				for (int i=0; i<obj.size(); i++)
			{
				if (id==obj[i].getid())
				{
					cout << "Invalid Input."<<endl;
					cout<<"Enter the another ID that is not in list:";
					cin>>id;
				}
			}
				cout << "Enter a make:";
				cin >>make;
				cout << "Enter a model:";
				cin >>model;
				cout <<" Enter a category:";
				cin >>category;
				while( category != "compact" && category != "mid-size" && category != "full-size" && category != " truck" &&
				category != "m-suv" && category != "f-suv" && category != "compact" && category != "mini-van ")
				{
					cout<< " Not valid category"<<endl;
					cout << " Enter valid category:";
					cin >>category;

				}
				a.setid(id);
	           a.setmake(make);
	          a.setmodel(model);
	           a.setcategory(category);
	           obj.add(a);


			  break;
			 case 5:
			{

				cout<<"Enter the idex you want to delete:";
				cin >> id;
				 for (int i = 0; i <obj.size(); i++)
				{
					 if ( id == obj[i].getid())
					 {
					  obj.del(id);
					 }


			      }

				for ( int i=0; i<obj.size(); i++)
			   {
				cout << obj[i].getid() << " "<< obj[i].getmake()
						      << " "<< obj[i].getmodel() << " "<< obj[i].getcategory() <<endl<<endl;;
				}
			}

			  break;
			   case 6:
			{
				cout<< "list of cars:"<<endl;
			for ( int i=0; i<obj.size(); i++)
			{

				cout << obj[i].getid() << " "<< obj[i].getmake()
				      << " "<< obj[i].getmodel() << " "<< obj[i].getcategory() <<endl<<endl;;
					 }
			}
			}
			  break;
			 case 7:
			cout<<" End of choice. Thank you!!\n";
			  break;
			default:
			cout<< " INVALID CHOICE. \n"
			    << " CHOOSE AGAIN.\n";
			 break;

		}

    }
}

    while ( choice!=7);

    if ( obj.size() > 1)
    {
		ofstream out;
		out.open("cars.data");

		for(int x=0; x<obj.size(); x++)
		{
			out <<  obj[x].getid() << " "<< obj[x].getmake()
			  << " "<< obj[x].getmodel() << " "<< obj[x].getcategory()<<endl;;
		}
		out.close();
	}

        return 0;
}
