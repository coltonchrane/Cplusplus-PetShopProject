// Unit7Final.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class animalType {//animal class
public:
	//declare member variables
	string name;
public:
	//declare memebr functions
	void setName(string n);
	void print() const;
	//Declare constructors
	animalType();
	animalType(string n);
};
class dogType : public animalType {//dog class derived from animal USING INHERITANCE
public:
	//declare member variables
	string name;
	string color;
	string breed;
	string gender;
public:
	//declare memebr functions
	void setAttributes(string, string, string,string);
	void setName(string);
	void setBreed(string);
	void setColor(string);
	void setGender(string);
	void print() const;
	//Declare constructors
	dogType();
	dogType(string, string, string, string);
};
//Implement member functions
void animalType::setName(string n)
{
	name = n;
}

void animalType::print() const
{
	std::cout << "Name: ";
	std::cout << name << endl;
}
//Implement constructors
animalType::animalType()
{
	name = "";
}
animalType::animalType(string n)
{
	setName(n);
}
//Implement member functions
void dogType::setAttributes(string n, string b, string c, string g)
{
	name = n;
	breed = b;
	color = c;
	gender = g;
}
void dogType::setName(string n)
{
	name = n;
}
void dogType::setColor(string c)
{
	color = c;
}
void dogType::setBreed(string b)
{
	breed = b;
}
void dogType::setGender(string g)
{
	gender = g;
}
void dogType::print() const
{
	std::cout << "Name: ";
	std::cout << name;
	std::cout << " Color: ";
	std::cout << color;
	std::cout << " Breed: ";
	std::cout << breed;
	std::cout <<" Gender:";
	std::cout << gender << endl;
}
//Implement constructors
dogType::dogType() : animalType()
{
	name = "";
}
dogType::dogType(string n, string c, string b,string g) : animalType(n)
{
	setAttributes(n,c,b,g);
}
enum breed {ShihTzu, beagle, lab}bre;//enum
int main()//main
{
	string name;
	string color;
	string breed;
	string gender;
	string popDogNames[9] = { "Bella","Charlie","Luna","Lucy","Max","Bailey", "Cooper","Daisey","Fido"}; //1-D Array
	std::cout << "Welcome to Dan's dog shop!"<<endl;
	std::cout << "Heres our most popular dog names: " << endl;
	for (int i = 0; i <= 8; i++)
	{
		std::cout << popDogNames[i] << endl;
	}
	std::cout << "Enter your desired dogs name: " << endl;
	std::cin >> name;
	std::cout << "Enter your desired dogs color: " << endl;
	std::cin >> color;
	std::cout << "Enter your desired dogs breed: " << endl;
	std::cin >> breed;
	std::cout << "Do you want your dog to be a boy(1) or girl(2)?"<<endl;
	std::cin >> gender;
	if (gender.compare("1"))//string method
	{
		gender = "Male";
	}
	if (gender.compare("2"))
	{
		gender = "Female";
	}
	std::cout << "...Building dog!..."<<endl;
	dogType dog = dogType(name, color, breed, gender);
	dog.print();
	cout << endl;
	cout << "I went to the zoo but they only had one small dog..." << endl;
	bre = ShihTzu;//enum
	switch (bre) 
	{
	case ShihTzu: cout<< "Shih-Tzu";

	}
	

}
