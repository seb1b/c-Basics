#ifndef LION_H
#define LION_H

#include "Animal.h"
#include "iostream"



class Lion: public Animal{
public:
	Lion(std::string name, int speed):name_(name),speed_(speed){}

	virtual void print(){
		std::cout<<name_ <<" the lion runs " << speed_<< " per hour."<<std::endl;
	}


private:
	std::string name_;
	int speed_;

};

#endif