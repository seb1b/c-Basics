#include "iostream"

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{

public:
	Animal(){}
	Animal(std::string name,int speed):name_(name),speed_(speed){}
	
	virtual void print(){
		std::cout<<name_ <<" the animal goes " << speed_<< " per hour."<<std::endl;
	}



private:
	std::string name_;
	int speed_;

};

#endif