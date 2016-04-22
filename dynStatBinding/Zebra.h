#ifndef ZEBRA_H
#define ZEBRA_H

#include "Animal.h"
#include "iostream"

class Zebra: public Animal {

public:
	Zebra(std::string name, int speed):name_(name),speed_(speed){}

	virtual void print(){
		std::cout<<name_ <<" the zebra runs " << speed_<< " per hour."<<std::endl;
	}


private:
	std::string name_;
	int speed_;





};

#endif