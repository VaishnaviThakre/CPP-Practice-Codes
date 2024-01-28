//Create a class called "Car" with attributes like make, model, and year. 
//Write member functions to display the car details and calculate its age based on the current year.

#include<iostream>
using namespace std;

class Car{
	public:
	int year;
	string model;
	
	void dis_details(int y,string m){
		
		year =y;
		model=m;
		
		cout<<"\nModel of the car is: "<<model;
		cout<<"\nYear of the car is: "<<year;
		
		
	}
	void age(){
		int cy;
		int fage;
		cout<<"\nEnter the current year: ";
		cin>>cy;
		fage = cy - year;
		cout<<"\nAge of the car is: "<<fage;
		
	}	
};

int main(){
	int year;
	string name;
	cout<<"Enter model name: ";
	cin>>name;
	cout<<"\nEnter year of launch: ";
	cin>>year;
	
	Car c;
	c.dis_details(year,name);
	c.age();
}
